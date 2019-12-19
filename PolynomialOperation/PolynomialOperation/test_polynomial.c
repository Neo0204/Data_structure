#include "polynomialadd.h"

int main()
{
	printf(" Add of Polynomial A and B \n");
	printf("Number of terms A \n");
	scanf("%d", &finishA);

	startA = 0;
	startB = finishA;
	finishA = finishA - 1;
	printf("write exponent and coefficient by decreasing exponent \n");
	
	for (int i = startA; i <= finishA; i++)
	{
		printf("exponent of term(Real Number)");
		scanf("%f", &(terms[i].expo));
		printf("coefficient of term(Real Number)");
		scanf("%f", &(terms[i].coef));
	}

	printf("Number of terms B \n");
	scanf("%d", &finishB); 


	finishB = finishA + finishB;
	avail = finishB + 1;

	printf("write exponent and coefficient by decreasing exponent \n");
	for (int i = startB; i <= finishB; i++)
	{
		printf("exponent of term(Real Number)");
		scanf("%f", &(terms[i].expo));
		printf("coefficient of term(Real Number)");
		scanf("%f", &(terms[i].coef));
	}



	padd(startA, finishA, startB, finishB, &startD, &finishD);


	printf("Polynimal(x) = ");

	for (int i = startD; i <= finishD; i++, startD++)
	{
		if (terms[startD].expo)
			printf("( %.2f*x^%.2f )", terms[startD].coef, terms[startD].expo);
		else
			printf("( %.2f)", terms[startD].coef);

		if (i < finishD)
			printf(" + ");
	}



	printf("\n\n");


	return 0;
}
