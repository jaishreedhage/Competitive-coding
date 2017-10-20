vector<int> Solution::maxone(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int lp=0,rp=0,count0=0,maxcount = 0,maxpos = -1;
    while(rp<A.size()){
        if(count0 <= B){
            if(A[rp]==0)
                count0++;
            rp++;
        }
        if(count0>B){
            if(A[lp]==0)
                count0--;
            lp++;
        }
        if(rp-lp > maxcount){
            maxcount = rp-lp;
            maxpos = lp;
        }

    }
    vector<int> bounds;
    for(int i=maxpos;i<maxpos+maxcount;i++)
        bounds.push_back(i);
    return bounds;
}

//very very good qsn. I actually feel bad that i didnt get this myself. :(
