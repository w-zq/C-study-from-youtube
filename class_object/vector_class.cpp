#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class Vector{
	public:
		int printVector1();
		void printVector2();
		//constructor
		Vector(); 
		void setvector1();
		void setvector2();
		double vector_add();
		int printaddedvector();
		double vector_length(double x,double y,double z);

	protected:
	
	private:  // for private, you can only use the variable in the class
		double vector1[3][1];
		double vector2[3][1];
		double vector_add_result[3][1];
};


int main(){
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

double Vector::vector_length(double x, double y, double z){
	double l = sqrt(pow(x,2.0) + pow(y,2.0) + pow(z,2.0));
	return l;
}

double Vector::vector_add(){
	for(int i = 0; i <= 2; i++){
		vector_add_result[i][0] = vector1[i][0] + vector2[i][0];
	}
	return vector_add_result[2][0];
}

int Vector::printaddedvector(){
	for(int i = 0; i < 3; i++){
		cout << vector_add_result[i][0] << endl;
	}
	return 0;
}

int Vector::printVector1(){
	cout << "print an addition result of vector1 and vector2:" << endl;
	return 0;
}

void Vector::printVector2(){
	cout << "we are starting to print a vector." << endl;
	for(int i = 0; i < 3; i++){
		cout << "vector 2 row " << i << " colume 1 is ..." << endl;
		cout << vector2[i][0] << endl;
	}
}

Vector::Vector(){
	//initialising
	cout << "initialising the vector..." << endl;
	for(int i = 0; i < 3; i++){
		vector1[i][0] = 0;
		vector2[i][0] = 0;
	}
}


void Vector::setvector1(){
	cout << "we are adding vector 1 to vector 2, they each have 3 rows and 1 col ..." << endl;
	cout << "vector 1 input x :" << endl;
	cin >> vector1[0][0];
	
	cout << "vector 1 input y :" << endl;
	cin >> vector1[1][0];
	
	cout << "vector 1 input z :" << endl;
	cin >> vector1[2][0];
}

void Vector::setvector2(){
	cout << "vector 2 input x :" << endl;
	cin >> vector2[0][0];
	
	cout << "vector 2 input y :" << endl;
	cin >> vector2[1][0];
	
	cout << "vector 2 input z :" << endl;
	cin >> vector2[2][0];

}




