int Solution::lengthOfLastWord(const string &A) {

    int len = 0,len1 = 0;
    for(int i=0;i<A.size();i++){
        if(A[i]==' '){
            len1 = len;
            len = 0;
            while(A[i]==' '&& i<A.size())
                    i++;
            i--;
            continue;
        }
        else if(i==A.size()-1){
            len1 = len+1;
            len = 0;
            continue;
        }
        len++;
    }
    return len1;
}

//question is easy, just had to take care of extra spaces...easy question
