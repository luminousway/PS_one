class Solution {
public:
    int findMin(vector<int>& nums) {
    int mid,lb,up;
    int n=nums.size();
    lb=0;
    up=n-1;


    while(lb<up){
        mid=(lb+up)/2;
        if(nums[mid]>nums[up]){
           lb=mid+1;
        }else if(nums[mid]<nums[up]){
            up= mid;
        }else {nums[up];}
        }
    return nums[lb];
    }
};
