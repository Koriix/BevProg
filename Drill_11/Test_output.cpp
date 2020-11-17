#include "std_lib_facilities.h"

int main()
{

	int birth_year = 2001;
	cout << showbase << dec;
	cout << birth_year << "\t(decimal)\n"
	<< hex << birth_year << "\t(hexadecimal)\n"
	<< oct << birth_year << "\t(octal)\n";
	cout << endl;
	
	cout << noshowbase << dec;

	int my_age = 19;
	cout << my_age << "\t(My age in decimal)"<< endl;
	cout << endl;

	int a = 0, b = 0, c = 0, d = 0;
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

	cout << 1234567.89 << "\t(defaultfloat)\n"
	<< fixed << 1234567.89 << "\t(fixed)\n"
	<< scientific << 1234567.89 << "\t(scientific)\n";
	cout << endl;

	cout << "Kerekes" << "\t Konrad" << "\t   06204443467" << "\t konraad.kerekes@gmail.com\n"
		 << "Demeter" << "\t Benjamin" << "  06704743167" << "\t demeterbeni@gmail.com\n"
		 << "Vadnai" << "\t Peter" << "\t   06304240482" << "\t vadnaypeter@gmail.com\n"
		 << "Zakar" << "\t Armin" << "\t   062034994965" << "\t arminzakar@gmail.com\n"
		 << "Racz" << "\t Larion" << "\t   06200037167" << "\t larionvok@gmail.com\n"
		 << "Mallik" << "\t Endru" << "\t   20040442777" << "\t hiiamendru@gmail.com\n"; 

	return 0;
}