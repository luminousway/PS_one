class Solution {
public:
vector<vector<int>> res;
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(i==0 || nums[i-1]!=nums[i]){
            toSumSorted(i+1,n-1,nums,0-nums[i]);
        }}
        return res;
    }

    void toSumSorted(int i, int j, vector<int>nums, int target){
        int a1=nums[i-1];
        while(i<j){
            if(nums[i]+nums[j]>target){
j--;
            }else if(nums[i]+nums[j]<target){
i++;
            }else{
vector<int> list;
list.push_back(a1);
list.push_back(nums[i]);
list.push_back(nums[j]);

res.push_back(list);
while(i<j && nums[i]==nums[i+1]){
    i++;
}

while(i<j && nums[j]==nums[j-1]){
    j--;
}


i++; j--;



            }
        }
    }
};
