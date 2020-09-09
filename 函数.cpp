#include <iostream>
using namespace std;
/*函数声明*/
void fun(int i,int k=5,int j=10);
/*函数定义*/
void fun(int i,int k,int j){
	cout<<i<<k<<j<<endl;
} 
/*声明内联函数，只调用逻辑*/
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
/*函数参数*/
int main(){
	fun(20);//无实参就默认 
	fun(20,30);
	fun(20,30,40);
	int i=1,j=2,k=3,max;
	max=getMax(i,j,k);
	cout<<"max="<<max<<endl;
	return 0;
} 
/*****************************/
//函数重载
int getMax(int i,int j){//内敛函数的好处 
	return 0;
} 
float getMax(float i,float j){
	return 0;
}
