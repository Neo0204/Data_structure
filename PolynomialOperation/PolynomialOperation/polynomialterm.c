#include "poly_terms.h"

void padd(int startA, int finishA,int startB,int finishB, int* startD, int* finishD)
{
	*startD = avail;
	float coefficient;

	while (startA <=finishA && startB<=finishB)
	{
		switch (COMPARE(terms[startA].expo, terms[startB].expo))
		{
		case -1 :
			attach(terms[startB].expo, terms[startB].coef);
			startB++;
			break;
		case 0:
			coefficient = terms[startA].coef + terms[startB].coef;
			attach(terms[startA].expo, coefficient);
			startA++, startB++;
			break;
		case 1:
			attach(terms[startA].expo, terms[startA].coef);
			startA++;
		}
	}

	for (; startA <= finishA; startA++)
		attach(terms[startA].expo, terms[startA].coef);

	for (; startB <= finishB; startB++)
		attach(terms[startB].expo, terms[startB].coef);


	*finishD = avail - 1;
	
}

void attach(float exponent, float coeffcient)
{
	if (avail >= MAX_TERMS)
	{
		fprintf(stderr, "Too many terms in Polynomials");
		exit(1);
	}

	terms[avail].coef = coeffcient;
	terms[avail++].expo = exponent;


}