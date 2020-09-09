class a{
	public:
		char*hame;
};
//这里加了virtual关键字
class a1:virtual public a{
	
}; 
//这里加了virtual关键字
class a2:virtual public a{
	
};
class b:public a1,public a2{//不用接口也能多继承
 
	
};//区别了啊，A1,A2
 

