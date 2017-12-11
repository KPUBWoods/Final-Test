#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(void)
{
	
	complex A(2.56, -3.412);
	printf("A = Constructor(2.56,-3.412) gives:\n");
	A.print();
	complex B;
	printf("B = Constructor() gives:\n");
	B.print();
	B.setReal(3.2);
	B.setImaginary(0.4);
	printf("B.setReal(3.2) and B.setImaginary(0.4) gives:\n");
	B.print();
	A.add(B);
	printf("Adding B to A gives:\n");
	A.print();
	double x = A.returnReal();
	double y = A.returnImaginary();
	complex C(x,y);
	printf("C = Constructor(A.returnReal(), A.returnImaginary()) gives:\n");
	C.print();
	complex D(1.23, -3.21);
	printf("D = Constructor(1.23,-3.21) gives:\n");
	D.print();
	double phase = D.phase();
	printf("D.phase gives:\n");
	if (phase <999)
	{
	printf("Phase is %f degrees\n",phase);
	}
	double abs = D.absolute();
	printf("D.absolute gives:\n");
	printf("Absolute Value is %f\n", abs);
}