// Copyright 2020 Mateus Amarante

#include "ros_ci_lab/common_operations.hpp"

#include <cmath>

namespace ros_ci_lab
{

Point2D::Point2D(double x, double y)
: x_(x), y_(y) {}

Point2D & Point2D::operator+=(const Point2D & other)
{
  x_ += other.x_;
  y_ += other.y_;
  return *this;
}

Point2D & Point2D::operator-=(const Point2D & other)
{
  x_ -= other.x_;
  y_ -= other.y_;
  return *this;
}

double Point2D::module() const {return std::sqrt(x_ * x_ + y_ * y_);}

double Point2D::x() const {return x_;}
double Point2D::y() const {return y_;}

void Point2D::x(double x) {x_ = x;}
void Point2D::y(double y) {y_ = y;}

}  // namespace ros_ci_lab
