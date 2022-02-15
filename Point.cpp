

/******************************************************** 
    *  @Time     :  2022/02/15 10:21
    *  @author   :  Xiao YQ  
*********************************************************/
#include "Point.h"
#include "MathVector.h"
#include <cmath>

namespace Fastamp_Math
{
	Point::Point()
	{
		m_X = 0;
		m_Y = 0;
		m_Z = 0;
	}
	
	Point::Point(const Point& pt)
	{
		m_X = pt.m_X;
		m_Y = pt.m_Y;
		m_Z = pt.m_Z;
	}
	
	Point::Point(double x, double y, double z)
	{
		m_X = x;
		m_Y = y;
		m_Z = z;
	}
	
	Point::~Point() 
	{
	}
	
	double Point::GetDistance(const Point& n) const
	{
		return sqrt(m_X * n.m_X + m_Z * n.m_Z + m_Y * n.m_Y);
	}
	
	Point Point::operator+(const MathVector& p) const
	{
		Point result;
		result.m_X = m_X + p.m_X;
		result.m_Y = m_Y + p.m_Y;
		result.m_Z = m_Z + p.m_Z;
		return result;
	}
	
	Point Point::operator=(const MathVector& p)
	{
		m_X = p.m_X;
		m_Y = p.m_Y;
		m_Z = p.m_Z;
		return *this;
	}
	
	Point Point::operator-(const MathVector& p) const
	{
		Point result;
		result.m_X = m_X - p.m_X;
		result.m_Y = m_Y - p.m_Y;
		result.m_Z = m_Z - p.m_Z;
		return result;
	}
	
	MathVector Point::operator-(const Point& p)const
	{
		MathVector result;
		result.m_X = m_X - p.m_X;
		result.m_Y = m_Y - p.m_Y;
		result.m_Z = m_Z - p.m_Z;
		return result;
	}
	
	Point Point::operator*(const double n) const
	{
		Point result;
		result.m_X = m_X * n;
		result.m_Y = m_Y * n;
		result.m_Z = m_Z * n;
		return result;
	}
}