int Solution::strStr(const string &haystack, const string &needle) {

    if(haystack.length()==0 || needle.length()==0 ||haystack.length()<needle.length())
        return -1;
    int flag = 0;
    for(int i=0;i<=haystack.length()-needle.length();i++){
        flag = 0;
        for(int j=0;j<needle.length();j++){
            if(needle[j] != haystack[i+j]){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
    return -1;
}

//very easy qsn. But end cases handling is very important. Next time always think like the way you think when solving a qsn using a recursion, where you think of a base case
//never forget base cases!!

//also i need to learn KMP algorithm for string matching!
