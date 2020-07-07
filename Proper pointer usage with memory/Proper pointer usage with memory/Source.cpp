#include <iostream>

using namespace std;

int* Func();
void Use(int* noptrInt);

int main() {

	cout << "Proper pointer usage with memory\n" << endl;

	int* optrNewInt = Func();

	Use(optrNewInt);

	delete optrNewInt;

	optrNewInt = nullptr;

	return 0;
}

int* Func()
{
	return new int;//ok to do so
}

void Use(int* noptrInt)
{
	//use the ptr
}