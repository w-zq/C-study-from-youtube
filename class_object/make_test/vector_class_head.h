#ifndef VECTOR_H
#define VECTOR_H

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


#endif