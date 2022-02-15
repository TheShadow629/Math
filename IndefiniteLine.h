

/******************************************************** 
    *  @Time     :  2022/02/15 10:20
    *  @author   :  Xiao YQ  
*********************************************************/
#pragma once
#include "Point.h"
#include "MathVector.h"
#include "Line.h"
namespace  Fastamp_Math
{
	class _declspec(dllexport)  IndefiniteLine :public Line
	{
	public:
		
		//************************************
		// Method:    GetType
		// FullName:  Fastamp_Math::IndefiniteLine::GetType
		// Access:    virtual public 
		// Returns:   Fastamp_Math::Line::Type
		// Qualifier:
		// Function:  获取直线类型
		//************************************
		virtual Type GetType()
		{
			return Indefinite;
		}

	};
	
}
