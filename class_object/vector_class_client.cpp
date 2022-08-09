#include<iostream>
#include<string>
#include<cmath>

using namespace std;

#include"vector_class_head.h"

int main(){
	// cout << "change to test the compile single" << endl;
	
	Vector vec;

	vec.setvector1();
	vec.setvector2();

	vec.printVector2();

	vec.printVector1();
	vec.vector_add();
	vec.printaddedvector();

	double x = 0, y = 3.5, z = 1.2;
	double length = vec.vector_length(x,y,z);
	cout << "printing the length of a vector: " << length << endl;

	double a = 0;
	a = vec.vector_add();
	cout << "print the last element of addition result: " << a << endl;
	
	return 0;
}
