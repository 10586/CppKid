#pragma once
#include "Shape.h"
// ��ȫCircle�࣬��Shape�̳�
class Circle : public Shape {
  double radius;

public:
  Circle();
  Circle(double radius_ , Color color_ , bool filled_);

  virtual double getArea() override;
  double getRadius() const;
  void setRadius(double radius);

  string toString();
};