class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int inf=0;
        int n=nums.size()-1;

        for(int i=n; i>0; i--){
            if(nums[i]>nums[i-1]){
                inf=i;
                break;
            }
        }

        if(inf==0){
            sort(nums.begin(),nums.end());
        }else{
            int min=INT_MAX;
            int toswap=nums[inf-1];
           for(int j=inf; j<=n; j++){
            if(nums[j]-toswap>0 && nums[j]-toswap<min){
                int temp=nums[j];
                nums[j]=nums[inf-1];
                nums[inf-1]=temp;
            }}
         sort(nums.begin()+inf, nums.end());
        }
       
    }
};
