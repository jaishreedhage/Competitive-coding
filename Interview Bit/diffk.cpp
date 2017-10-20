int Solution::diffPossible(vector<int> &A, int B) {

    int i,j;
    for(i=0;i<A.size()-1;i++){
        j=i+1;
        while(j<A.size()){
            if(A[j]-A[i]==B)
                return 1;
            else if(A[j]-A[i]<B)
                j++;
            else
                break;
        }
    }
    return 0;
}

//in such qsns you need to check with many scenarios and see if your algo skips anything when you use 2ptrs
