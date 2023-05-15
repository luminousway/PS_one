//we have to find 'product from start' and 'product from end' and then take res....
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=static_cast<int>(nums.size());
       vector<int> pfs(n);
       vector<int> pfe(n);
       vector<int> res(n);

       pfs[0]=nums[0];
       for(int i=1; i<n; i++){
           pfs[i]=pfs[i-1]*nums[i];
       }

       pfe[n-1]=nums[n-1];
       for(int j=n-2; j>=0; j--){
           pfe[j]=pfe[j+1]*nums[j];

       }

       res[0]=pfe[1];
       res[n-1]=pfs[n-2];
       for(int i=1; i<n-1; i++){
           res[i]=pfs[i-1]*pfe[i+1];
       }
       return res;
    }
};

