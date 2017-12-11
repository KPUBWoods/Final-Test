#ifndef __COMPLEX_H
#define __COMPLEX_H

class complex
{
	double real;
	double imaginary;

public:

	complex(double x, double y);
	complex();
	double absolute(); 
	double phase();
	int add(complex& a);	/*Overwrites class that called function */
	int multiply(complex& m);	/*Overwrites class that called function */
	int print();
	int setReal(double set);
	int setImaginary(double set);
	double returnReal();
	double returnImaginary();

};


#endif