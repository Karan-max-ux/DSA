class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int n = nums1.size();
    int m = nums2.size();
    for(int i=0;i<m;i++){
        nums1.push_back(nums2[i]);
    }
    sort(nums1.begin(),nums1.end());
    int p = nums1.size();
    int first;
    int second;
    int result;
    double final;
    if(p%2==0){
        result = p/2;
        first = result;
        second = result -1;
        final = (nums1[first]+nums1[second])/2.0;
        return final;
    }else{
        result = p/2;
        final = nums1[result];
        return final;
    }
    }
};