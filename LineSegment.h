#pragma once
#include "Point.h"
#include "MathVector.h"
#include "Line.h"
namespace Fastamp_Math
{
	class _declspec(dllexport)  LineSegment :public Line
	{
	public:
		
		//************************************
		// Method:    GetType
		// FullName:  Fastamp_Math::LineSegment::GetType
		// Access:    virtual public 
		// Returns:   Fastamp_Math::Line::Type
		// Qualifier:
		// Function:  获取直线类型
		//************************************
		virtual Type GetType()
		{
			return SEGMENT;
		}
	};
	
}
