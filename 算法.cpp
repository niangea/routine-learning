//����������
class solution1{
	public:
		string longesthuiwenzixulie(string s){
			string res="";//��Ž��
			string temp="";//����Ӵ�
			for(int i=0;i<s.length();i++){
				for(int j=i;j<s.length()j++){
					temp=temp=s[j];
					string tem=temp;//��ŷ�ת���
					std::reverse(tem.begin(),tem.end());//��ת
					if(temp=tem) {
						res=res.length()
>temp.length()?res::temp;					}
temp="";
				}
			} 
			return res;
		}
}; 
//z���α任
#include<iostream>
#include<vector>
class solution2{
	public:
		string convert(string s,int numrows){
			if(numrows==1)return s;//ֻ��һ����ֱ�ӷ���
			vector <string> rows(min(numrow,int(s.size())));//��ʼ������
			int currow=0;
			bool goingdown=false;//��ǰ��������� 
			for(char c:s){
				rows[currow]+=c;
				if(currow==0||cur==numrows-1)goingdown=!goingdown;//׷���ж� 
				cur
			} 
			
		}
}; 
//���ַ�ת
class solution4{
	public:
		int reverse(int x){
			if(x/10==0)return x;//����10���ڣ�ֱ�ӷ���
			int y=0;
			while(x){
				if(y>INT_MAX/10||y<INT_MIN/10)//���
				return 0;
				y*=10;
				y+=x 
			 
			} 
		}
}; 
//�ַ���ת����
#include<string>
#include<iostream>
#include<unordered_map>
using namespace std;//���ñ�� 
class solution5{
	string state="start";
	unordered_map<string,vector<string>>
	table=
}; 
