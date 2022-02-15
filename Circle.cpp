

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
		//ʹ��C++11��ί�й��캯�����ڳ�ʼ���б�λ�õ��ã�
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
		//ʹ��C++11��ί�й��캯�����ڳ�ʼ���б�λ�õ��ã�
	}
	
	Circle Circle::operator=(Circle& pt) 
	{
		SetCenter(pt.GetCenter());
		SetNormalVector(pt.GetNormalVector());
		SetRadius(pt.GetRadius());
	
		//Ϊ�˵��ù��캯��ʹ��CircleNum++
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








