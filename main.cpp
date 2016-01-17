#include <iostream>
#include <cstdlib> // для system
using namespace std;

void say_hello()
{
	cout << "Hello, world!" << endl;
}

int main() 
{ 
    say_hello();
    system("pause"); // Только для тех, у кого MS Visual Studio
    return 0; 
}
