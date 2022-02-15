#pragma once
#include "MathVector.h"
namespace Fastamp_Math
{
	class _declspec(dllexport)  Point
	{
	public:
		double m_X;
		double m_Y;
		double m_Z;
		
		//************************************
		// Method:    Point
		// FullName:  Fastamp_Math::Point::Point
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  ���캯��
		//************************************
		Point();
		
		//************************************
		// Method:    Point
		// FullName:  Fastamp_Math::Point::Point
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: const Point & pt
		// Function:  ���ƹ��캯��
		//************************************
		Point(const Point& pt);
		
		//************************************
		// Method:    Point
		// FullName:  Fastamp_Math::Point::Point
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: double x
		// Parameter: double y
		// Parameter: double z
		// Function:  ��ֵ���캯��
		//************************************
		Point(double x, double y, double z);
		
		//************************************
		// Method:    ~Point
		// FullName:  Fastamp_Math::Point::~Point
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  ��������
		//************************************
		~Point();
		
		//************************************
		// Method:    GetDistance
		// FullName:  Fastamp_Math::Point::GetDistance
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Parameter: const Point & n
		// Function:  ��ȡ����
		//************************************
		double GetDistance(const Point& n)const;
		
		//************************************
		// Method:    operator+
		// FullName:  Fastamp_Math::Point::operator+
		// Access:    public 
		// Returns:   Point
		// Qualifier: const
		// Parameter: const MathVector & p
		// Function:  +���������
		//************************************
		Point operator+(const MathVector& p)const;
		
		//************************************
		// Method:    operator=
		// FullName:  Fastamp_Math::Point::operator=
		// Access:    public 
		// Returns:   Point
		// Qualifier:
		// Parameter: const MathVector & p
		// Function:  =���������
		//************************************
		Point operator=(const MathVector& p);
		
		//************************************
		// Method:    operator-
		// FullName:  Fastamp_Math::Point::operator-
		// Access:    public 
		// Returns:   Point
		// Qualifier: const
		// Parameter: const MathVector & p
		// Function:  -���������
		//************************************
		Point operator-(const MathVector& p)const;
		
		//************************************
		// Method:    operator-
		// FullName:  Fastamp_Math::Point::operator-
		// Access:    public 
		// Returns:   Fastamp_Math::MathVector
		// Qualifier: const
		// Parameter: const Point & p
		// Function:  -���������
		//************************************
		MathVector operator-(const Point& p)const;	
		
		//************************************
		// Method:    operator*
		// FullName:  Fastamp_Math::Point::operator*
		// Access:    public 
		// Returns:   Point
		// Qualifier: const
		// Parameter: const double n
		// Function:  *���������
		//************************************
		Point operator*(const double n)const;
	};
}

