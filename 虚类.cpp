class a{
	public:
		char*hame;
};
//�������virtual�ؼ���
class a1:virtual public a{
	
}; 
//�������virtual�ؼ���
class a2:virtual public a{
	
};
class b:public a1,public a2{//���ýӿ�Ҳ�ܶ�̳�
 
	
};//�����˰���A1,A2
 

