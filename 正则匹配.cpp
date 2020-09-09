class solution{
	public:
		bool ismath(string s,string p){//方法名，返回值，丢入值
			int m=s.size();//被匹配的长度 
			int n=p.size(); //匹配的长度
			
			auto matches=[&](int i,int j){//取值ij给auto站位
				if(i==0){//第一个字符串长为0 
					return false;
				} 
				if(p[j-1]=='.'){
					return true;
				}
				return s[i-1]==p[j-1];
				
			};
			vector<vector<int>>f(m+1,vector<int>(n+1)) ;//创建动态数组 
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
