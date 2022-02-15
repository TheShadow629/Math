#include "Cross.h"

#include <cmath>
#include <iostream>

#include "Circle.h"
#include "Line.h"
namespace Fastamp_Math
{
	//Cross::Cross() :Cross(*(new Line), *(new Circle))
	//{
	//	//使用C++11的委托构造函数（在初始化列表位置调用）
	//}

	//因为后期将line和circle的构造函数改成了private导致报错，暂未解决

	/*Cross::Cross() 
	{
		Line* L1 = Line::GetLine();
		L1->SetStartPoint(*new Point);
		L1->SetEndPoint(*new Point);
		m_Line = *L1;

		Circle* c1 =Circle::GetCircle();
		c1->SetCenter(*new Point);
		c1->SetRadius(0);
		c1->SetNormalVector(*new MathVector);
		m_Circle=*c1;		
	}

	Cross::Cross(Line m, Circle c)
	{
		SetCircle(c);
		SetLine(m);
	}*/

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
		double a, b, c;
		double bb4ac;
		double t1, t2;
		MathVector line = m_Line.GetDirection();

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

		if (fabs(a) == 0 || bb4ac < 0) {
			std::cout << "无交点" << std::endl;
			return -1;
		}

		t1 = (-b + sqrt(bb4ac)) / (2 * a);
		t2 = (-b - sqrt(bb4ac)) / (2 * a);

		Point ZeroPoint(0, 0, 0);
		*res1 = t1*m_Line.GetDirection()  + (m_Line.GetStartPoint() - ZeroPoint);
		*res2 = t2*m_Line.GetDirection()  + (m_Line.GetStartPoint() - ZeroPoint);

		std::cout << "第一个交点是(" << (*res1).m_X << "," << (*res1).m_Y << "," << (*res1).m_Z << ")" << std::endl;
		std::cout << "第二个交点是(" << (*res2).m_X << "," << (*res2).m_Y << "," << (*res2).m_Z << ")" << std::endl;
		//https://www.it610.com/article/1283510958202830848.htm
		return 0;
	}



}

