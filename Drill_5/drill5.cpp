#include "std_lib_facilities.h"

int main()
try{

//1.
	//wrong
	//Cout << "Success!\n";
	//good
	//cout << "Success!\n"; 

//2.
	//wrong
	//cout << "Success!\n;
	//good
	//cout << "Success!\n";

//3.
	//wrong
	//cout << "Success" <<!\n
	//good
	//cout << "Success!\n";

//4.
	//wrong
	//cout << success << endl;
	//good
	//cout << "Success!" << endl;
//5.
	//wrong
	//string res = 7; vector<int>v(10); v[5]=res; cout << "Success!\n";
	//good
	//int res = 7; vector<int>v(10); v[5]=res; cout << "Success!\n";

//6.
	//wrong
	//vector<int> v(10); v(5)=7; if (v(5)!=7) cout << "Success!\n";
	//good
	//vector<int> v(10); v[5]=7; if (v[5]==7) cout << "Success!\n";

//7.
	//wrong
	//if(cond) cout << "Success!\n"; else cout << "Fail!\n";
	//good
	//int cond = 0; if(cond == 0) cout << "Success!\n"; else cout << "Fail!\n";

//8.
	//wrong
	//bool c = false; if(c) cout << "Success!\n"; else cout << "Fail!\n";
	//good
	//bool c = true; if(c) cout << "Success!\n"; else cout << "Fail!\n";

//9.
	//wrong
	//string s = "ape"; boo  c = "fool"<s; if (c) cout << "Success!\n";
	//good
	//string s = "ape"; bool  c = true ; if (c) cout << "Success!\n";

//10.
	//wrong
	//string s = "ape"; if (s=="fool") cout << "Success!\n"; 
	//good
	//string s = "ape"; if (s=="ape") cout << "Success!\n";

//11.
	//wrong
	//string s = "ape";  if (s=="fool") cout < "Success!\n";
	//good
	//string s = "ape";  if (s!="fool") cout << "Success!\n";

//12.
	//wrong
	//string s= "ape"; if (s+"fool") cout < "Success!\n";
	//good
	//string s= "ape"; if (s!="fool") cout << "Success!\n";

//13.
	//wrong
	//vector<char> v(5); for (int i=0; 0 < v.size(); ++i) ;  cout << "Success!\n";
	//good
	//vector<int> v(5); for (int i=0; 0 < v[4]; ++i) ;  cout << "Success!\n";

//14.
	//wrong
	//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ;  cout << "Success!\n"; 
	//good
	//vector<char> v(5); for (int i=0; i<=v.size(); ++i) ;  cout << "Success!\n";
	

//15.
	//wrong
	//string s = "Success!\n"; for (int  i=0; i<6; ++i) cout << s[i]; 
	//good
	//string s = "Success!\n"; for (int  i=0; i<8; ++i) cout << s[i]; cout << endl;

//16.
	//wrong
	//if (true) then cout << "Success!\n"; else cout << "Fail!\n ";
	//good
	//if (true) cout << "Success!\n"; else cout << "Fail!\n ";

//17.
	//wrong
	//int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
	//good
	//int x = 2000; int c = x; if (c==2000) cout << "Success!\n";

//18.
	//wrong
	//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i]; 
	//good
	//string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];

//19.
	//wrong
	//vector v(5);  for (int i=0; i<=v.size(); ++i)  ;  cout << "Success !\n"; 
	//good
	//vector<int>v(5);  for (int i=0; i<=v.size(); ++i)  ;  cout << "Success !\n";

//20.
	//wrong
	//int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n"; 
	//good
	//int i=10; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";

//21. 
	//wrong
	//int x = 2; double d= 5/(x-2);  if (d==2*x+0.5) cout << "Success!\n"; 
	//good
	//int x = 4; double d= 5/(x-2);  if (d != 2*x+0.5) cout << "Success!\n";

//22.
	//wrong
	//string<char> s = "Success!\n"; for (int  i=0;  i<=10; ++i) cout << s[i]; 
	//good
	//basic_string<char> s = "Success!\n"; for (int  i=0;  i<=10; ++i) cout << s[i];

//23.
	//wrong
	//int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n"; 
	//good
	//int i=10; int j = 0; while (i<10) ++j; if (j<i) cout << "Success!\n";

//24.
	//wrong
	//int x  = 4; double d = 5/(x-2); if (d=2*x+0.5)  cout << "Success!\n"; 
	//good
	//int x  = 4; double d = 5/(x-2); if (d!=2*x+0.5)  cout << "Success!\n";

//25.
	//wrong
	//cin << "Success!\n";
	//good
	//cout << "Success!\n";


	return 0;

}
catch (exception& e)
{
	cerr << "error: " << e.what() << endl;
	return 1;
}
catch (...)
{
	cerr << "Unknown exception\n";
	return 2;
}
