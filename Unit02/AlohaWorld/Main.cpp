#include <iostream>
//using namespace std;
using std::cout;
using std::endl;
void f();
int main() {
    f();
    return 0;
}
namespace MyAloha {
    int main() {
        cout << "Aloha, World!" << endl;

        std::cin.get();
        return 0;
    }
}
void f() {
    /* Variable initialization */
    // Direct list initialization (ֱ���б��ʼ��)
    int x{}; // x is 0;
    int y{ 1 }; // y is 1;

    // Copy list initialization (�����б��ʼ��)
    int z = { 2 };

    /* Array initialization */
    int array1[]{ 1,2,3 };
    int array2[] = { 4,5,6 };


    char s1[ 3 ] { 'o', 'k' };
    char s2[] = { 'y','e','s' };
    char s3[]{ "Hello" };
    char s4[] = { "World" };
    char s5[] = "Aloha"; // Omit curly braces (ʡ�Ի�����)
    std::cin.get();
}