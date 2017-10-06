#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <cmath>
#include <vector>
#include "Function.h"

using std::vector;

class Polynomial : public Function
{
	
public:

	Polynomial(const vector<float> Coeffs);
	float evaluate(float x) const;
	
private:

	vector<float> _Coeffs;
	
};

#endif 