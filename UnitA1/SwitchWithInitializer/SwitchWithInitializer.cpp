#include <iostream>
using std::cout;
using std::endl;
// �ٷ��Ƴɼ�ת��Ϊ����Ƴɼ�
int main() {
  // ��ʾ�û�����γ̳ɼ�
  cout << "������γ̳ɼ���";
  // ����ٷ��Ƴɼ�
  int score = 0;
  std::cin >> score;
  // �ٷ��Ƴɼ�����10�����ô��г�ʼ������switch�����ݽ���б�����Ƶȼ�
  switch (int x = score / 10; x) {
    case 10:
    case 9:
      cout << "�������Ƴɼ���A\n";
      break;
    case 8:
      cout << "�������Ƴɼ���B\n";
      break;
    case 7:
      cout << "�������Ƴɼ���C\n";
      break;
    case 6:
      cout << "�������Ƴɼ���D\n";
      break;
    default:
      cout << "�������Ƴɼ���E\n";
  }
}