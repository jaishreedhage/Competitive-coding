int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    struct temp{
        int count,val;
    }t[2];
    int q = A.size()/3;
    for(int i=0;i<2;i++){
        t[i].count = 0;
        t[i].val = 0;
    }
    for(int i=0;i<A.size();i++){
        int j;
        for(j=0;j<2;j++){
            if(t[j].val == A[i]){
                t[j].count++;
                break;
            }
        }
        if(j==2){
            for(j=0;j<2;j++){
                if(t[j].count == 0){
                    t[j].val = A[i];
                    t[j].count++;
                    break;
                }
            }
            if(j==2){
                for(j=0;j<2;j++)
                    t[j].count--;
            }
        }
    }

    for(int j=0;j<2;j++){
        int c=0;
        for(int i=0;i<A.size();i++)
            if(A[i]==t[j].val)
                c++;
        if(c>q)
            return t[j].val;
    }
    return -1;
}

// VERY IMPORTANT AND GOOD QSN!!!!
