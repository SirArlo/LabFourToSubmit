#include "Polynomial.h"

Polynomial::Polynomial(const vector<float> Coeffs):Function(),_Coeffs(Coeffs){}

float Polynomial::evaluate(float x) const
{
	auto FinalPolynomial = 0.f;
	
	for(auto i = 0; i != _Coeffs.size(); i++)
	{
		
		FinalPolynomial += _Coeffs.at(i) * pow(x, _Coeffs.size() - (i - 1));
		
	}
	
	return FinalPolynomial;
	
} 