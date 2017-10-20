vector<string> Solution::prettyJSON(string A) {
    vector<string> v;
    string s="";
    int b = 0;
    for(int i=0;i<A.length();i++){
        if(A[i]=='{' || A[i]=='['){
            if(s.length()>0)
                v.push_back(s);
            s="";
            for(int j=0;j<b;j++)
                s.push_back('\t');
            s.push_back(A[i]);
            v.push_back(s);
            s="";
            b++;
        }
        else if(A[i]=='}' || A[i]==']'){
            if(s.length()>0)
                v.push_back(s);
            s="";
            b--;
            for(int j=0;j<b;j++)
                s.push_back('\t');
            s.push_back(A[i]);
            if(i+1<A.length() && A[i+1]==','){
                s.push_back(A[i+1]);
                i++;
            }
            v.push_back(s);
            s="";
        }
        else if(A[i]==','){
            s.push_back(A[i]);
            v.push_back(s);
            s="";
        }
        else{
            if(i-1>=0 && (A[i-1]=='{' || A[i-1]=='[' || A[i-1]==','  || A[i-1]=='}' || A[i-1]==']')){
                for(int j=0;j<b;j++)
                    s.push_back('\t');
            }
            s.push_back(A[i]);
        }
    }
    return v;
}

//simulation qsn only. If in interview, interviewer asks do you json ka syntax and then tells you to code this -> learn json syntax
//also i like the way, they stored '\t' as a character and just did a push_back
