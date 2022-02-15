#pragma once
#include "Circle.h"
#include "Line.h"

class _declspec(dllexport)  Factory
{
private:
	
	//************************************
	// Method:    Factory
	// FullName:  Factory::Factory
	// Access:    private 
	// Returns:   
	// Qualifier:
	// Function:  构造函数
	//************************************
	Factory();
	
	//************************************
	// Method:    Factory
	// FullName:  Factory::Factory
	// Access:    private 
	// Returns:   
	// Qualifier:
	// Parameter: const Factory & copyFactor
	// Function:  复制构造函数
	//************************************
	Factory(const Factory& copyFactor);
public:
	
	//************************************
	// Method:    GetFactory
	// FullName:  Factory::GetFactory
	// Access:    public static 
	// Returns:   Factory*
	// Qualifier:
	// Function:  新建工厂
	//************************************
	static Factory* GetFactory(){return (new Factory);}
	
	//************************************
	// Method:    ~Factory
	// FullName:  Factory::~Factory
	// Access:    public 
	// Returns:   
	// Qualifier:
	// Function:  析构函数
	//************************************
	~Factory();
	
	//************************************
	// Method:    CreateLine
	// FullName:  Factory::CreateLine
	// Access:    public 
	// Returns:   Fastamp_Math::Line
	// Qualifier:
	// Parameter: Fastamp_Math::Point StartPoint
	// Parameter: Fastamp_Math::Point EndPoint
	// Function:  创建直线
	//************************************
	Fastamp_Math::Line CreateLine(Fastamp_Math::Point StartPoint, Fastamp_Math::Point EndPoint);
	
	//************************************
	// Method:    CreateCircle
	// FullName:  Factory::CreateCircle
	// Access:    public 
	// Returns:   Fastamp_Math::Circle
	// Qualifier:
	// Parameter: Fastamp_Math::Point Center
	// Parameter: double Radius
	// Parameter: Fastamp_Math::MathVector Direction
	// Function:  创建圆
	//************************************
	Fastamp_Math::Circle CreateCircle(Fastamp_Math::Point Center,double Radius, Fastamp_Math::MathVector Direction);
	
	//************************************
	// Method:    CreateFactory
	// FullName:  ForwardDeclare::Factory::CreateFactory
	// Access:    
	// Returns:   friend Factory
	// Qualifier:
	// Function:  创建工厂
	//************************************
	friend Factory CreateFactory();
};

