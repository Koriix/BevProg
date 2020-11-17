#include "std_lib_facilities.h"

struct Points
{
	int hours;
	double meter;
	
};

bool operator==(const Points& v1, const Points& v2)
{
	return v1.hours == v2.hours && v1.meter == v2.meter;
}

bool operator!=(const Points& v1, const Points& v2)
{
	return v1.hours != v2.hours || v1.meter != v2.meter;
}

int main()
try{

	cout << "Enter input file name: ";
	string iname;
	cin >> iname;

	ifstream ist {iname};

	if(!ist) error("can't open input file", iname);

	vector <Points> original_points;
	int hours;
	double meter;

	while(ist >> hours >> meter)
		original_points.push_back(Points{hours,meter});
	ist.close();

	for (const auto& r : original_points)
		cout << r.hours << ' ' << r.meter << endl;

	cout << "Enter output file name: ";
	string oname;
	cin >> oname;

	ofstream ost {oname};

	if(!ost) error("can't open output file", oname);

	for(const auto& v : original_points)
		ost << '(' << v.hours << ", " << v.meter << ')' << endl;
	ost.close();

	ifstream ist2{oname};

	if(!ist2) error("can't open input file", oname);

	vector<Points>processed_points; 
	char oza = '(';
	string pove = ", ";
	char cza = ')';
	
	while(ist2 >> oza >> hours >> pove >>  meter >> cza)
		processed_points.push_back(Points{hours,meter});
	ist2.close();
	for(int i = 0; i < processed_points.size(); ++i)
		cout << '(' << original_points[i].hours << ", " << original_points[i].meter << ")\n";

	if(original_points.size() != processed_points.size()) error ("Somethin's wrong!");
	for(int i = 0; i = original_points.size(); ++i)
	{
		if(original_points[i] != processed_points[i])
			error ( "Somethin's wrong!");
	}
	cout << "The vectors are  diff!\n";


	return 0;

}
catch (runtime_error& e)
{
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch (...)
{
	cerr << "Some error\n";
	return 2;
}