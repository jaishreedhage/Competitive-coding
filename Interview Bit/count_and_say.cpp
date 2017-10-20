string Solution::countAndSay(int A) {

    string s,temp;
    s.push_back((char)('0'+1));
    temp.clear();
    int n = 1;
    if(A==n)
        return s;
    for(int i=2;i<=A;i++){
        for(int j=0;j<s.length();j++){
            int k = j+1;
            while(k<s.length() && s[k]==s[j])
                k++;
            temp.push_back((char)('0'+(k-j)));
            temp.push_back(s[j]);
            j = k - 1;
        }
        s.clear();
        s = temp;
        temp.clear();
    }
    return s;
}

//easy question.
