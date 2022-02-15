

/******************************************************** 
    *  @Time     :  2022/02/15 10:19
    *  @author   :  Xiao YQ  
*********************************************************/
#pragma once
#include "Point.h"

namespace Fastamp_Math
{
	class _declspec(dllexport)  Circle
	{
	private:
		Point m_Center;
		MathVector m_NormalVector;
		double m_Radius;
		Circle();
	public:
		static int CircleNum;
				
		//************************************
		// Method:    GetCircle
		// FullName:  Fastamp_Math::Circle::GetCircle
		// Access:    public static 
		// Returns:   Fastamp_Math::Circle*
		// Qualifier:
		// Function:  �½�Բ
		//************************************
		static Circle* GetCircle() { return (new Circle); }
		
		//************************************
		// Method:    Circle
		// FullName:  Fastamp_Math::Circle::Circle
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: Point center
		// Parameter: MathVector normalVector
		// Parameter: double radius
		// Function:  ��ֵ���캯��
		//************************************
		Circle(Point center, MathVector normalVector, double radius);
		
		//************************************
		// Method:    Circle
		// FullName:  Fastamp_Math::Circle::Circle
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: const Circle & pt
		// Function:  ���ƹ��캯��
		//************************************
		Circle(const Circle& pt);
				
		//************************************
		// Method:    operator=
		// FullName:  Fastamp_Math::Circle::operator=
		// Access:    public 
		// Returns:   Fastamp_Math::Circle
		// Qualifier:
		// Parameter: Circle & pt
		// Function:  =���������
		//************************************
		Circle operator=(Circle& pt);
		
		//************************************
		// Method:    ~Circle
		// FullName:  Fastamp_Math::Circle::~Circle
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  ��������
		//************************************
		~Circle();
		
		//************************************
		// Method:    GetCenter
		// FullName:  Fastamp_Math::Circle::GetCenter
		// Access:    public 
		// Returns:   Point
		// Qualifier: const
		// Function:  ��ȡԲ��
		//************************************
		Point GetCenter()const;
		
		//************************************
		// Method:    GetNormalVector
		// FullName:  Fastamp_Math::Circle::GetNormalVector
		// Access:    public 
		// Returns:   Fastamp_Math::MathVector
		// Qualifier: const
		// Function:  ��ȡ������
		//************************************
		MathVector GetNormalVector()const;
		
		//************************************
		// Method:    GetRadius
		// FullName:  Fastamp_Math::Circle::GetRadius
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Function:  ��ȡ�뾶
		//************************************
		double GetRadius()const;	
		
		//************************************
		// Method:    SetCenter
		// FullName:  Fastamp_Math::Circle::SetCenter
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: Point p
		// Function:  ����Բ��
		//************************************
		void SetCenter(Point p);
		
		//************************************
		// Method:    SetNormalVector
		// FullName:  Fastamp_Math::Circle::SetNormalVector
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: MathVector m
		// Function:  ���÷�����
		//************************************
		void SetNormalVector(MathVector m);
		
		//************************************
		// Method:    SetRadius
		// FullName:  Fastamp_Math::Circle::SetRadius
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: double r
		// Function:  ���ð뾶
		//************************************
		void SetRadius(double r);	
		
		//************************************
		// Method:    GetLength
		// FullName:  Fastamp_Math::Circle::GetLength
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Function:  ��ȡ�ܳ�
		//************************************
		double GetLength()const;
		
		//************************************
		// Method:    GetArea
		// FullName:  Fastamp_Math::Circle::GetArea
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Function:  ��ȡ���
		//************************************
		double GetArea()const;
		
		//************************************
		// Method:    getNumOfCircles
		// FullName:  Fastamp_Math::Circle::getNumOfCircles
		// Access:    public static 
		// Returns:   int
		// Qualifier:
		// Function:  ��ȡʵ���ĸ���
		//************************************
		static int getNumOfCircles(){return CircleNum;}
	};
}

