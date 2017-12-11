#include <complex.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

complex::complex(double x, double y)
{
		real=x;
		imaginary=y;
}

complex::complex()
{
		real=0;
		imaginary=0;
}

double complex::absolute()
{
		double abs = sqrt(real*real + imaginary*imaginary);
		return abs;
}

double complex::phase()		/*returns phase angle in degrees giving 1000 for zero real part*/
{
	if (real != 0)
	{
		double temp= imaginary/real;
		double ans = atan(imaginary/real)*(180/M_PI);
		return ans;
	}
	else
	{
		printf("Phase is undefined with real part = 0.\n");
		return 1000;
	}
}

int complex::add(complex& a)
{
		real = real + a.real;
		imaginary = imaginary + a.imaginary;
		return 1;
}



int complex::multiply(complex& m)
{		
	double temp1 = real*m.real + imaginary*m.imaginary;
	double temp2 = real*m.imaginary + imaginary*m.real;
	real = temp1;
	imaginary = temp2;
	return 1;
}

int complex::print()
{
	if (imaginary > 0)
	{
		printf("%f + i %f\n", real, imaginary);
	}
	if (imaginary < 0)
	{
		printf("%f - i %f\n", real, (imaginary*(-1)));
	}
	if (imaginary == 0)
	{
		printf("%f\n", real);
	}
	return 1;
}

int complex::setReal(double set)
{
	real = set;
	return 1;
}

int complex::setImaginary(double set)
{
	imaginary = set;
	return 1;
}

double complex::returnReal()
{
	return real;
}

double complex::returnImaginary()
{
	return imaginary;
}
