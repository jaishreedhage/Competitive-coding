string Solution::convert(string A, int B) {

    if(B<2)
        return A;
    int i=0,k=0,j=i;
    string soln=A;
    while(i<B){
        j=i;
        int val = 2*(B-1);
        int l=0;
        while(j<A.length()){
            if((i!=0 && i!=B-1) && l%2==0)
                val = 2*(B-1-i);
            else if((i!=0 && i!=B-1) && l%2!=0)
                val = 2*(i);
            soln[k++] = A[j];
            j = j+val;
            l++;
        }
        i++;
    }
    return soln;
}

//qsn was easy. but my solution doesnt seem to be like very appealing, although i got the right answer.
//in actual solution what they did was to maintain 'B' strings. So each row ka string was put in the respective string and later concatenated.
//but they used lot of place :P
