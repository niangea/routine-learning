#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<iostream>
#include<stdarg.h>
using namespace std;
#define PI 3.14
class MyCircle{
	private://�������� 
		double r;
		double s;
	public://�������� ,��java��ͬ���ǹ�����������Ȼ�󷵻�ֵ 
		void setR(double r){
			this->r=r;//Ѻ�� 
		}
		double getS(){
		return PI*r*r;
		}
};
/*int main (){
	MyCircle c;
	c.setR(4);
	
	cout<<"Բ�������"<<c.getS()<<endl;
	system("pause");
}*/

		
