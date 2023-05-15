
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();

        int ans=nums[0];
        int ma=ans;
        int mi=ans;

        for(int i=1; i<n; i++){
            if(nums[i]<0){
                int temp=ma;
                ma=mi;
                mi=temp;
            }

            ma=max(nums[i], ma*nums[i]);
            mi=min(nums[i],mi*nums[i]);
            ans=max(ans,ma);
        }
return ans;

    }
};
