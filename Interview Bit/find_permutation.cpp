vector<int> Solution::findPerm(const string A, int B) {

    vector <int> perm(B);
    int ip = B, dp = 1, k = B;
    for(int i=A.length()-1;i>=0;i--){
        if(A[i]=='I')
            perm[--k] = ip--;
        else
            perm[--k] = dp++;
    }
    perm[--k] = ip;
    return perm;
}

//very easy but good question. But i took some time to come up with this solution. And i feel like I've done this question in the past.
