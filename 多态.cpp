#pragma once
class Plane{
	public:
		virtual void fly();
		virtual void land();
};
#include "Plane.h"
#include<iostream>
using namespace std;
void Plane::fly(){//����һ��ʵ���� 
	cout<<"qifei"<<endl;
}
void Plane::land(){
	cout<<"zuolu"<<endl;
}
#pragma once
#include "Plane.h"
class jet:public Plane{
	virtual void fly();//�̳�����д 
	virtual void land();
};
#include"jet.h"
#include<iostream>
using namespace std;
void jet::fly(){
	cout<<"yuandiqifei"<<endl;
}
void jet::land(){
	cout<<"sadad"<<endl;
}

