class Solution{
public:
	// The main function that returns the arrangement with the largest value as
	// string.
	// The function accepts a vector of strings
	static bool comparator(string s1, string s2){
	    string first=s1+s2;
	    string sec=s2+s1;
	    for(int i=0; i<first.size(); i++){
	        if(first[i]>sec[i]){
	            return true;
	        }else if(first[i]<sec[i]){
	            return false;
	        }
	    }
	    return false;
	}
	string printLargest(vector<string> &arr) {
	    // code here
	    int n=arr.size();
	    string str="";
	    sort(arr.begin(),arr.end(),comparator);
	    for(int i=0; i<n; i++){
	       str.append(arr[i]);
	       
	    }
	    return str;
	}
};
