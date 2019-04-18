#pragma once
#include <string>
class Vec2D {
private:
  /// ƽ������������Ԫ��
  double x_{ 0.0 } , y_{ 0.0 };
public:
  Vec2D() = default;
  Vec2D(double x , double y) : x_{ x } , y_{ y } {}
  Vec2D add(Vec2D&); // �����ӷ�
  Vec2D subtract(Vec2D&); // ��������
  double dot(Vec2D&); // �������
  Vec2D multiply(double); // ��������
  // Vec2D cross(Vec2D&); // �����������2D vectorδ������
  double magnitude(); // �����ĳ���
  double direction(); // �����ķ���
  Vec2D negative(); // ������ (x, y) -> (-x, -y)
  Vec2D& increase(); // �����Լ�1
  Vec2D& decrease(); // �����Լ�1

  double at(int i); // ��ȡ�����ĵ�i��Ԫ��ֵ

  bool equals(Vect2D&); // �ж������Ƿ����
  compareTo(Vect2D&);  // �Ƚ����������ĳ���
  std::string toString();
};