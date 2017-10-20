int Solution::findMinXor(vector<int> &A) {
    if(A.size()==1)
        return A[0];
    sort(A.begin(),A.end());
    int i,j,min_xor = INT_MAX;
    for(i=0;i<A.size()-1;i++){
        int b = A[i] ^ A[i+1];
        if(b<min_xor)
            min_xor = b;
    }
    return min_xor;
}

//BIT MANIP QSN -> IDK
