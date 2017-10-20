string Solution::multiply(string A, string B) {
    if(A.size()==0 || B.size()==0)
        return "0";
    vector<int>v(A.size()+B.size(),0);
    int carry = 0;
    int k = 0, l=0;
    for(int i=A.size()-1;i>=0;i--){
        int x = A[i]-'0';
        l = 0;
        carry = 0;
        for(int j=B.size()-1;j>=0;j--){
            int y = B[j]-'0';
            int z = (x*y)+carry+v[k+l];
            carry = z/10;
            v[k+l] = z%10;
            l++;
        }
        if(carry>0)
            v[k+l] = carry;
        k++;
    }
    int i=v.size()-1;
    while(i>=0 && v[i]==0)  i--;
    if(i==-1)
        return "0";
    string s;
    for(int j=0;j<=i;j++)
        s.push_back(v[j]+'0');
    reverse(s.begin(),s.end());
    return s;
}

//A VERY IMP SIMULATION QSN. LOT OF CASES TO CONSIDER
