#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<stdarg.h>
using namespace std;
#define  PI 3.14
class yuanzhou{
	//属性
	private:
	double r;
	double s;
	public:
	void setr(double r){
		this->r=r;//构造器 
	} 
};
void main(){
	yuanzhou a;//实例化 
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
			cout<<"打印"<<endl;
		}
};//两个类的大小只计算普通属性，所以是一样的
class human{//c++可以多继承类 
	public:
		void say(){
			cout<<"sda"<<endl;
		}
	protected:
		int age;
		
}; 
class man:public human{
	//这就是继承 
};
void main(){
	man m1;
	m1.say();
	//子类赋值给父类
	human* h=&m1;
	h->say();//指向方法
	human &h1=m1;//第二种写法
	 
	h1.say()；
	//子类调用父类成员
	m1.huamn::say(); 
} 
class father{
	public:
		father(char*name,int age){//父类构造方法 
			this->name=name;
			this->age=age;
		}
};
