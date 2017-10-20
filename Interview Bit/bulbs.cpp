int Solution::bulbs(vector<int> &A) {
    int count = 0;
    for(int i=0;i<A.size();i++){
        if(count%2==0){
            if(A[i]==0)
                count++;
        }
        else{
            if(A[i]==1)
                count++;
        }
    }
    return count;
}

//lame qsn
