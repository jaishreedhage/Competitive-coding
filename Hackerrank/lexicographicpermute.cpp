#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int tots,n;

void permute(string s){
    
    for(int i = s.length()-1;i>0;i--){
        if(s[i]>s[i-1]){
            char min = 'z';
            int pos = -1;;
            for(int j=i;j<s.length();j++){
                if(s[j]<min && s[j]>s[i-1]){
                    min=s[j];
                    pos=j;
                }
            }
            char temp = s[pos];
            s[pos]=s[i-1];
            s[i-1]=temp;
            string t = s.substr(i);
            sort(t.begin(),t.end());
            string b = s.substr(0,i);
            s = b+t;
            tots++;
            if(tots==n){
                cout<<s<<endl;
                break;
            }
            else{
                permute(s);
                break;
            }
        }
        
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;//= "abcdefghijlkm";
    int Q;
    cin>>Q;
    while(Q>0){
        s = "abc";
        cin>>n;
        tots=1;
        if(n==1)
            cout<<s<<endl;
        else{
            permute(s);
        }
        Q--;
    }
    return 0;
}
