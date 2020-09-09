//bool类型
bool flag;
flag=(3<5);
cout<<flag<<'n\';
cout<<boolalpha<<flag<<'\n';//boolalpaha可以将1转为true
//structure结构体
struct point{
	double x,y;
	void setval(double,double);
	
}; 
point p1,p2;//和类的写法差不多
//string类型
#include<string>
using namespace std;
string s1;
string s2="sda";
string s3=s2;
string s4(10,'zx');//初始化10个zx
//类
class person{
	public:
		void setage(unsigned n);//指没有正负号 
		unsigned getage() const;
		
}; 
 
