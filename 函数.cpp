#include <iostream>
using namespace std;
/*��������*/
void fun(int i,int k=5,int j=10);
/*��������*/
void fun(int i,int k,int j){
	cout<<i<<k<<j<<endl;
} 
/*��������������ֻ�����߼�*/
inline int getMax(int i,int j,int k);
int getMax(int i,int j,int k) {
	int max=0;
	if(i>j){
		max=i;
	}else{
		if(j>k){
			max=j;
		}else{
			max=k;
		}
	}return max;
}
/*��������*/
int main(){
	fun(20);//��ʵ�ξ�Ĭ�� 
	fun(20,30);
	fun(20,30,40);
	int i=1,j=2,k=3,max;
	max=getMax(i,j,k);
	cout<<"max="<<max<<endl;
	return 0;
} 
/*****************************/
//��������
int getMax(int i,int j){//���������ĺô� 
	return 0;
} 
float getMax(float i,float j){
	return 0;
}
