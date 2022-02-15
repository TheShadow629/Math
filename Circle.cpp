

/******************************************************** 
    *  @Time     :  2022/02/15 10:20
    *  @author   :  Xiao YQ  
*********************************************************/
#include "Circle.h"
#define PI  3.14159265358979323846
namespace Fastamp_Math
{
	
	Circle::Circle() :Circle(*(new Point), *(new  MathVector), 0)
	{
		//使用C++11的委托构造函数（在初始化列表位置调用）
	}
	
	Circle::Circle(Point center, MathVector normalVector, double radius)
	{
		SetCenter(center);
		SetNormalVector(normalVector);
		SetRadius(radius);
		CircleNum ++;
	}
	
	Circle::Circle(const Circle& pt):Circle (pt.GetCenter(),pt.GetNormalVector(),pt.GetRadius())
	{
		//SetCenter(pt.GetCenter());
		//SetNormalVector(pt.GetNormalVector());
		//SetRadius(pt.GetRadius());
		//使用C++11的委托构造函数（在初始化列表位置调用）
	}
	
	Circle Circle::operator=(Circle& pt) 
	{
		SetCenter(pt.GetCenter());
		SetNormalVector(pt.GetNormalVector());
		SetRadius(pt.GetRadius());
	
		//为了调用构造函数使得CircleNum++
		Circle newCircle(pt.GetCenter(), pt.GetNormalVector(), pt.GetRadius());

		return *this;
	}
	
	
	void Circle::SetCenter(Point p)
	{
		m_Center = p;
	}
	
	void Circle::SetNormalVector(MathVector m)
	{
		m_NormalVector = m;
	}
	
	void Circle::SetRadius(double r)
	{
		m_Radius = r;
	}
	
	Point Circle::GetCenter()const
	{
		return m_Center;
	}
	
	MathVector Circle::GetNormalVector()const
	{
		return m_NormalVector;
	}
	
	double Circle::GetRadius() const
	{
		return m_Radius;
	}
	
	double Circle::GetArea() const
	{
		return m_Radius * PI * PI;
	}
	
	double Circle::GetLength() const
	{
		return m_Radius * PI * 2;
	}
	
	Circle::~Circle()
	{
		CircleNum--;
	}
	int Circle::CircleNum = 0;
	
	
}








