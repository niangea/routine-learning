struct Teacher{
	char* name;
	int age;
	
};
//���нṹ���ָ��д��
void myprint(Teacher *t){
	cout<<t->age<<","<<t->name<<endl;//����tָ���->
	t.age=21; 
} 
//ָ��ֵ����
void swap1(int *a,int *b){
	int temp=0;
	c=*a;
	*a=*b;
	*b=c;

}
//����ֵ����
void swap2(int &a,int &b){
	int temp1=0;
	temp1=a;
	a=b;
	b=temp;
} 
//ʵ����
void main(){
	Teacher t;//�ṹ��ʵ������ָ��
	t.age=20;
	t.name="sda";
	 
} 
