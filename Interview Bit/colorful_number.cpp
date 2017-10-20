int Solution::colorful(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    string s = to_string(A);
    unordered_map<int,int>ump;
    for(int i=1;i<=s.length();i++){
        for(int j=0;j<=s.length()-i;j++){
            int t=stoi(s.substr(j,i));
            int p=1;
            while(t>0){
                p*=t%10;
                t/=10;
            }
            if(ump.find(p)!=ump.end())
                return 0;
            ump[p]++;
        }
    }
    return 1;
}

//qsn was lame, i was struggling because this soln uses O(n sq). So i was thinking maybe theres an easier approach
