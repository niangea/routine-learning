struct teacher{
	char* name;
	int age;
	
};
//����д��
void getteacher(teacher* &p){//ȡp�ĵ�ַ��ָ�� 
	p=(teacher*)malloc(sizeof(teacher));//���ÿռ���ṹ��ָ��
	p->age=20; 
} 
//����ָ��д��
void getteacher2(teacher **p){//**�Ƕ���ָ�� 
	teacher *tmp= (teacher*)malloc(sizeof(teacher));//������Ҫдָ��
	tmp->age=20;//tmp�ǵڶ�ָ�� 
	*p=tmp;//������� 
	
} 
