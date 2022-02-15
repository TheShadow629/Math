

/******************************************************** 
    *  @Time     :  2022/02/15 10:20
    *  @author   :  Xiao YQ  
*********************************************************/
#include "Factory.h"
#include "Line.h"

Factory::Factory()
{
	
}
Fastamp_Math::Line Factory::CreateLine(Fastamp_Math::Point StartPoint, Fastamp_Math::Point EndPoint)
{
	Fastamp_Math::Line* L1 = Fastamp_Math::Line::GetLine();
	L1->SetStartPoint(StartPoint);
	L1->SetEndPoint(EndPoint);
	return *L1;
}
Fastamp_Math::Circle Factory::CreateCircle(Fastamp_Math::Point Center, double Radius, Fastamp_Math::MathVector Direction)
{
	Fastamp_Math::Circle* c1 = Fastamp_Math::Circle::GetCircle();
	c1->SetCenter(Center);
	c1->SetRadius(Radius);
	c1->SetNormalVector(Direction);
	return *c1;
}
 Factory CreateFactory()
{
	 Factory fac;
	 return  fac;
}

 Factory::Factory(const Factory& copyFactor)
{
	
}

Factory::~Factory()
{
	
}
