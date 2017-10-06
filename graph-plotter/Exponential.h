#ifndef EXPONENTIAL_H
#define EXPONENTIAL_H

#include "Function.h"
#include <cmath>

class Exponential : public Function
{
	
public:

	Exponential(float A, float b);
	float evaluate(float x) const;
	
private:

	float _A;
	float _b;
};

#endif 