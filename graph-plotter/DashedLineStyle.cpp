#include "DashedLineStyle.h"

DashedLineStyle::DashedLineStyle(Colour colour, shared_ptr<Display> display_ptr):LineStyle(colour, display_ptr)
{
		
	FunctionCallNumber = 0;
	
}

void DashedLineStyle::plotLine(PointPair end_points)
{
	FunctionCallNumber++;
	
	if (FunctionCallNumber<20){

	auto display_points = getDisplay();
	display_points->drawLine(end_points, getColour());
	return;
	
	}
	else if(FunctionCallNumber==40){
		
		FunctionCallNumber = 0;
	}
	else{
		
		return;
	}
	
} 
