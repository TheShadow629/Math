#pragma once
#include "Point.h"
#include "MathVector.h"
#include "Line.h"duationDesign\Codes\day1\Math
namespace Fastamp_Math
{
	class _declspec(dllexport)  Ray :public Line
	{
	public:
		
		//************************************
		// Method:    GetType
		// FullName:  Fastamp_Math::Ray::GetType
		// Access:    virtual public 
		// Returns:   Fastamp_Math::Line::Type
		// Qualifier:
		// Function:  ��ȡֱ������
		//************************************
		virtual Type GetType()
		{
			return RAY;
		}
	};
	
}
