#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
	float m,v;
	string first_statement,second_statement,third_statement;
	
	first_statement = "now you're going to calculate KE=1/2*m*v^2";
	second_statement = "please state a value for mass (kg):   ";
	third_statement = "please state a value for velocity (m/s):   ";
	
	cout << first_statement << endl;
	cout << second_statement;
	cin >> m;
	cout << third_statement;
	cin >> v;
	cout << (1.0/2.0)*m*pow(v,2) << endl;
	return 0;
}
