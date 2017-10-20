int Solution::isNumber(const string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0;
    if(A.length()<=0)
        return 0;
    while(i<A.length() && A[i]==' ')
        i++;
    if(A[i]=='+' || A[i]=='-')
        i++;
    if(i>=A.length())
        return 0;
    while(i<A.length()){
        if(A[i]>=48 && A[i]<=57)
            i++;
        else
            break;
    }
    if(i>=A.length())
        return 1;
    else if(A[i]=='.'){
        i++;
        if(i>=A.length() || A[i]<48 || A[i]>57)
            return 0;
        while(i<A.length()){
            if(A[i]>=48 && A[i]<=57)
                i++;
            else
                break;
        }
    }
    if(i>=A.length())
        return 1;
    else if(A[i]=='e'){
        i++;
        if(i>=A.length())
            return 0;
        if(A[i]=='+' || A[i]=='-')
            i++;
        if(i>=A.length() || A[i]<48 || A[i]>57)
            return 0;
        while(i<A.length()){
            if(A[i]>=48 && A[i]<=57)
                i++;
            else
                break;
        }
    }
    while(i<A.length() && A[i]==' ')
        i++;
    if(i<A.length())
        return 0;
    return 1;
}

//just a simulation qsn with many many constraints. 
