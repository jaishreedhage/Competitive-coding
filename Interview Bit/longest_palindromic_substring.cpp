string Solution::longestPalindrome(string A) {
    if(A.length()<=1)
        return A;
    int start = 0, maxlen = 1,len=A.length();
    for(int i=1;i<len;i++){
        int low = i-1;
        int high = i;
        while(low>=0 && high<len && A[low]==A[high]){
            if(high-low+1>maxlen){
                start = low;
                maxlen = high-low+1;
            }
            low--;
            high++;
        }
        low = i-1;
        high = i+1;
        while(low>=0 && high<len && A[low]==A[high]){
            if(high-low+1>maxlen){
                start = low;
                maxlen = high-low+1;
            }
            low--;
            high++;
        }
    }
    return A.substr(start,maxlen);
}
//IMP QSN
