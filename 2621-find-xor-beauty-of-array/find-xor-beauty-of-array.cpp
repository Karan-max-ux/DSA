class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int n = nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            int n = ((nums[i] | nums[i]) & nums[i]);
            temp.push_back(n);
        }
        int result=temp[0];
        int m = temp.size();
        for(int j=1;j<m;j++){
            result = result ^temp[j];
        }

        return result;
    }
};