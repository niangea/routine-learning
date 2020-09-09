class solution{
	public:
		vector<vector<int>> threesum(vector<int>& nums){
			int n=nums.size();//用于循环 
			sort(nums.begin(),nums.end());
			vector<vector<int>> ans;//用于押账返回 
			//枚举a
			for(int first=0;first<n;++first){
				//需要和上次枚举不同
				if(first>0&&nums[first]==nums[first-1]){//同时成立 
					continue;
				} 
				//c指针指向最后
				int third =n-1;//指针序号最后一位 
				int target=-nums[first];//后两个加起来等于相反数 
				//枚举b
				for(int second=first+1;second<n;++second){
					
				{if(second>first+1&&nums[second]==nums[second-1])
					continue;
				} 
				//保证b的指针在c的左侧
				while(second<third&&nums[second]+nums[third]>target){
					--third;
				} 
				//如果指针重合就退出
				if(second==third){
					break;
					
				} 
				if(nums[second]+nums[third]==target){
					ans.push_back({nums[first],nums[second],nums[third]});
				}
			} 
		}return ans;
		
};
