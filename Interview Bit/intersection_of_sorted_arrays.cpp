vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {

    vector<int> intersect;
    int i=0,j=0;
    while(i<A.size() && j<B.size()){
        if(A[i]==B[j]){
            intersect.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i]<B[j])
            i++;
        else if(B[j]<A[i])
            j++;
    }
    return intersect;
}

//easy qsn.
