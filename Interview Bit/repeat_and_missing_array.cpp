vector<int> Solution::repeatedNumber(const vector<int> &V) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long long sum = 0;
    long long squareSum = 0;
    long long temp;
    for (int i = 0; i < V.size(); i++) {
        temp = V[i];
        sum += temp;
        sum -= (i + 1);
        squareSum += (temp * temp);
        squareSum -= ((long long)(i + 1) * (long long)(i + 1));
    }
    // sum = A - B
    // squareSum = A^2 - B^2 = (A - B)(A + B)
    // squareSum / sum = A + B
    squareSum /= sum;

    // Now we have A + B and A - B. Lets figure out A and B now.
    int A = (int) ((sum + squareSum) / 2);
    int B = squareSum - A;

    vector<int> ret;
    ret.push_back(A);
    ret.push_back(B);
    return ret;
}

//remeber you could even find product upto n numbers in some questions like this. Such techniques only work when 1 to n numbers are given.
//also what i learnt from this question was YOU NEED TO TYPECAST INT TO UNSIGNED LONG LONG WHEN BOTH ARE USED. Else errors might occur.
