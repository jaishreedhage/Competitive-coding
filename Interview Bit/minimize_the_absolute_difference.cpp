int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {

    int i=0,j=0,k=0,min_diff=INT_MAX;

    while(i<A.size() && j<B.size() && k<C.size()){
        int temp = A[i]>B[j]?A[i]:B[j];
        int max = C[k]>temp?C[k]:temp;
        temp = A[i]<B[j]?A[i]:B[j];
        int min = C[k]<temp?C[k]:temp;
        int abs_diff = abs(max-min);
        if(min_diff>abs_diff)
            min_diff = abs_diff;
        if(min==A[i])
            i++;
        else if(min==B[j])
            j++;
        else if(min==C[k])
            k++;
    }
    return min_diff;
}

//easy qsn. the thing is that my ternary thing for max/min of 3 numbers didnt work properly idk why :/
