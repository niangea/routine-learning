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
	//����Ǽ̳� 
};
/*int main(){//���ַ��� 
	//����
	man ma;//c++����new 
	ma.say() ;
	//�����ำֵ����������û�ָ��
	human*	h_p=&ma;
	h_p->say();
	//�����ʼ���������͵Ķ���
	human h2=ma;
	h2.say();
	//������ø����Ա
	ma.human::say();
	ma.human::age=10; 
	
}*/


