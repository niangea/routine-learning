//bool����
bool flag;
flag=(3<5);
cout<<flag<<'n\';
cout<<boolalpha<<flag<<'\n';//boolalpaha���Խ�1תΪtrue
//structure�ṹ��
struct point{
	double x,y;
	void setval(double,double);
	
}; 
point p1,p2;//�����д�����
//string����
#include<string>
using namespace std;
string s1;
string s2="sda";
string s3=s2;
string s4(10,'zx');//��ʼ��10��zx
//��
class person{
	public:
		void setage(unsigned n);//ָû�������� 
		unsigned getage() const;
		
}; 
 
