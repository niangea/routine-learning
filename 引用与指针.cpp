struct Teacher{
	char* name;
	int age;
	
};
//带有结构体的指针写法
void myprint(Teacher *t){
	cout<<t->age<<","<<t->name<<endl;//调用t指针加->
	t.age=21; 
} 
//指针值交换
void swap1(int *a,int *b){
	int temp=0;
	c=*a;
	*a=*b;
	*b=c;

}
//引用值交换
void swap2(int &a,int &b){
	int temp1=0;
	temp1=a;
	a=b;
	b=temp;
} 
//实例化
void main(){
	Teacher t;//结构体实例化加指针
	t.age=20;
	t.name="sda";
	 
} 
