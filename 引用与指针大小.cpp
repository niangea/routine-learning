struct teacher{
	char name[20];
	int age;
	
};
void main(){
	teacher t;
	//����
	teacher &t1=t;
	//ָ��
	teacher *p=&t;
	
	//�����24�������൱�����ı���
	cout<<sizeof(t1)<<endl;
	//�����4��ָ���ǵ�ַ
	cout<<sizeof(p)<<endl;
	sysytem("pause"); 
}
