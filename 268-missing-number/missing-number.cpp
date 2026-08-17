class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
    vector<int> temp;
    for(int i=0;i<=n;i++){
        temp.push_back(i);
    }
    sort(nums.begin(),nums.end());
    sort(temp.begin(),temp.end());
    int m = temp.size();
    int result = 0;
    for(int i=0;i<n;i++){
        result = result + nums[i];
    }
    int result2 =0;
    for(int i=0;i<m;i++){
        result2 = result2+temp[i];
    }

    return result2-result;
    }
};