

/********************************************************
	*  @Time     :  2022/02/15 10:21
	*  @author   :  Xiao YQ
*********************************************************/
#include "MathVector.h"
#include <cmath>
#include <iostream>
#define PI  3.14159265358979323846
namespace Fastamp_Math
{
	MathVector::MathVector()
	{
		m_X = 0;
		m_Y = 0;
		m_Z = 0;
	}

	MathVector::MathVector(double x, double y, double z)
	{
		m_X = x;
		m_Y = y;
		m_Z = z;
	}

	MathVector::MathVector(const MathVector& pt)
	{
		m_X = pt.m_X;
		m_Y = pt.m_Y;
		m_Z = pt.m_Z;
	}

	MathVector MathVector::operator = (const MathVector& n)
	{
		m_X = n.m_X;
		m_Y = n.m_Y;
		m_Z = n.m_Z;
		return *this;
	}
	MathVector MathVector::operator + (const MathVector& n)const
	{
		MathVector result;
		result.m_X = m_X + n.m_X;
		result.m_Y = m_Y + n.m_Y;
		result.m_Z = m_Z + n.m_Z;
		return result;
	}

	MathVector MathVector::operator - (const MathVector& n)const
	{
		MathVector result;
		result.m_X = m_X - n.m_X;
		result.m_Y = m_Y - n.m_Y;
		result.m_Z = m_Z - n.m_Z;
		return result;
	}

	MathVector MathVector::operator* (double n)const
	{
		MathVector result;
		result.m_X = n * m_X;
		result.m_Y = n * m_Y;
		result.m_Z = n * m_Z;
		return result;
	}
	//MathVector operator*(const MathVector m,double n)
	//{
	//	MathVector result;
	//	result.m_X = m.m_X * n;
	//	result.m_Y = m.m_Y * n;
	//	result.m_Z = m.m_Z * n;
	//	return result;
	//}

	MathVector operator*(double n, const MathVector m)
	{
		MathVector result;
		result.m_X = m.m_X * n;
		result.m_Y = m.m_Y * n;
		result.m_Z = m.m_Z * n;
		return result;
	}

	double MathVector::GetLength()const
	{
		return sqrt(m_X * m_X + m_Z * m_Z + m_Y * m_Y);
	}
	void MathVector::VectorUnitize()
	{
		try {
			m_X = (m_X / this->GetLength());
			m_Y = (m_Y / this->GetLength());
			m_Z = (m_Z / this->GetLength());
		}
		catch (std::exception& e)
		{ // catches exception objects by reference (notice the ampersand & after the type)
			std::cout << e.what() << '\n';
			std::cout << "零向量无法单位化" << std::endl;
		}
	}

	double MathVector::GetAngle(const MathVector& n)const
	{
		try
		{
			double delta = (m_X * n.m_X + m_Y * n.m_Y + m_Z * n.m_Z) / sqrt((m_X * m_X + m_Y * m_Y + m_Z * m_Z) * (n.m_X * n.m_X + n.m_Y * n.m_Y + n.m_Z * n.m_Z));
			double theta = acos(delta);
			return theta;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << '\n';
			std::cout << "零向量与任何向量垂直或平行" << std::endl;
		}	
	}

	MathVector MathVector::CrossProduct(const MathVector& n, const MathVector& m)const
	{
		MathVector CrossProductResult;
		CrossProductResult.m_X = m.m_Y * n.m_Z - m.m_Z * n.m_Y;
		CrossProductResult.m_Y = m.m_X * n.m_Z - m.m_Z * n.m_X;
		CrossProductResult.m_Z = m.m_X * n.m_Y - m.m_Y * n.m_X;
		return CrossProductResult;
	}

	MathVector::~MathVector()
	{
	}
}