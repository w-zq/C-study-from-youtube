#include<iostream>
#include<string>
#include<cmath>

using namespace std;

//the following line is for use of tell the c++ to find the fuction before main()
double Reynolds_calc(double rho, double U, double D, double mu);

int main()
{
	double rho,U,D,mu,Re;
	
	cout << "input density in kg/m3 :" << endl;
	cin >> rho;
	
	cout << "input velocity in m/s :" << endl;
	cin >> U;
	
	cout << "input characteristic length in m :" << endl;
	cin >> D;
	
	cout << "input dynamic viscosity in SI unit :" << endl;
	cin >> mu;
	
	// calc Re
	cout << "the Reynolds number is :" << endl;
	cout << rho*U*D/mu << endl;
	
	Re = Reynolds_calc(rho,U,D,mu);
	cout << Re << endl;
	
	return 0;
}

//use function to output
double Reynolds_calc(double rho, double U, double D, double mu)
{	
	double Reynolds_num;
	Reynolds_num = rho*U*D/mu;
	return Reynolds_num;
}






