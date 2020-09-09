#include<stdio.h>
#include<iostream>
using namespace std;

class Tv{
	public:
		int x=10;
		int y=20;
		void px(){//打印x方法
			cout<<x<<endl; 
			
		}
		void py(){
			cout<<y<<endl;
		}
};
int main(){
	Tv tv;
	cout<<tv.x<<endl;
	tv.px();
	tv.py();
	
	//Tv *tvNew;
	Tv *tvNew=new Tv();//申请对空间
	if(NULL==tvNew){
		system("pasue");
		return 0;
	} 
	cout<<tvNew->x<<endl;
	tvNew->px();
	tvNew->py();
	
	delete tvNew;//释放
	tvNew=NULL;
	return 0; 
}

