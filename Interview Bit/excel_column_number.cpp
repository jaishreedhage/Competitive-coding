int Solution::titleToNumber(string A) {

    int number = 0,k=0;
    for(int i=A.length()-1;i>=0;i--){
        number += pow(26,k++)*(A[i]-'A'+1);
    }
    return number;
}

//AWESOME QUESTION!!
