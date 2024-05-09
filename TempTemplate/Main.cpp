#include<iostream>
#include<cmath>
using std::cout;
using std::cin;
using std::endl;

//int myMax(int a, int b);
//float myMax(float a, float b);
//double myMax(double a, double b);
//int myMax(int a, int b)
//{
//	if (a > b)return a;
//	return b;
//}
//float myMax(float a, float b)
//{
//	if (a > b)return a;
//	return b;
//}
//double myMax(double a, double b)
//{
//	if (a > b)return a;
//	return b;
//}


template <typename T>
T tMax(T a, T b) {
	if (a > b)return a;
	return b;
}


template<typename T>
class Vec2 {
public:
	T x;
	T y;
	T GetX() { return (x); }
	void SetX(T _x) {x = _x;}
	void PrintVec() { cout << "(x,y)=(" << x << "," << y << ")" << endl;	}
	T Length()const { return sqrt(x*x+y*y); }
	bool operator>(const Vec2& other) const
	{
		return (this->Length() > other.Length());
 }
};
 

int main() 
{
	Vec2<int> v;
	v.x = 3;
	v.y = 4;

	Vec2<int>w;
	w.x = 2;
	w.y = 2;
	cout << "Template" << endl;
	if (v > w) v.PrintVec();
	else w.PrintVec();
	cout << "Tmax" << endl;
	Vec2<int> res = tMax(v, w);
	res.PrintVec();
	
	return 0;
}

