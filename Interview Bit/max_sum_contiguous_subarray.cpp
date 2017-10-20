int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int max = INT_MIN,s=0;
    for(int i=0;i<A.size();i++){
        s+=A[i];
        max = s>max?s:max;
        if(s<0)
            s=0;

    }
    return max;
}

//this algorithm has 3 different techniques
//Brute force -----------> O(n^2)
//Divide and conquer ----> O(n log n)
//Kadane's Algorithm ----> O(n)

//Algorithm given above is Kadane's algorithm. But I should know the divide and conquer method too.
//Search a file named max_sum_contiguous_subarray_divide_and_conquer for the entire implementation.
//Search a file named kadane_algo for printing sub-array along with the sum

//When working with kadane's algorithm, make sure of the case when all elements are negative.
/*for(int i=0;i<A.size();i++){
    if(s+A[i]<0)
        s=0;
    else
        s+=A[i];
    max = s>max?s:max;
}
return max;
*/   //this doesnt work for cases when all elements are negative, and gives answer as 0.
