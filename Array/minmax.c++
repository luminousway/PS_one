class Solution
{
    struct pair{
    int min;
    int max;
};
   public:
    int findSum(int A[], int N)
    {
    	//code here.
    pair minmax;
   sort(A,A+N);
   minmax.min=A[0];
   minmax.max=A[N-1];
   
   return (minmax.min+minmax.max);
               
           }  
            
     

};
