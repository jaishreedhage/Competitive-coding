int Solution::threeSumClosest(vector<int> &A, int B) {

    sort(A.begin(),A.end());
    int i=0,j=A.size()-1,k,max=1000000000,s=0;
    for(i=0;i<A.size()-2;i++){
        k=i+1;
        j=A.size()-1;
        while(k<j){
            s = A[i]+A[j]+A[k];
            if(abs(s-B) < abs(max-B)){
                max = s;
            }
            if(s>B)
                j--;
            else
                k++;
        }
    }
    return max;
}

//qsn is good!  very similar to the 2 sum qsn though
