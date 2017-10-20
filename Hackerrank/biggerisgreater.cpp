#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int Q;
    cin>>Q;
    while(Q>0){
        string s,b,t,stb;
        cin>>s;
        int flag=0;
        for(int i=s.length()-1;i>0;i--){
            if((int)s[i-1]<(int)s[i]){
                flag=1;
                char mch = 'z'+1;

                int pos = s.length();
                for(int j=s.length()-1;j>=i;j--){
                    if((int)s[j]<(int)mch && (int)s[j]>(int)s[i-1]){
                        mch = s[j];
                        pos = j;
                    }
                }
                // cout<<mch<<"  "<<pos<<endl;
                char temp = mch;
                s[pos] = s[i-1];
                s[i-1] = mch;
                sort(s.begin()+i,s.end());
                break;
            }
        }
        if(flag==0)
            cout<<"no answer"<<endl;
        else
            cout<<s<<endl;
        Q--;
    }
    return 0;
}
