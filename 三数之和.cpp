class solution{
	public:
		vector<vector<int>> threesum(vector<int>& nums){
			int n=nums.size();//����ѭ�� 
			sort(nums.begin(),nums.end());
			vector<vector<int>> ans;//����Ѻ�˷��� 
			//ö��a
			for(int first=0;first<n;++first){
				//��Ҫ���ϴ�ö�ٲ�ͬ
				if(first>0&&nums[first]==nums[first-1]){//ͬʱ���� 
					continue;
				} 
				//cָ��ָ�����
				int third =n-1;//ָ��������һλ 
				int target=-nums[first];//�����������������෴�� 
				//ö��b
				for(int second=first+1;second<n;++second){
					
				{if(second>first+1&&nums[second]==nums[second-1])
					continue;
				} 
				//��֤b��ָ����c�����
				while(second<third&&nums[second]+nums[third]>target){
					--third;
				} 
				//���ָ���غϾ��˳�
				if(second==third){
					break;
					
				} 
				if(nums[second]+nums[third]==target){
					ans.push_back({nums[first],nums[second],nums[third]});
				}
			} 
		}return ans;
		
};
