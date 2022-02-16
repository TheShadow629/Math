

/******************************************************** 
    *  @Time     :  2022/02/15 10:20
    *  @author   :  Xiao YQ  
*********************************************************/
#pragma once
namespace Fastamp_Math
{
	class _declspec(dllexport)  MathVector
	{
	public:
		double m_X;
		double m_Y;
		double m_Z;
		
		//************************************
		// Method:    MathVector
		// FullName:  Fastamp_Math::MathVector::MathVector
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  构造函数
		//************************************
		MathVector();
		
		//************************************
		// Method:    MathVector
		// FullName:  Fastamp_Math::MathVector::MathVector
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: const MathVector & pt
		// Function:  复制构造函数
		//************************************
		MathVector(const MathVector& pt);
		
		//************************************
		// Method:    MathVector
		// FullName:  Fastamp_Math::MathVector::MathVector
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Parameter: double x
		// Parameter: double y
		// Parameter: double z
		// Function:  赋值构造函数
		//************************************
		MathVector(double x, double y, double z);
		
		//************************************
		// Method:    operator=
		// FullName:  Fastamp_Math::MathVector::operator=
		// Access:    public 
		// Returns:   Fastamp_Math::MathVector
		// Qualifier:
		// Parameter: const MathVector & n
		// Function:  =运算符重载
		//************************************
		MathVector operator = (const MathVector& n);
		
		//************************************
		// Method:    operator+
		// FullName:  Fastamp_Math::MathVector::operator+
		// Access:    public 
		// Returns:   Fastamp_Math::MathVector
		// Qualifier: const
		// Parameter: const MathVector & n
		// Function:  +运算符重载
		//************************************
		MathVector operator + (const MathVector& n)const;
		
		//************************************
		// Method:    operator-
		// FullName:  Fastamp_Math::MathVector::operator-
		// Access:    public 
		// Returns:   Fastamp_Math::MathVector
		// Qualifier: const
		// Parameter: const MathVector & n
		// Function:  -运算符重载
		//************************************
		MathVector operator - (const MathVector& n)const;
		
		//************************************
		// Method:    operator*
		// FullName:  Fastamp_Math::MathVector::operator*
		// Access:    public 
		// Returns:   Fastamp_Math::MathVector
		// Qualifier: const
		// Parameter: double n
		// Function:  *运算符重载
		//************************************
		MathVector operator *(double n)const;
	
		
		//************************************
		// Method:    CrossProduct
		// FullName:  Fastamp_Math::MathVector::CrossProduct
		// Access:    public 
		// Returns:   Fastamp_Math::MathVector
		// Qualifier: const
		// Parameter: const MathVector & n
		// Parameter: const MathVector & m
		// Function:  叉乘
		//************************************
		MathVector CrossProduct(const MathVector& n, const MathVector& m)const;
		
		//************************************
		// Method:    GetLength
		// FullName:  Fastamp_Math::MathVector::GetLength
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Function:  获取长度
		//************************************
		double GetLength()const;
		
		//************************************
		// Method:    GetAngle
		// FullName:  Fastamp_Math::MathVector::GetAngle
		// Access:    public 
		// Returns:   double
		// Qualifier: const
		// Parameter: const MathVector & n
		// Function:  求夹角
		//************************************
		double GetAngle(const MathVector& n)const;
		
		//************************************
		// Method:    VectorUnitize
		// FullName:  Fastamp_Math::MathVector::VectorUnitize
		// Access:    public 
		// Returns:   void
		// Qualifier:
		// Function:  单位化
		//************************************
		void VectorUnitize();
		
		//************************************
		// Method:    ~MathVector
		// FullName:  Fastamp_Math::MathVector::~MathVector
		// Access:    public 
		// Returns:   
		// Qualifier:
		// Function:  析构函数
		//************************************
		~MathVector();
	};

	
	//************************************
	// Method:    operator*
	// FullName:  Fastamp_Math::operator*
	// Access:    public 
	// Returns:   Fastamp_Math::MathVector
	// Qualifier:
	// Parameter: double n
	// Parameter: const MathVector m
	// Function:  *运算符重载
	//************************************
	MathVector operator*(double n, const MathVector m);
	//MathVector operator*(const MathVector m, double n);

}