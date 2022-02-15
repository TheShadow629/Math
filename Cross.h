

/******************************************************** 
    *  @Time     :  2022/02/15 10:19
    *  @author   :  Xiao YQ  
*********************************************************/
#pragma once
#include "Circle.h"
#include "Line.h"

namespace Fastamp_Math
{
	class _declspec(dllexport)  Cross
	{
	private:
		Line m_Line;
		Circle m_Circle;
	public:
		
		//************************************
		// Method:    Cross
		// FullName:  Fastamp_Math::Cross::Cross
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  构造函数
		//************************************
		Cross();
		
		//************************************
		// Method:    Cross
		// FullName:  Fastamp_Math::Cross::Cross
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: Line m
		// Parameter: Circle c
		// Function:  赋值构造函数
		//************************************
		Cross(Line m, Circle c);
		
		//************************************
		// Method:    Cross
		// FullName:  Fastamp_Math::Cross::Cross
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: const Cross & pt
		// Function:  复制构造函数
		//************************************
		Cross(const Cross &pt);
		
		//************************************
		// Method:    operator=
		// FullName:  Fastamp_Math::Cross::operator=
		// Access:    public 
		// Returns:   Fastamp_Math::Cross
		// Qualifier:
		// Parameter: Cross & pt
		// Function:  =运算符重载
		//************************************
		Cross operator=(Cross& pt);
		
		//************************************
		// Method:    ~Cross
		// FullName:  Fastamp_Math::Cross::~Cross
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  析构函数
		//************************************
		~Cross();		
		
		//************************************
		// Method:    SetLine
		// FullName:  Fastamp_Math::Cross::SetLine
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: Line m
		// Function:  设置直线
		//************************************
		void SetLine(Line m);
		
		//************************************
		// Method:    SetCircle
		// FullName:  Fastamp_Math::Cross::SetCircle
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: Circle c
		// Function:  设置圆
		//************************************
		void SetCircle(Circle c);	
		
		//************************************
		// Method:    GetLine
		// FullName:  Fastamp_Math::Cross::GetLine
		// Access:    public 
		// Returns:   Fastamp_Math::Line
		// Qualifier: const
		// Function:  获取直线
		//************************************
		Line GetLine()const;
		
		//************************************
		// Method:    GetCircle
		// FullName:  Fastamp_Math::Cross::GetCircle
		// Access:    public 
		// Returns:   Fastamp_Math::Circle
		// Qualifier: const
		// Function:  获取圆
		//************************************
		Circle GetCircle()const;	
		
		//************************************
		// Method:    GetCrossPoint
		// FullName:  Fastamp_Math::Cross::GetCrossPoint
		// Access:    public 
		// Returns:   int
		// Qualifier:
		// Parameter: MathVector * const res1
		// Parameter: MathVector * const res2
		// Function:  获取交点
		//************************************
		int GetCrossPoint(MathVector* const res1, MathVector* const res2);
	
	};
}

