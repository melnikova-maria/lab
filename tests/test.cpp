// Copyright 2021 Melnikova Maria dandelion.m@mail.ru

#include <stdexcept>

#include <gtest/gtest.h>

#include <suggestion.hpp>

    TEST(Example, EmptyTest) {
  EXPECT_THROW(example(), std::runtime_error);
}