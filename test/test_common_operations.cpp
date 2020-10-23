// Copyright 2020 Mateus Amarante

#include "ros_ci_lab/common_operations.hpp"

#include "gtest/gtest.h"

using ros_ci_lab::Point2D;

TEST(TestFactorial, FactorialBasics) {
  EXPECT_EQ(1, ros_ci_lab::factorial(0));
  EXPECT_EQ(1, ros_ci_lab::factorial(1));
  EXPECT_EQ(2, ros_ci_lab::factorial(2));
  EXPECT_EQ(6, ros_ci_lab::factorial(3));
  EXPECT_EQ(24, ros_ci_lab::factorial(4));
  EXPECT_EQ(24 * 5, ros_ci_lab::factorial(5));
}

TEST(TestPoint2DClass, ConstructorAndGetters) {
  Point2D default_point;
  Point2D point_x(-1.);
  Point2D point_xy(2., -3.);
  EXPECT_DOUBLE_EQ(0., default_point.x());
  EXPECT_DOUBLE_EQ(0., default_point.y());

  EXPECT_DOUBLE_EQ(-1., point_x.x());
  EXPECT_DOUBLE_EQ(0., point_x.y());

  EXPECT_DOUBLE_EQ(2., point_xy.x());
  EXPECT_DOUBLE_EQ(-3., point_xy.y());
}

TEST(TestPoint2DClass, Setters) {
  Point2D point;
  point.x(4.);
  point.y(5.);
  EXPECT_DOUBLE_EQ(4., point.x());
  EXPECT_DOUBLE_EQ(5., point.y());
}
