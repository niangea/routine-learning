#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<stdarg.h>
using namespace std;
#define  PI 3.14
class yuanzhou{
	//����
	private:
	double r;
	double s;
	public:
	void setr(double r){
		this->r=r;//������ 
	} 
};
void main(){
	yuanzhou a;//ʵ���� 
}
class a{
	public:
		int i;
		int j;
		int k;
		static int m;
}; 
class b{
	public:
		int e;
		int f;
		int g;
		void myprint(){
			cout<<"��ӡ"<<endl;
		}
};//������Ĵ�Сֻ������ͨ���ԣ�������һ����
class human{//c++���Զ�̳��� 
	public:
		void say(){
			cout<<"sda"<<endl;
		}
	protected:
		int age;
		
}; 
class man:public human{
	//����Ǽ̳� 
};
void main(){
	man m1;
	m1.say();
	//���ำֵ������
	human* h=&m1;
	h->say();//ָ�򷽷�
	human &h1=m1;//�ڶ���д��
	 
	h1.say()��
	//������ø����Ա
	m1.huamn::say(); 
} 
class father{
	public:
		father(char*name,int age){//���๹�췽�� 
			this->name=name;
			this->age=age;
		}
};
