void genCombos(string A,vector<string> &vs,string &s,int l,vector<string>ip){
    if(l==A.length()){
        vs.push_back(s);
    }
    else{
        for(int i=0;i<ip[A[l]-'0'].length();i++){
            s.push_back(ip[A[l]-'0'][i]);
            genCombos(A,vs,s,l+1,ip);
            s.erase(l);
        }
    }
}

vector<string> Solution::letterCombinations(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string> vs;
    string s="";
    vector<string> ip = {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    genCombos(A,vs,s,0,ip);
    return vs;
}

//i had already done this qsn in my past on leetcode and i had got runtime error or something.
//i did the exact same thing now on IB and it was marked correct in efficiency as well.
