int Solution::reverse(int A) {

    int sign = 0;
    if(A<0)
        sign = 1;

    A = abs(A);
    int B=0;
    while(A>0){
        if(B>INT_MAX/10 || B==INT_MAX/10 && A%10>=INT_MAX%10)
            return 0;
        B = B*10 + (A%10);
        A /= 10;
    }
    if(sign == 1){
        B = -1*B;
    }

    return B;
}

//i went wrong in that 10th line of this code.
//how B*10>INT_MAX is different from B>INT_MAX/10 is important!!
