int Solution::maxArea(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i,j,area=0,p1,p2, temp = 0;
    for(i = 0; i<A.size(); i++)
    {
        for(j = A.size()-1;j>=i;j--)
        {
            if(A[j] >= A[i])
            {
                p1 = j;
                break;
            }
        }
        for(j = 0;j<=i;j++)
        {
            if(A[j] >= A[i])
            {
                p2 = j;
                break;
            }
        }
        temp = p1 - p2;
        area = max(area, temp*A[i]);
    }
    return area;
}

//good qsn
