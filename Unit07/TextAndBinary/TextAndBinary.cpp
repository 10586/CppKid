// TextAndBinary.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//
import std.core; // replace <fstream> <iostream>
import std.filesystem; // replace

//#include <fstream>
//#include <iostream>
//#include <filesystem>

using namespace std::string_literals;
namespace fs = std::filesystem;
int main() {
  //std::filesystem::path p1{ "text.dat" };
  //std::filesystem::path p2{ "bin.dat" };
  auto p1{ "text.dat"s };
  auto p2{ "binary.dat"s };

  std::ofstream outText{ p1 };
  //std::ofstream outBin{ p2 };
}