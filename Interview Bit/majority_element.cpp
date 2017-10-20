int Solution::majorityElement(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int ele=0,count =0 ;
    for(int i=0;i<A.size();i++){
        if(count==0){
            count++;
            ele = A[i];
        }
        else if(count>0 && ele==A[i])
            count++;
        else
            count--;
    }
    return ele;
}

//same as n/k times repeated element
