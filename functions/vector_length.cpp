#include<iostream>
#include<string>
#include<cmath>

using namespace std;

//the following line is for use of tell the c++ to find the fuction before main()
double vector_length(double x, double y, double z);

int main()
{
	double x,y,z,l;
	double vector[3][1];
	
	cout << "input x :" << endl;
	//cin >> x;
	cin >> vector[0][0];
	
	cout << "input y :" << endl;
	//cin >> y;
	cin >> vector[1][0];
	
	cout << "input z :" << endl;
	//cin >> z;
	cin >> vector[2][0];
	
	// calc length
	cout << "the vector length is :" << endl;	
	
	// l = vector_length(x,y,z);
	l = vector_length(vector[0][0],vector[1][0],vector[2][0]);
		
	cout << l << endl;
	
	return 0;
}

//use function to output
double vector_length(double x, double y, double z)
{	
	double length;
	length = sqrt(pow(x,2.0)+pow(y,2.0)+pow(z,2.0));
	return length;
}






