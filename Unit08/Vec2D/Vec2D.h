#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <exception>
class Vec2D {
public:
  Vec2D();
  Vec2D(double , double);
  ~Vec2D();
private:
  double x_;
  double y_;
public:
  // ������ת��Ϊ�ַ�����ʽ��ʾ
  std::string toString();
  // �����ӷ�
  Vec2D add(Vec2D secondVec2D);
  // ��������ֵ�ļӷ�
  Vec2D add(double numeral);
  // ��������
  Vec2D subtract(Vec2D secondVec2D);
  Vec2D subtract(double numeral);
  // �������
  double dot(Vec2D secondVec2D);
  // ��������
  Vec2D multiply(double multiplier);
  // ������ֵ
  Vec2D negative();
  // ��������1
  Vec2D& increase();
  // �����Լ�1
  Vec2D& decrease();
  // ��ȡ�����޸�����Ԫ��
  double& at(const int index);
  // �������ķ���������)
  double magnitude();
  // ��������x+��ļн�
  double direction();
  // �Ƚ����������ĳ��ȡ����firstVec2DС��secondVec2D������-1���������򷵻�1��������򷵻�0
  int compareTo(Vec2D secondVec2D);
};
