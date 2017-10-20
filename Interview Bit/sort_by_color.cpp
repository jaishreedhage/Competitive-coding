void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int red=0,white=0,blue=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0)
            red++;
        else if(A[i]==1)
            white++;
        else
            blue++;
    }
    int k=0;
    for(int i=0;i<red;i++){
        A[k++]=0;
    }
    for(int i=0;i<white;i++){
        A[k++]=1;
    }
    for(int i=0;i<blue;i++){
        A[k++]=2;
    }
}

//the soln i did was easy..but a better solution what they have done is like
//they swapped 0 to the last place 0 was seen and likewise with 2..awesome solution
