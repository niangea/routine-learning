struct teacher{
	char name[20];
	int age;
	
};
void main(){
	teacher t;
	//引用
	teacher &t1=t;
	//指针
	teacher *p=&t;
	
	//结果是24，引用相当变量的别名
	cout<<sizeof(t1)<<endl;
	//结果是4，指针是地址
	cout<<sizeof(p)<<endl;
	sysytem("pause"); 
}
