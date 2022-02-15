

/******************************************************** 
    *  @Time     :  2022/02/15 10:21
    *  @author   :  Xiao YQ  
*********************************************************/
#include "Line.h"
#include "Point.h"
#include "MathVector.h"
namespace  Fastamp_Math
{
	Line::Line()
	{
		Point ZeroPoint(0,0,0);
		m_StartPoint = ZeroPoint;
		m_EndPoint = ZeroPoint;
	}
	
	Line::Line(const Line& pt)
	{
		m_StartPoint = pt.GetStartPoint();
		m_EndPoint = pt.GetEndPoint();
	}
	
	Line::Line(const Point& m, const Point& n)
	{
		m_StartPoint = m;
		m_EndPoint = n;
	}
	Line Line:: operator=( Line& pt)
	{
		m_StartPoint = pt.GetStartPoint();
		m_EndPoint = pt.GetEndPoint();
		return *this;
	}
	Line::~Line()
	{
	
	}
	
	Point Line::GetStartPoint()const
	{
		return m_StartPoint;
	}
	
	Point Line::GetEndPoint()const
	{
		return m_EndPoint;
	}
	
	void Line::SetStartPoint(const Point& n)
	{
		m_StartPoint = n;
	}
	
	void Line::SetEndPoint(const Point& n)
	{
		m_EndPoint = n;
	}
	
	double Line::GetLength() const
	{
		return m_StartPoint.GetDistance(m_EndPoint);
	}
	
	MathVector Line::GetDirection()
	{
		return (GetEndPoint() - GetStartPoint());
	}
	
}
