#include <iostream>
#include <fstream>

/**
 * �÷��� tee2 �����ļ���  ����ļ���
 * ���ã� �������ļ�����������ļ���ͬʱ��ʾ����Ļ��
 */
int main(int argc , char* argv[]) {
  // �����������
  if (argc != 3) {
    std::cout << R"(Usage: tee <Input File> <Output File>)" << std::endl;
    return 0;
  }

  // ���������ļ���������ļ���
  std::ifstream in{ argv[ 1 ] };
  std::ofstream out(argv[ 2 ]); // , std::ios::binary | std::ios::trunc);

  // ����ļ����Ƿ�ɹ���
  if (!in) {
    std::cout << "Can't open input file " << argv[ 1 ] << std::endl;
    std::exit(1);
  }
  if (!out) {
    std::cout << "Can't open output file " << argv[ 2 ] << std::endl;
    std::exit(1);
  }

  // �����ݴ�Դ�ļ�������Ŀ���ļ���ͬʱ��ʾ����Ļ��
  /*
  char c{ '\0' };
  while (!in.eof()) { // ����д��������
    in.get(c);        // �Ѿ��������һ���ַ���Ȼ����ִ�д˾�ʱ���Żᵼ��eof()Ϊ��
    out.put(c);
    std::cout << c;
  }
  */
  /* ͬ��������
  char c{ '\0' };
  do {
    in.get(c);        // �Ѿ��������һ���ַ���Ȼ����ִ�д˾�ʱ���Żᵼ��eof()Ϊ��
    out.put(c);
    std::cout << c;
  } while (!in.eof()) { // ����д��������
  */
  char c{ '\0' };
  while (!in.get(c).eof()) { // ��get(c)����eof()Ϊ�棬���ʱc����Ч�ġ�
    out.put(c);
    std::cout << c;
  }

  // �ر��ļ���
  in.close();
  out.close();
  return 0;
}