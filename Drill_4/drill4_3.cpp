#include "std_lib_facilities.h"

int main()
{
	//7.-10.
	double szam = 0;
	double meter = 0;
	double max = 0, min = 0, szum = 0, szamdb = 0;
	string unit;
	vector<double> values;

	cout << "Enter a number in meter (use this units m, cm, in, ft).\n";
	while(cin >> szam >> unit)
	{
		if(unit == "m" || unit == "cm" || unit == "in" || unit == "ft")
		{
			cout << "Your number: " << szam << " " << unit << endl;
			//meter
			if(unit == "m")
			{
				szum = szum+szam;
				meter = szam;
			}
			//centimeter
			if(unit == "cm")
			{
				szum = szum+(szam/100);
				meter = szam/100;
			}
			//inch
			if(unit == "in")
			{
				szum = szum+(szam*2.54/100);
				meter = szam*2.54/100;
			}
			//feet
			if(unit == "ft")
			{
				szum = szum+(szam*12*2.54/100);
				meter = szam*12*2.54/100;
			}

			szamdb = szamdb+1;
			if(max == 0 && min == 0)
			{
				max = meter;
				min = meter;
			}
			if(max < meter)
				max = meter;
			if(min > meter)
				min = meter;

			values.push_back(meter);
		}
		else if(unit != "m" && unit != "cm" && unit != "in" && unit != "ft")
			cout << "This is an illegal unit!\n";
	}

	cout << "The smallest value is: " << min << " m" << endl;
	cout << "The largest value is: " << max << " m" << endl;
	cout << "The sum of the values are: " << szum << endl;
	cout << "The number of values are: " << szamdb << endl;

	//11.
	sort(values);
	cout << "The values in increasing order: \n";
	for(int i = 0; i < values.size(); ++i)
		cout << values[i] << " m" << endl;

	return 0;
}