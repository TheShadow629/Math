

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
		//	//ʹ��C++11��ί�й��캯�����ڳ�ʼ���б�λ�õ��ã�


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

		//1.�ж�Բ�ķ�������ֱ�������ĵ���Ƿ�Ϊ0��Ϊ0 �����Բ��ֱ����ͬһƽ���ڣ�
		//������Ϊ���߲����ڽ��㣨���������ཻ�������
		//2.����ֱ�������εĽ��㣨���μ�Ϊ֮ǰ��Բ����һ�뾶��תһ���γɵ����Σ�
		//3.���ý��㼴Ϊֱ����Բ�εĽ��㣬���������������������꼴Ϊ��������

		MathVector line = m_Line.GetDirection();
		MathVector circle_vector = m_Circle.GetNormalVector();
		if ((line.m_X * circle_vector.m_X + line.m_Y * circle_vector.m_Y + line.m_Z * circle_vector.m_Z) != 0.00)
		{
			std::cout << "ֱ�ߺ�Բ����һ��ƽ���ڣ��˴����������ཻ���������Ϊ�޽���" << std::endl;
			//�˴����������ཻ�������
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
			std::cout << "�޽���" << std::endl;
			return -1;
		}

		t1 = (-b + sqrt(bb4ac)) / (2 * a);
		t2 = (-b - sqrt(bb4ac)) / (2 * a);

		Point ZeroPoint(0, 0, 0);
		*res1 = t1 * m_Line.GetDirection() + (m_Line.GetStartPoint() - ZeroPoint);
		*res2 = t2 * m_Line.GetDirection() + (m_Line.GetStartPoint() - ZeroPoint);
		if (t1 == t2)
		{
			std::cout << "��������" << std::endl;
			std::cout << "�е���(" << (*res1).m_X << "," << (*res1).m_Y << "," << (*res1).m_Z << ")" << std::endl;
			return 0;
		}
		else {
			std::cout << "��һ��������(" << (*res1).m_X << "," << (*res1).m_Y << "," << (*res1).m_Z << ")" << std::endl;
			std::cout << "�ڶ���������(" << (*res2).m_X << "," << (*res2).m_Y << "," << (*res2).m_Z << ")" << std::endl;
			//https://www.it610.com/article/1283510958202830848.htm
			return 0;
		}
	}
}

