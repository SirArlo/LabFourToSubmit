#include "DottedLine.h"


DottedLine::DottedLine(Colour colour, shared_ptr<Display> display_ptr):LineStyle(colour, display_ptr)
{
		
FunctionCallNumber = 0;
	
}

void DottedLine::plotLine(PointPair end_points)
{
	FunctionCallNumber++;
	
	if (FunctionCallNumber<4){

	auto display_points = getDisplay();
	display_points->drawLine(end_points, getColour());
	return;
	
	}
	else if(FunctionCallNumber==15){
		
		FunctionCallNumber = 0;
	}
	else{
		
		return;
	}
	
} 
