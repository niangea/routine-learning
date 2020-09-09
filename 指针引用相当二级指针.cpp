struct teacher{
	char* name;
	int age;
	
};
//引用写法
void getteacher(teacher* &p){//取p的地址给指针 
	p=(teacher*)malloc(sizeof(teacher));//调用空间给结构体指针
	p->age=20; 
} 
//二级指针写法
void getteacher2(teacher **p){//**是二级指针 
	teacher *tmp= (teacher*)malloc(sizeof(teacher));//那这里要写指针
	tmp->age=20;//tmp是第二指针 
	*p=tmp;//这里便是 
	
} 
