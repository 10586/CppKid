class A {
public:
  virtual void foo() {}
  void bar() {}
};

class B : public A {
  //void foo() const override { // ���� B::foo ����д A::foo
  //}                           // ��ǩ����ƥ�䣩
  void foo() override; // OK �� B::foo ��д A::foo
  //void bar() override {} // ���� A::bar ����
};

void B::foo() override {
}