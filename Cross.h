

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
		// Function:  ���캯��
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
		// Function:  ��ֵ���캯��
		//************************************
		Cross(Line m, Circle c);
		
		//************************************
		// Method:    Cross
		// FullName:  Fastamp_Math::Cross::Cross
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: const Cross & pt
		// Function:  ���ƹ��캯��
		//************************************
		Cross(const Cross &pt);
		
		//************************************
		// Method:    operator=
		// FullName:  Fastamp_Math::Cross::operator=
		// Access:    public 
		// Returns:   Fastamp_Math::Cross
		// Qualifier:
		// Parameter: Cross & pt
		// Function:  =���������
		//************************************
		Cross operator=(Cross& pt);
		
		//************************************
		// Method:    ~Cross
		// FullName:  Fastamp_Math::Cross::~Cross
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  ��������
		//************************************
		~Cross();		
		
		//************************************
		// Method:    SetLine
		// FullName:  Fastamp_Math::Cross::SetLine
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: Line m
		// Function:  ����ֱ��
		//************************************
		void SetLine(Line m);
		
		//************************************
		// Method:    SetCircle
		// FullName:  Fastamp_Math::Cross::SetCircle
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: Circle c
		// Function:  ����Բ
		//************************************
		void SetCircle(Circle c);	
		
		//************************************
		// Method:    GetLine
		// FullName:  Fastamp_Math::Cross::GetLine
		// Access:    public 
		// Returns:   Fastamp_Math::Line
		// Qualifier: const
		// Function:  ��ȡֱ��
		//************************************
		Line GetLine()const;
		
		//************************************
		// Method:    GetCircle
		// FullName:  Fastamp_Math::Cross::GetCircle
		// Access:    public 
		// Returns:   Fastamp_Math::Circle
		// Qualifier: const
		// Function:  ��ȡԲ
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
		// Function:  ��ȡ����
		//************************************
		int GetCrossPoint(MathVector* const res1, MathVector* const res2);
	
	};
}

