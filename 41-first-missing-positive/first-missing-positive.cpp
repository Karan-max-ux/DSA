class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]<=0){
                continue;
            }else if (temp.empty() || temp.back() != nums[i]) {
                    temp.push_back(nums[i]);
            }
        }
        
        int m = temp.size();
        for(int i=0;i<m;i++){
            if(temp[i]!=i+1){
                return i+1;
            }
        }
        return m+1;
    }
};