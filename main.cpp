#include <iostream>
#include <cstdlib> // ��� system
using namespace std;

void say_hello()
{
	cout << "Hello, world!" << endl;
}

int main() 
{ 
    say_hello();
    system("pause"); // ������ ��� ���, � ���� MS Visual Studio
    return 0; 
}
