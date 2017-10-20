int Solution::sqrt(int A) {

    long l = 1,h=A;
    long mid;
    while(l<=h){
        mid = (l+h)/2;
        if(mid*mid==A){
            return mid;
        }
        else if(mid*mid<A){
            l=mid+1;
        }
        else
            h=mid-1;
    }
    mid = l<h?l:h;
    return mid;
}

//here note that variables are in long type to prevent overflow
