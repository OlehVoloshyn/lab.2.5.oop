#include"Alcohol.h"
#include <iostream>
using namespace std;
int main()
{
	Alcohol a;
	cout << ++a << endl;
	cout << --a << endl;
	cout << a++ << endl;
	cout << a-- << endl;

	cout << " "; cin >> a;
	cout << a << endl;
	a.changeStrength(a.getLiquid());
	cout << a;

	return 0;
}
