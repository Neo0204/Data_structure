
#ifndef _POLY_TERMS_H
#define _POLY_TERMS_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#define COMPARE(x,y) ( ((x)<(y)) ? -1 : ((x)==(y)) ? 0 : 1 )
#define MAX_TERMS 100

typedef struct
{
	float coef;
	float expo;
}polynomial;

polynomial terms[MAX_TERMS];

int startA,avail;
int finishA, startB, finishB;

int startD, finishD;


void padd(int startA, int finishA, int startB, int finishB, int *startD, int *finishD);
void attach(float exponent, float coefficient);
#endif // !1
