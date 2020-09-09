class solution{
	public:
		bool ismath(string s,string p){//������������ֵ������ֵ
			int m=s.size();//��ƥ��ĳ��� 
			int n=p.size(); //ƥ��ĳ���
			
			auto matches=[&](int i,int j){//ȡֵij��autoվλ
				if(i==0){//��һ���ַ�����Ϊ0 
					return false;
				} 
				if(p[j-1]=='.'){
					return true;
				}
				return s[i-1]==p[j-1];
				
			};
			vector<vector<int>>f(m+1,vector<int>(n+1)) ;//������̬���� 
			f[0][0]=true;
			for(int i=0;i<=m;i++){
				for(int j=1;j<=n;j++){
					if(p[j-1]=='*'){
						f[i][j]|=f[i][j-2];
						if(matches(i,j-1)){
							f[i][j]|=f[i-1][j-1];
						}
					}
					
				}
			}
		}
};
