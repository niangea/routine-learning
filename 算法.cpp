//回文子序列
class solution1{
	public:
		string longesthuiwenzixulie(string s){
			string res="";//存放结果
			string temp="";//存放子串
			for(int i=0;i<s.length();i++){
				for(int j=i;j<s.length()j++){
					temp=temp=s[j];
					string tem=temp;//存放反转结果
					std::reverse(tem.begin(),tem.end());//反转
					if(temp=tem) {
						res=res.length()
>temp.length()?res::temp;					}
temp="";
				}
			} 
			return res;
		}
}; 
//z字形变换
#include<iostream>
#include<vector>
class solution2{
	public:
		string convert(string s,int numrows){
			if(numrows==1)return s;//只有一个就直接返回
			vector <string> rows(min(numrow,int(s.size())));//初始化容器
			int currow=0;
			bool goingdown=false;//当前横向和纵向 
			for(char c:s){
				rows[currow]+=c;
				if(currow==0||cur==numrows-1)goingdown=!goingdown;//追踪判断 
				cur
			} 
			
		}
}; 
//数字反转
class solution4{
	public:
		int reverse(int x){
			if(x/10==0)return x;//若在10以内，直接返回
			int y=0;
			while(x){
				if(y>INT_MAX/10||y<INT_MIN/10)//溢出
				return 0;
				y*=10;
				y+=x 
			 
			} 
		}
}; 
//字符串转整数
#include<string>
#include<iostream>
#include<unordered_map>
using namespace std;//利用表格 
class solution5{
	string state="start";
	unordered_map<string,vector<string>>
	table=
}; 
