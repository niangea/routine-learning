#include<iostream>
using namespace std;
class human{
	public:
		human(char *name,int age){//������this�͹����� 
			this->name=name;
			this->age=age;
		}
	public:
		char* name;
		int age;
};
class man:public human{
	public:
		//�����๹�촫��
		man(char *brother,char *s_name,int s_age,char *h_name,int h_age):human(s_name,s_age),h(h_name,h_age){
			this->brother=brother;
		}
		private: human h;
 
};
/*int main(){
	man m1("asd","sda",12,"sads",12);
}*/
