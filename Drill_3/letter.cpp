#include "std_lib_facilities.h"

int main()
{
	//1.
	/*cout << "Please enter your first name (follow by 'enter'):\n";
	string first_name;
	cin >> first_name;
	cout << "Hello, " << first_name << "!\n";*/

	
	cout << "Enter the name of the person you want to write to (follow by 'enter'): \n";

	string name;
	cin >> name;

	cout << "Dear " << name << ",\n";

	//2.
	cout << "How are you? I am fine.\n";
	cout << "I want to meet you ASAP.\n";

	cout << "Enter the name of another friend (follow by 'enter'): \n";

	//3.
	string friend_name;
	cin >> friend_name;

	cout << "Have you seen " << friend_name << " lately?\n";

	//4.
	char friend_sex = '0';
	char male = 'm';
	char female = 'f';

	cout << "Enter your friend's sex (enter 'm' if male   enter 'f' if female):\n";
	cin >> friend_sex;
	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";
	if (friend_sex != 'm' && friend_sex != 'f')
		error("enter: m if male  ||  f if female");
		

	//5.
	cout << "Enter the age of the person you are writing to: \n";

	int age;
	cin >> age;


	if (age <= 0 || age >= 110)
		error("you're kidding!");

	else
		cout <<  "I hear you just had a birthday and you are " << age << " years old.\n";

	//6.
	if (age <= 12 && age > 0)
		cout << "Next year you will be " << age+1 << ".\n";
	if (age == 17)
		cout << "Next year you will be able to vote.\n";
	if (age > 70 && age < 110)
		cout << "I hope you are enjoying retirement.\n";

	//7.
	cout << "Yours sincerely,\n";
	cout << endl;
	cout << endl;
	
	cout << "Enter your name.\n";
	string your_name;
	cin >> your_name;

	return 0;
}