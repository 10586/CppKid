#include <iostream>
#include <array>
#include <cassert> // ʹ�� assert() �����������ͷ�ļ�
using std::cout;
using std::endl;
//����1���õݹ����factorial���� assert ��� 3�Ľ׳�
//����2����factorial��ɳ������ʽ����static_assert���3�Ľ׳ˣ�
//����3������ factorial(4)��С������
constexpr int factorial(int n) {
  if (n == 0) {
    return 1; // error
  }
  else {
    return n * factorial(n - 1);
  }
}
int main() {
  static_assert(factorial(4) == 24 , "factorial(4) should be 24");
  std::array<int , factorial(4)> a;
  cout << a.size();
  std::cin.get();
  return (0);
}