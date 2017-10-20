#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int ispalin(string s){
    for(int i=0;i<s.length()/2;i++){
        if(s[i]!=s[s.length()-1-i])
            return 0;
    }
    return 1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Q,flag;
    string str;
    cin>>Q;
    while(Q>0){
        cin>>str;
        flag=0;
        for(int i=0;i<str.length()/2;i++){
            if(str[i]!=str[str.length()-1-i]){
                if(str.length()%2==0){
                    if(ispalin(str.substr(i+1,str.length()-(2*i)-1))==1)
                        cout<<i<<endl;
                    else
                        cout<<str.length()-1-i<<endl;
                    flag=1;
                    break;
                }
            
            
                else{
                    if(i+1 == str.length()-i){
                        if(str[i]==str[i+1])
                            cout<<str.length()-1-i<<endl;
                        else
                            cout<<i<<endl;
                        flag=1;
                        break;
                    }
                    else if(i+1 != str.length()-i){
                        
                        if(ispalin(str.substr(i+1,str.length()-(2*i)-1))==1)
                            cout<<i<<endl;
                        else
                            cout<<str.length()-1-i<<endl;
                        flag=1;
                        break;
                        
                        
                    }
                }
            }
        }
        if(flag==0)
            cout<<-1<<endl;
        Q--;
    }
    return 0;
}
