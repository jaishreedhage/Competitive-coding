bool Solution::isPower(int A) {
    if(A==1)
        return true;
    float lA = log(A);
    for(int i=2;i<A;i++){
        for(int j=2;j<A;j++){
            float val = i*log(j);
            if(val==lA)
                return true;
            else if(val>lA)
                break;
        }
    }
    return false;
}

//math qsn
