#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<iostream>
#include<stdarg.h>
using namespace std;
#define PI 3.14
class MyCircle{
	private://是有属性 
		double r;
		double s;
	public://公共方法 ,与java不同，是共有先命名，然后返回值 
		void setR(double r){
			this->r=r;//押账 
		}
		double getS(){
		return PI*r*r;
		}
};
/*int main (){
	MyCircle c;
	c.setR(4);
	
	cout<<"圆的面积："<<c.getS()<<endl;
	system("pause");
}*/

		
