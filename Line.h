

/******************************************************** 
    *  @Time     :  2022/02/15 10:20
    *  @author   :  Xiao YQ  
*********************************************************/
#pragma once
#include "Point.h"
#include "MathVector.h"
namespace Fastamp_Math
{
	class _declspec(dllexport) Line
	{
	private:
		Point m_StartPoint;
		Point m_EndPoint;
		
		//************************************
		// Method:    Line
		// FullName:  Fastamp_Math::Line::Line
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  ���캯��
		//************************************
		Line();
	public:
		enum Type { Indefinite = 0, RAY, SEGMENT };
		Type type;

		
		//************************************
		// Method:    GetLine
		// FullName:  Fastamp_Math::Line::GetLine
		// Access:    public static 
		// Returns:   Fastamp_Math::Line*
		// Qualifier:
		// Function:  ��ȡֱ��
		//************************************
		static Line* GetLine() { return (new Line); }
		
		//************************************
		// Method:    Line
		// FullName:  Fastamp_Math::Line::Line
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: const Line & pt
		// Function:  ���ƹ��캯��
		//************************************
		Line(const Line& pt);
		
		//************************************
		// Method:    Line
		// FullName:  Fastamp_Math::Line::Line
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: const Point & m
		// Parameter: const Point & n
		// Function:  ��ֵ���캯��
		//************************************
		Line(const Point& m, const Point& n);
		
		//************************************
		// Method:    operator=
		// FullName:  Fastamp_Math::Line::operator=
		// Access:    public 
		// Returns:   Fastamp_Math::Line
		// Qualifier:
		// Parameter: Line & l
		// Function:  =���������
		//************************************
		Line operator=(Line& l);
		
		//************************************
		// Method:    ~Line
		// FullName:  Fastamp_Math::Line::~Line
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  ��������
		//************************************
		~Line();
		
		//************************************
		// Method:    GetStartPoint
		// FullName:  Fastamp_Math::Line::GetStartPoint
		// Access:    public 
		// Returns:   Point
		// Qualifier: const
		// Function:  ��ȡ���
		//************************************
		Point GetStartPoint()const;
		
		//************************************
		// Method:    GetEndPoint
		// FullName:  Fastamp_Math::Line::GetEndPoint
		// Access:    public 
		// Returns:   Point
		// Qualifier: const
		// Function:  ��ȡ�յ�
		//************************************
		Point GetEndPoint()const;
		
		//************************************
		// Method:    SetStartPoint
		// FullName:  Fastamp_Math::Line::SetStartPoint
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: const Point & n
		// Function:  �������
		//************************************
		void SetStartPoint(const Point& n);
		
		//************************************
		// Method:    SetEndPoint
		// FullName:  Fastamp_Math::Line::SetEndPoint
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Parameter: const Point & n
		// Function:  �����յ�
		//************************************
		void SetEndPoint(const Point& n);
		
		//************************************
		// Method:    GetLength
		// FullName:  Fastamp_Math::Line::GetLength
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Function:  ��ȡ����
		//************************************
		double GetLength() const;
		
		//************************************
		// Method:    GetDirection
		// FullName:  Fastamp_Math::Line::GetDirection
		// Access:    public 
		// Returns:   Fastamp_Math::MathVector
		// Qualifier:
		// Function:  ��ȡ����
		//************************************
		MathVector GetDirection();
		
		//************************************
		// Method:    GetType
		// FullName:  Fastamp_Math::Line::GetType
		// Access:    virtual public 
		// Returns:   Fastamp_Math::Line::Type
		// Qualifier:
		// Function:  ��ȡ����
		//************************************
		virtual Type GetType();
	};
}

