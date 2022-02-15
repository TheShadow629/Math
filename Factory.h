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
	// Function:  ���캯��
	//************************************
	Factory();
	
	//************************************
	// Method:    Factory
	// FullName:  Factory::Factory
	// Access:    private 
	// Returns:   
	// Qualifier:
	// Parameter: const Factory & copyFactor
	// Function:  ���ƹ��캯��
	//************************************
	Factory(const Factory& copyFactor);
public:
	
	//************************************
	// Method:    GetFactory
	// FullName:  Factory::GetFactory
	// Access:    public static 
	// Returns:   Factory*
	// Qualifier:
	// Function:  �½�����
	//************************************
	static Factory* GetFactory(){return (new Factory);}
	
	//************************************
	// Method:    ~Factory
	// FullName:  Factory::~Factory
	// Access:    public 
	// Returns:   
	// Qualifier:
	// Function:  ��������
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
	// Function:  ����ֱ��
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
	// Function:  ����Բ
	//************************************
	Fastamp_Math::Circle CreateCircle(Fastamp_Math::Point Center,double Radius, Fastamp_Math::MathVector Direction);
	
	//************************************
	// Method:    CreateFactory
	// FullName:  ForwardDeclare::Factory::CreateFactory
	// Access:    
	// Returns:   friend Factory
	// Qualifier:
	// Function:  ��������
	//************************************
	friend Factory CreateFactory();
};

