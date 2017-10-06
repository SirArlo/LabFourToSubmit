#include "Graph.h"
#include "Sinusoid.h"
#include "Sampler.h"
#include "Display.h"
#include "SolidLineStyle.h"
#include "DashedLineStyle.h"
#include "DottedLine.h"
#include "Points.h"
#include "Function.h"
#include "Exponential.h"
#include "Polynomial.h"
#include <memory>

using std::shared_ptr;
using std::make_shared;

const float PI = 3.14159265359;

int main()
{
	// setup Graph with Display
	const int WIDTH = 800;
	const int HEIGHT = 600;
	shared_ptr<Display> display = make_shared<Display>(WIDTH, HEIGHT);
	Graph graph(display);

	// create sine and cosine functions
	float amplitude = 1.0;
	float frequency = 1.0;
	float phase = 0;
	Sinusoid sine_function{amplitude, frequency, phase};
	Sinusoid cosine_function{amplitude, frequency, phase + PI/2};

	// generate range and plot graphs
	Range range{0, 6*PI};
	SolidLineStyle solid_red{Colour::Red, display};
	graph.plot(generateDataPoints(sine_function, range), solid_red);

	SolidLineStyle solid_blue{Colour::Blue, display};
	graph.plot(generateDataPoints(cosine_function, range), solid_blue);
	
	DashedLineStyle Dashed_red{Colour::Red, display};
	graph.plot(generateDataPoints(cosine_function, range), Dashed_red);
	
	DottedLine Dotted_blue{Colour::Blue, display};
	graph.plot(generateDataPoints(cosine_function, range), Dotted_blue);
	
	Exponential exp{1.0, 1.5};
    vector<float> Coeffs = {1.0, 2.0, 1.0};
	Polynomial poly{Coeffs};
	
	Range FunctionRange{-3, 1.5};
	graph.plot(generateDataPoints(poly, FunctionRange), Dashed_red);
	graph.plot(generateDataPoints(exp, FunctionRange), Dashed_red);

	return 0;
}

/*3.1 
 
The number of points  the smapler is using is too small to give a smooth rounded plot and so the number of points needed to be increased to 5000 instead of 50.
 
 */