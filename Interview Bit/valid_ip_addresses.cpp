void ipaddress(string A,string s,vector<string> &v,int p,double dot){
    if(p>=A.length() && dot<=-1){
        v.push_back(s);
        return;
    }
    int val=0,j;
    for(int i=p;i<A.length();i++){
        val = val*10 + A[i]-'0';
        if(val>255)
            return;
        s.push_back(A[i]);
        for(j=s.length()-1;j>=0 && s[j]!='.';j--);
        j++;
        if(s[j]=='0'){
            if(j+1<s.length() && s[j]=='0')
                return;
        }
        int x = A.length()-i-1;
        if(dot==0){
            if(i<A.length()-1)
                continue;
            else
               ipaddress(A,s,v,i+1,dot-1);
        }
        else if(dot>0 && (x/dot)<=3.0){
            s.push_back('.');
            ipaddress(A,s,v,i+1,dot-1);
        }
        else if(i==A.length())
            ipaddress(A,s,v,i,dot-1);
        else
            continue;
        s.erase(s.length()-1);
    }
}

vector<string> Solution::restoreIpAddresses(string A) {
    vector<string> v;
    string s = "";
    ipaddress(A,s,v,0,3.0);
    return v;
}

//simulation qsn with a lot of constraints.
