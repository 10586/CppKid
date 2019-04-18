// �����C++17֧��
#include <iostream>
#include <filesystem>
#include <string>

int main() {
  namespace fs = std::filesystem;
  // ����·����ʹ�����ַ�����ת���ַ�������б���ַ���
  fs::path p1{ "d:\\cpp\\Example\\Unit07\\CheckPath\\Hello.txt" };
  fs::path p2{ R"(d:\cpp\Example\Unit07\CheckPath)" };
  fs::path p3{ "d:/cpp/Example/Unit07/CheckPath/Hello.txt" };

  // ���Ĭ���ļ��ָ���
  std::cout << "file separator is: " << fs::path::preferred_separator << std::endl;

  // �ж��Ƿ��ǳ����ļ�������ǣ�����ļ���С
  if (fs::is_regular_file(p2)) {
    std::cout << p2 << "'s size is: " << fs::file_size(p2) << std::endl;
  }   // �ж��Ƿ���Ŀ¼�������Ŀ¼���г�����Ŀ¼

  else if (fs::is_directory(p2)) {
    std::cout << p2 << "is a directory, includes: " << std::endl;
    for (auto& e : fs::directory_iterator(p2)) {
      std::cout << "  " << e.path() << '\n';
    }
  }

  // �ж�·���Ƿ����
  else if (fs::exists(p2)) {
    std::cout << p2 << " is a special file\n";
  }
  else {
    std::cout << p2 << " does not exist" << std::endl;
  }

  std::cin.get();
}