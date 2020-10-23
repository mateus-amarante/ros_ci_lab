// Copyright 2020 Mateus Amarante

#ifndef ROS_CI_LAB__COMMON_OPERATIONS_HPP_
#define ROS_CI_LAB__COMMON_OPERATIONS_HPP_

namespace ros_ci_lab
{

constexpr double factorial(unsigned int n)
{
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

class Point2D
{
public:
  explicit Point2D(double x = 0, double y = 0);

  double x() const;
  double y() const;

  void x(double x);
  void y(double y);

  double module() const;
  Point2D & operator+=(const Point2D & other);
  Point2D & operator-=(const Point2D & other);

private:
  double x_;
  double y_;
};

}  // namespace ros_ci_lab

#endif  // ROS_CI_LAB__COMMON_OPERATIONS_HPP_
