#include<iostream>
using namespace std;
class human{
	public:
		void say(){
			cout<<"shuohua"<<endl;
		}
	public:
		int age;
};
class man:public human{
	//这就是继承 
};
/*int main(){//四种方法 
	//子类
	man ma;//c++不用new 
	ma.say() ;
	//将子类赋值给父类的引用或指针
	human*	h_p=&ma;
	h_p->say();
	//子类初始化父类类型的对象
	human h2=ma;
	h2.say();
	//子类调用父类成员
	ma.human::say();
	ma.human::age=10; 
	
}*/


