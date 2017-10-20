string Solution::longestCommonPrefix(vector<string> &A) {

    string s;
    for (int i=0;i<A[0].length();i++){
        char test = A[0][i];
        int flag = 0;
        for(int j=1;j<A.size();j++){
            if(i>=A[j].length() || A[j][i] != test){
                flag = 1;
                break;
            }
        }
        if(flag==0)
            s.push_back(test);
        else
            break;
        // cout<<s<<endl;
    }
    return s;
}
