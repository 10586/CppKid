#include <iostream>

int lv1{ 42 }; // Object
int& lv2() {
  return lv1; // Function returning Lvalue Reference
}

int prv(int x) {
  return 6 * x;
}
int main() {
  //  int& lv3{ lv1 }; // Lvalue reference to Object
  //  int* lv4{ &lv1 }; // Pointer to Object
  //  &lv2(); // Pointer to Object
  //
  const int& lvr5{ 21 }; // ������ֵ���ÿ����ô���ֵ
  int& lvr6{ 22 }; // ���ǳ�����ֵ���ò������ô���ֵ
  int&& rvr1{ 22 }; // ��ֵ���ÿ������ô���ֵ
  int& lvr7{ prv(2) }; // ���ǳ�����ֵ���ò������ô���ֵ
  int&& rvr2{ prv(2) }; // ��ֵ������ͨ��������ֵ
  rvr1 = ++rvr2; // ��ֵ��������ֵʹ��
}