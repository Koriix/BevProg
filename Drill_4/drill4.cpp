#include "std_lib_facilities.h"

int main()
{
	//1.
	/*int a = 0;
	int b = 0;*/
	//4.
	double a = 0;
	double b = 0;

	cout << "Enter two number:\n";
	while (cin >> a >> b)
	{
		cout << a << " " << b << endl;
		//2.
		if (a > b)
			cout << "The larger value is: " << a << "   The smaller value is: " << b << endl;
		if (a < b)
			cout << "The larger value is: " << b << "   The smaller value is: " << a << endl;
		//3.
		if (a == b)
			cout << "The numbers are equal.\n";
		//5.
		if (abs(a-b)<=0.01)
			cout << "The numbers are almost equal.\n";
	}

	return 0;
}