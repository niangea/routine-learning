#include<stdio.h>
#include<iostream>
using namespace std;

class Tv{
	public:
		int x=10;
		int y=20;
		void px(){//��ӡx����
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
	Tv *tvNew=new Tv();//����Կռ�
	if(NULL==tvNew){
		system("pasue");
		return 0;
	} 
	cout<<tvNew->x<<endl;
	tvNew->px();
	tvNew->py();
	
	delete tvNew;//�ͷ�
	tvNew=NULL;
	return 0; 
}

