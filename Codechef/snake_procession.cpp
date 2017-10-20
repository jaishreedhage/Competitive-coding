#include <iostream>
#include <string>

using namespace std;

int main(){
    int R;
    cin>>R;
    while(R>0){
        int l;
        string s;
        cin>>l>>s;
        int i=0,h=0,t,flag=0;
        while(s[i]=='.') i++;
        for(;i<s.length();i++){
            if(s[i]=='H' && h==0){
                h=1;
            }
            else if(s[i]=='T' && h==1)
                h=0;
            else if(s[i]=='.')
                continue;
            else if(s[i]=='T' && h==0){
                flag=1;
                break;
            }
            else if(s[i]=='H' && h==1){
                flag=1;
                break;
            }
        }
        if(h==1 || flag==1)
            cout<<"Invalid"<<endl;
        else
            cout<<"Valid"<<endl;
        R--;
    }
    return 0;
}
