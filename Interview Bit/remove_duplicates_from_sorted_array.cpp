int Solution::removeDuplicates(vector<int> &A) {

    for(int i=0;i<A.size();i++){
        int val = A[i],j;
        for(j=i+1;j<A.size();j++){
            if(A[j]!=val)
                break;
        }
        A.erase(A.begin()+i+1,A.begin()+j);
    }
    return A.size();
}

//easy qns.
