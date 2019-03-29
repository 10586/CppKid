#include <iostream>
using std::cout;
using std::endl;
// ����1���̳й��캯��
//   ��������B�����캯��B(int)��B(char)��������D��D�в��̳�/�̳�B��ctorʱ��Ч��

// ����2���������е��û��๹�캯��
//   D�����ӳ�Աdouble x����D(double)����D(double)��ʼ���б����B(i)����ʼ�� x

// ����3���������ȵ�����ctor���ٹ�����Ƕ����
//   ������E��E(int)������D�м���E����������;����D����۲�E ctor��B ctor����

class B {
public:
  B() { cout << "B()" << endl; }
  B(int i) { cout << "B(" << i << ")" << endl; }
  B(char c) { cout << "B(" << c << ")" << endl; }
};

class E {
public:
  E() { cout << "E()" << endl; }
};

class D : public B {
public:
  using B::B;
  D() = default;
  // D(int i):B(i) {}
  // D(char c) {}
  D(double x) : e1{} , e2{} , B(static_cast<int>(x)) { cout << "D(" << x << ")" << endl; }
private:
  E e1 , e2;
};

int main() {
  B b;
  D d;
  D d2{ 3.03 };
  std::cin.get();
}