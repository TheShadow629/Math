

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
		// Function:  新建圆
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
		// Function:  赋值构造函数
		//************************************
		Circle(Point center, MathVector normalVector, double radius);
		
		//************************************
		// Method:    Circle
		// FullName:  Fastamp_Math::Circle::Circle
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: const Circle & pt
		// Function:  复制构造函数
		//************************************
		Circle(const Circle& pt);
				
		//************************************
		// Method:    operator=
		// FullName:  Fastamp_Math::Circle::operator=
		// Access:    public 
		// Returns:   Fastamp_Math::Circle
		// Qualifier:
		// Parameter: Circle & pt
		// Function:  =运算符重载
		//************************************
		Circle operator=(Circle& pt);
		
		//************************************
		// Method:    ~Circle
		// FullName:  Fastamp_Math::Circle::~Circle
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  析构函数
		//************************************
		~Circle();
		
		//************************************
		// Method:    GetCenter
		// FullName:  Fastamp_Math::Circle::GetCenter
		// Access:    public 
		// Returns:   Point
		// Qualifier: const
		// Function:  获取圆心
		//************************************
		Point GetCenter()const;
		
		//************************************
		// Method:    GetNormalVector
		// FullName:  Fastamp_Math::Circle::GetNormalVector
		// Access:    public 
		// Returns:   Fastamp_Math::MathVector
		// Qualifier: const
		// Function:  获取法向量
		//************************************
		MathVector GetNormalVector()const;
		
		//************************************
		// Method:    GetRadius
		// FullName:  Fastamp_Math::Circle::GetRadius
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Function:  获取半径
		//************************************
		double GetRadius()const;	
		
		//************************************
		// Method:    SetCenter
		// FullName:  Fastamp_Math::Circle::SetCenter
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: Point p
		// Function:  设置圆心
		//************************************
		void SetCenter(Point p);
		
		//************************************
		// Method:    SetNormalVector
		// FullName:  Fastamp_Math::Circle::SetNormalVector
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: MathVector m
		// Function:  设置法向量
		//************************************
		void SetNormalVector(MathVector m);
		
		//************************************
		// Method:    SetRadius
		// FullName:  Fastamp_Math::Circle::SetRadius
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: double r
		// Function:  设置半径
		//************************************
		void SetRadius(double r);	
		
		//************************************
		// Method:    GetLength
		// FullName:  Fastamp_Math::Circle::GetLength
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Function:  获取周长
		//************************************
		double GetLength()const;
		
		//************************************
		// Method:    GetArea
		// FullName:  Fastamp_Math::Circle::GetArea
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Function:  获取面积
		//************************************
		double GetArea()const;
		
		//************************************
		// Method:    getNumOfCircles
		// FullName:  Fastamp_Math::Circle::getNumOfCircles
		// Access:    public static 
		// Returns:   int
		// Qualifier:
		// Function:  获取实例的个数
		//************************************
		static int getNumOfCircles(){return CircleNum;}
	};
}

