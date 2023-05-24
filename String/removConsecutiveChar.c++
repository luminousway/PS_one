//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string t="";
        for(int i=0; i<S.length(); i++){
            if(S[i]!=S[i+1]){
                t+=S[i];
            }
        }
        return t;
    }
};

