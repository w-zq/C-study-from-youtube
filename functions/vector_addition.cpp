#include<iostream>
#include<string>
#include<cmath>
#include<typeinfo>

using namespace std;

double vector_add(double vectorA[3][1],double vectorB[3][1]);


int main()
{
	double vector1[3][1],vector2[3][1];
	
	cout << "we are adding vector 1 to vector 2, they each have 3 rows and 1 col ..." << endl;
	cout << "vector 1 input x :" << endl;
	cin >> vector1[0][0];
	
	cout << "vector 1 input y :" << endl;
	cin >> vector1[1][0];
	
	cout << "vector 1 input z :" << endl;
	cin >> vector1[2][0];
	
	cout << "vector 2 input x :" << endl;
	cin >> vector2[0][0];
	
	cout << "vector 2 input y :" << endl;
	cin >> vector2[1][0];
	
	cout << "vector 2 input z :" << endl;
	cin >> vector2[2][0];

	double add_result = vector_add(vector1,vector2);
	
	cout << add_result << endl;
	cout << typeid(add_result).name() << endl;

	return 0;
}

double vector_add(double arrayA[3][1],double arrayB[3][1])
{
	double vector_add_result[3][1];
	for(int i = 0; i <= 2; i++)
	{
		vector_add_result[i][0] = arrayA[i][0] + arrayB[i][0];
	}
	// return **vector_add_result;
	return vector_add_result[2][0];
}



