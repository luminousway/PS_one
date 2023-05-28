string printSequence(string S)
{
    //code here.
    string output="";
    int n=S.length();
    
    string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
    
    for(int i=0; i<n; i++){
        if(S[i]==' '){
            output=output+"0";
        }else{
            
            int pos=S[i]-'A';
            output=output+str[pos];
            
            
        }
    }
    return output;
}
