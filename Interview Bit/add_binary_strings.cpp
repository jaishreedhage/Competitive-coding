string Solution::addBinary(string A, string B) {

    string sum = "";
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    int i=0,carry = 0,a,b;
    while(i<A.length() && i<B.length()){
        a = A[i]-'0';
        b = B[i]-'0';
        // cout<<a<<" "<<b;
        if(carry == 0){
            sum.push_back((char)((a ^ b)+'0'));
            carry = a & b;
        }
        else{
            sum.push_back((char)(!(a ^ b)+ '0'));
            carry = a | b;
        }
        i++;
    }
    int j = i;
    if(i<A.length()){
        while(j<A.length()){
            a = A[j]-'0';

            sum.push_back((char)((a ^ carry)+'0'));
            carry = a & carry;

            j++;
        }
        if(carry!=0)
            sum.push_back((char)(carry + '0'));
    }
    else{
        while(j<B.length()){
            b = B[j]-'0';
            sum.push_back((char)((b ^ carry)+'0'));
            carry = b & carry;


            j++;
        }
        if(carry!=0)
            sum.push_back((char)(carry + '0'));
    }
    reverse(sum.begin(),sum.end());
    return sum;
}

//this solution holds generally. I took a long time to code this as I was not familiar with some syntax.
//stoi ? atoi ?  '5' - '0' ? 5 + '0'
//easy way to add bits -> sum = (a+b+carry)%2
                    //  carry = (a+b+carry)/2      AWESOME TECHNIQUE
