#include<iostream>
#include<string>
using namespace std;


int main()
{
	double a; //double a,b;
	float b;
	string first_statement,second_statement,third_statement;
	
	first_statement = "now you're going to add a + b\n";
	second_statement = "please state a value for a:   ";
	third_statement = "please state a value for b:   ";
	
	cout << first_statement;
	cout << second_statement;
	cin >> a;
	cout << third_statement;
	cin >> b;
	cout << a+b << endl;
	cout << 3/5 <<endl;
	cout << 4/2 <<endl;
	cout << 4.0/5 <<endl;
	return 0;
}
