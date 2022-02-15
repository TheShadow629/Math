

/******************************************************** 
    *  @Time     :  2022/02/15 10:21
    *  @author   :  Xiao YQ  
*********************************************************/
////#include <iostream>
////#include <memory>
////#include <ostream>
////
////class A {
////private:
////	static int i;
////	A() {	}
////	A(const A&) {}
////public:
////	static void init()
////	{
////		A::i = 0;
////	}
////
////	std::auto_ptr<A> static makeA() {
////		i++;
////		std::auto_ptr<A> p(new A);
////		return p;
////	}
////	static int getNum() {
////		return A::i;
////	}
////};
////int A::i = 0;
////int main() {
////	for (int i = 0; i < 10; i++) {
////		std::auto_ptr<A> p = A::makeA();
////	}
////	std::cout << A::getNum() << std::endl;
////}
//
//#include <cmath>
//#include "MathVector.h"
//#define vec3d MathVector
//#define x m_X
//#define y m_Y
//#define z m_Z
///* 两个向量的差, (vector1 - vector2). */
//vec3d vdiff(const vec3d vector1, const vec3d vector2)
//{
//    vec3d v;
//    v.x = vector1.x - vector2.x;
//    v.y = vector1.y - vector2.y;
//    v.z = vector1.z - vector2.z;
//    return v;
//}
//
///* 两个向量的和, (vector1 + vector2). */
//vec3d vsum(const vec3d vector1, const vec3d vector2)
//{
//    vec3d v;
//    v.x = vector1.x + vector2.x;
//    v.y = vector1.y + vector2.y;
//    v.z = vector1.z + vector2.z;
//    return v;
//}
//
///* 向量的数乘1. */
//vec3d vmul(const vec3d vector, const double n)
//{
//    vec3d v;
//    v.x = vector.x * n;
//    v.y = vector.y * n;
//    v.z = vector.z * n;
//    return v;
//}
//
///* 向量的数乘2. */
//vec3d vdiv(const vec3d vector, const double n)
//{
//    vec3d v;
//    v.x = vector.x / n;
//    v.y = vector.y / n;
//    v.z = vector.z / n;
//    return v;
//}
//
///* 向量的欧几里得范数 */
//double vdist(const vec3d v1, const vec3d v2)
//{
//    double xd = v1.x - v2.x;
//    double yd = v1.y - v2.y;
//    double zd = v1.z - v2.z;
//    return sqrt(xd * xd + yd * yd + zd * zd);
//}
//
///* 向量的欧几里得范数  */
//double vnorm(const vec3d vector)
//{
//    return sqrt(vector.x * vector.x + vector.y * vector.y + vector.z * vector.z);
//}
//
///* 两个向量的点积*/
//double dot(const vec3d vector1, const vec3d vector2)
//{
//    return vector1.x * vector2.x + vector1.y * vector2.y + vector1.z * vector2.z;
//}
//
///*两个向量的叉积 */
//vec3d cross(const vec3d vector1, const vec3d vector2)
//{
//    vec3d v;
//    v.x = vector1.y * vector2.z - vector1.z * vector2.y;
//    v.y = vector1.z * vector2.x - vector1.x * vector2.z;
//    v.z = vector1.x * vector2.y - vector1.y * vector2.x;
//    return v;
//}
//
//
///* Intersecting a sphere sc with radius of r, with a line p1-p2.
// * Return zero if successful, negative error otherwise.
// * mu1 & mu2 are constant to find points of intersection.
// * 球和直线的相交
// *
//*/
//int sphereline(const vec3d p1, const vec3d p2,
//    const vec3d sc, double r, double* const mu1, double* const mu2)
//{
//    double a, b, c;
//    double bb4ac;
//    vec3d dp;
//
//    dp.x = p2.x - p1.x;
//    dp.y = p2.y - p1.y;
//    dp.z = p2.z - p1.z;
//
//    a = dp.x * dp.x + dp.y * dp.y + dp.z * dp.z;
//
//    b = 2 * (dp.x * (p1.x - sc.x) + dp.y * (p1.y - sc.y) + dp.z * (p1.z - sc.z));
//
//    c = sc.x * sc.x + sc.y * sc.y + sc.z * sc.z;
//    c += p1.x * p1.x + p1.y * p1.y + p1.z * p1.z;
//    c -= 2 * (sc.x * p1.x + sc.y * p1.y + sc.z * p1.z);
//    c -= r * r;
//
//    bb4ac = b * b - 4 * a * c;
//
//    if (fabs(a) == 0 || bb4ac < 0) {
//        *mu1 = 0;
//        *mu2 = 0;
//        return -1;
//    }
//
//    *mu1 = (-b + sqrt(bb4ac)) / (2 * a);
//    *mu2 = (-b - sqrt(bb4ac)) / (2 * a);
//
//    return 0;
//}
//
//int main(int argc, char* argv[])
//{
//	QCoreApplication a(argc, argv);
//
//	vec3d O;
//	O.x = 30;
//	O.y = 40;
//	O.z = 70;
//
//	vec3d E;
//	E.x = 30;
//	E.y = -40;
//	E.z = 70;
//
//	vec3d Center;
//	Center.x = 0;
//	Center.y = 0;
//	Center.z = 70;
//
//
//	double R = 50;
//	double res1, res2;
//
//	int  result = 1;
//	result = sphereline(O, E, Center, R, &res1, &res2);
//
//	qDebug() << "求解得到的参数t为：";
//	qDebug() << "t1:" << QString::number(res1, 'g', 5);
//	qDebug() << "t2:" << QString::number(res2, 'g', 5);
//
//	vec3d ex, t2, t3;
//	double h;
//
//	ex = vdiff(E, O); // vector result1-result2
//	h = vnorm(ex); // scalar result1-result2
//	ex = vdiv(ex, h); // unit vector ex with respect to result1 (new coordinate system)
//	/* t2 points to the intersection */
//	t2 = vmul(ex, res1 * h);
//	t2 = vsum(O, t2);
//
//	t3 = vmul(ex, res2 * h);
//	t3 = vsum(O, t3);
//
//	qDebug() << "求解得到如下的交点:";
//	qDebug() << QString::number(t2.x, 'g', 5);
//	qDebug() << QString::number(t2.y, 'g', 5);
//	qDebug() << QString::number(t2.z, 'g', 5) << endl;
//
//	qDebug() << QString::number(t3.x, 'g', 5);
//	qDebug() << QString::number(t3.y, 'g', 5);
//	qDebug() << QString::number(t3.z, 'g', 5) << endl;
//
//
//	return a.exec();
//}