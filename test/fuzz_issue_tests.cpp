/*
Copyright � 2019,
Lawrence Livermore National Security, LLC;
See the top-level NOTICE for additional details. All rights reserved.
SPDX-License-Identifier: BSD-3-Clause
*/

#include "units/units.hpp"

#include "test.hpp"
#include <fstream>
#include <iostream>

using namespace units;
TEST(fuzzFailures, convFailures)
{
    EXPECT_NO_THROW(unit_from_string("+z264"));
    EXPECT_NO_THROW(unit_from_string("+4560"));
    EXPECT_NO_THROW(unit_from_string("24250v"));
    EXPECT_NO_THROW(unit_from_string("8("));
    EXPECT_NO_THROW(unit_from_string("8{"));
    EXPECT_NO_THROW(unit_from_string("0^%"));
    EXPECT_NO_THROW(unit_from_string("10*1001"));
    EXPECT_NO_THROW(unit_from_string("s)^(z()."));
    EXPECT_NO_THROW(unit_from_string("--+10*+1+110 U"));
    EXPECT_NO_THROW(unit_from_string("EQXUN[{ ["));
}

std::string loadFailureFile(const std::string &type, int index)
{
    std::string fileName(TEST_FILE_FOLDER "/fuzz_issues/");
    fileName.append(type);
    fileName += std::to_string(index);
    std::ifstream crashFile(fileName, std::ios::in | std::ios::binary);
    if (crashFile)
    {
        std::vector<char> buffer(std::istreambuf_iterator<char>(crashFile), {});

        std::string cdata(buffer.begin(), buffer.end());
        return cdata;
    }
    return std::string{};
}

class crashProblems : public ::testing::TestWithParam<int>
{
};

TEST_P(crashProblems, crashFiles)
{
    auto cdata = loadFailureFile("crash", GetParam());
    EXPECT_NO_THROW(unit_from_string(cdata));
}

INSTANTIATE_TEST_SUITE_P(crashFiles, crashProblems, ::testing::Range(1, 25));

TEST(fuzzFailures, timeouts)
{  // testing string that have caused a timeout from fuzz testing
    EXPECT_NO_THROW(unit_from_string("3*3*"));
    EXPECT_NO_THROW(unit_from_string("((())"));
}

class timeoutProblems : public ::testing::TestWithParam<int>
{
};

TEST_P(timeoutProblems, timeoutFiles)
{
    auto cdata = loadFailureFile("timeout", GetParam());
    ASSERT_FALSE(cdata.empty());
    EXPECT_NO_THROW(unit_from_string(cdata));
}

INSTANTIATE_TEST_SUITE_P(timeoutFiles, timeoutProblems, ::testing::Range(1, 22));

class slowProblems : public ::testing::TestWithParam<int>
{
};

TEST_P(slowProblems, slowFiles)
{
    auto cdata = loadFailureFile("slow", GetParam());
    ASSERT_FALSE(cdata.empty());
    EXPECT_NO_THROW(unit_from_string(cdata));
}

INSTANTIATE_TEST_SUITE_P(slowFiles, slowProblems, ::testing::Range(1, 37));

class oomProblems : public ::testing::TestWithParam<int>
{
};

TEST_P(oomProblems, oomFiles)
{
    auto cdata = loadFailureFile("oom", GetParam());
    ASSERT_FALSE(cdata.empty());
    EXPECT_NO_THROW(unit_from_string(cdata));
}

INSTANTIATE_TEST_SUITE_P(oomFiles, oomProblems, ::testing::Range(62, 63));

TEST(fuzzFailues, rtripconversions)
{
    auto u1 = unit_from_string("^");
    EXPECT_FALSE(u1.is_error());
    auto str = to_string(u1);
    EXPECT_FALSE(unit_from_string(str).is_error());
}

class rtripProblems : public ::testing::TestWithParam<int>
{
};

TEST_P(rtripProblems, rtripFiles)
{
    auto cdata = loadFailureFile("rtrip_fail", GetParam());
    auto u1 = unit_from_string(cdata);
    EXPECT_FALSE(u1.is_error());
    auto str = to_string(u1);
    EXPECT_FALSE(unit_from_string(str).is_error());
}

INSTANTIATE_TEST_SUITE_P(rtripFiles, rtripProblems, ::testing::Range(3, 4));