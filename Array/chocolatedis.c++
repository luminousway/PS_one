
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    if(n==0|| m==0){
       return 0;
    }
    
    if(n<m){
       return -1;
    }
    
    sort(a.begin(), a.end());
    
    long long mindif=INT_MAX;
    long long diff;
    for(int i=0; (i+m-1)<n; i++){
    diff=a[i+m-1]-a[i];
    
    if(diff<mindif){
        mindif=diff;
    }
   
    }
       return mindif;  
    }   
};
