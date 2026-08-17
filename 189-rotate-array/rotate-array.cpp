class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        int n = nums.size();
        if(k>nums.size()) return;
        vector<int> rotated;
        for(int i=n-k;i<nums.size();i++){
                rotated.push_back(nums[i]);
               
        }
        for(int j=0;j<nums.size()-k;j++){
             rotated.push_back(nums[j]);
        }
        nums.clear();
        for(int i=0;i<rotated.size();i++){
            nums.push_back(rotated[i]);
        }
        
    }
};