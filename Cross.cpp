

/********************************************************
	*  @Time     :  2022/02/15 10:20
	*  @author   :  Xiao YQ
*********************************************************/
#include "Cross.h"

#include <cmath>
#include <iostream>

#include "Circle.h"
#include "Factory.h"
#include "Line.h"
namespace Fastamp_Math
{
	Cross::Cross() :Cross(*new Line, *new Circle)
	{
		//	//使用C++11的委托构造函数（在初始化列表位置调用）


		//Line* L1 = Line::GetLine();
		//L1->SetStartPoint(*new Point);
		//L1->SetEndPoint(*new Point);
		//m_Line = *L1;

		//Circle* c1 =Circle::GetCircle();
		//c1->SetCenter(*new Point);
		//c1->SetRadius(0);
		//c1->SetNormalVector(*new MathVector);
		//m_Circle=*c1;

		//Factory* f1 = Factory::GetFactory();
		//m_Line=f1->CreateLine(*new Point, *new Point);

		//m_Line.SetStartPoint(*new Point);
		//m_Line.SetEndPoint(*new Point);

		//m_Circle.SetCenter(*new Point);
		//m_Circle.SetNormalVector(*new MathVector);
		//m_Circle.SetRadius(0);
	}

	Cross::Cross(Line m, Circle c)
	{
		SetCircle(c);
		SetLine(m);
	}

	Cross::Cross(const Cross& pt) :Cross(pt.GetLine(), pt.GetCircle())
	{

	}

	Cross Cross::operator=(Cross& pt)
	{
		SetCircle(pt.GetCircle());
		SetLine(pt.GetLine());
		return *this;
	}

	Cross::~Cross()
	{

	}

	Circle Cross::GetCircle()const
	{
		return m_Circle;
	}

	Line Cross::GetLine()const
	{
		return m_Line;
	}

	void Cross::SetCircle(Circle c)
	{
		m_Circle = c;
	}

	void Cross::SetLine(Line m)
	{
		m_Line = m;
	}

	int Cross::GetCrossPoint(MathVector* const res1, MathVector* const res2)
	{

		//1.判断圆的法向量与直线向量的点积是否为0，为0 则表明圆和直线在同一平面内，
		//否则认为二者不存在交点（忽略异面相交的情况）
		//2.计算直线与球形的交点（球形即为之前的圆绕任一半径旋转一周形成的球形）
		//3.所得交点即为直线与圆形的交点，输入两个向量，向量坐标即为交点坐标

		MathVector line = m_Line.GetDirection();
		MathVector circle_vector = m_Circle.GetNormalVector();
		if ((line.m_X * circle_vector.m_X + line.m_Y * circle_vector.m_Y + line.m_Z * circle_vector.m_Z) != 0.00)
		{
			std::cout << "直线和圆不在一个平面内，此处忽略异面相交的情况，认为无交点" << std::endl;
			//此处忽略异面相交的情况？
			return -1;
		}

		double a, b, c;
		double bb4ac;
		double t1, t2;
		//MathVector line = m_Line.GetDirection();

		a = line.m_X * line.m_X + line.m_Y * line.m_Y + line.m_Z * line.m_Z;
		b = 2 * (line.m_X * (m_Line.GetStartPoint().m_X - m_Circle.GetCenter().m_X)
			+ line.m_Y * (m_Line.GetStartPoint().m_Y - m_Circle.GetCenter().m_Y)
			+ line.m_Z * (m_Line.GetStartPoint().m_Z - m_Circle.GetCenter().m_Z));
		c = m_Circle.GetCenter().m_X * m_Circle.GetCenter().m_X
			+ m_Circle.GetCenter().m_Y * m_Circle.GetCenter().m_Y
			+ m_Circle.GetCenter().m_Z * m_Circle.GetCenter().m_Z;
		c += m_Line.GetStartPoint().m_X * m_Line.GetStartPoint().m_X
			+ m_Line.GetStartPoint().m_Y * m_Line.GetStartPoint().m_Y
			+ m_Line.GetStartPoint().m_Z * m_Line.GetStartPoint().m_Z;
		c -= 2 * (m_Line.GetStartPoint().m_X * m_Circle.GetCenter().m_X
			+ m_Line.GetStartPoint().m_Y * m_Circle.GetCenter().m_Y
			+ m_Line.GetStartPoint().m_Z * m_Circle.GetCenter().m_Z);
		bb4ac = b * b - 4 * a * c;

		if (bb4ac < 0)
		{
			std::cout << "无交点" << std::endl;
			return -1;
		}

		t1 = (-b + sqrt(bb4ac)) / (2 * a);
		t2 = (-b - sqrt(bb4ac)) / (2 * a);

		Point ZeroPoint(0, 0, 0);
		*res1 = t1 * m_Line.GetDirection() + (m_Line.GetStartPoint() - ZeroPoint);
		*res2 = t2 * m_Line.GetDirection() + (m_Line.GetStartPoint() - ZeroPoint);
		if (t1 == t2)
		{
			std::cout << "二者相切" << std::endl;
			std::cout << "切点是(" << (*res1).m_X << "," << (*res1).m_Y << "," << (*res1).m_Z << ")" << std::endl;
			return 0;
		}
		else {
			std::cout << "第一个交点是(" << (*res1).m_X << "," << (*res1).m_Y << "," << (*res1).m_Z << ")" << std::endl;
			std::cout << "第二个交点是(" << (*res2).m_X << "," << (*res2).m_Y << "," << (*res2).m_Z << ")" << std::endl;
			//https://www.it610.com/article/1283510958202830848.htm
			return 0;
		}
	}
}

