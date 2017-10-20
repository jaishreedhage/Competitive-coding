int Solution::trailingZeroes(int A) {
    int s = 0;
    for(int i=5;i<=A;i=i*5)
        s+=floor(A/i);
    return s;
}

//ctci qsn
