void* func(int type){
	switch(type){//ѡ����� 
		case 1:{
			int i=9;
			break;
		}
		case 2:{
			int a='x';
			break;
		}
		default:{
			return NULL;
			break;
		}
	}
}
void func2(char* c_P){
	cout<<*c_p<<endl;
}
void main(){
	int i=8;
	double d=0.5;
	i=static_cast<int>(d);//ǿ��ת�� 
	
	char* c_p=static_cast<char*>(func(2));
	
	func2(static_cast<char*>(func(2)));
}
