#include <iostream>
#include <filesystem>
using std::cout;
using std::endl;

int main() {
  namespace fs = std::filesystem;
  // ����·��p
  fs::path p{ R"(D:\cpp\Example\Unit07\PathQuery\PathQuery.cpp)" };
  // �Ƿ���ڣ���������·�������·����
  if (p.empty()) {
    cout << "Path " << p << " is empty." << endl;
  }

  if (!fs::exists(p)) {
    cout << "Path " << p << " does not exist." << endl;
    std::exit(0);
  }

  cout << "root_name(): " << p.root_name() << "\n"
    << "root_path(): " << p.root_path() << "\n"
    << "relative_path(): " << p.relative_path() << "\n";
  // ��·�����ļ������ļ������ɣ���չ����
  cout << "parent_path(): " << p.parent_path() << "\n"
    << "filename(): " << p.filename() << "\n"
    << "stem(): " << p.stem() << "\n"
    << "extension(): " << p.extension() << endl;

  std::cin.get();
}