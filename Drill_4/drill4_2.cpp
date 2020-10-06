#include "std_lib_facilities.h"
//6.
int main()
{
	double szam = 0;
	double smallest = numeric_limits<double>::max();
	double largest = numeric_limits<double>::lowest();

	cout << "Enter a number:\n";
	
	while (cin >> szam)
	{

		
		if (szam > largest)
		{
			largest = szam;
			cout << "The largest so far: " << largest << endl;
			
		}

		if (szam < smallest)
		{
			smallest = szam;
			cout << "The smallest so far: " << smallest << endl;

		}

	}

	return 0;

}