#include <iostream>
#include<string>

using namespace std;

void swap(char &c,char &s){
    char temp = c;
    c = s;
    s = temp;
}

void permute(string s,int l,int h){
    if(l==h){
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<=h;i++){
        swap(s[l],s[i]);
        permute(s,l+1,h);
        if(s[l]>=97)
            s[l] -= 32;
        else    s[l] += 32;
        permute(s,l+1,h);
        swap(s[l],s[i]);
    }
}

int main(){
    int Q;
    cin>>Q;
    while(Q>0){
        string s;
        cin>>s;
        permute(s,0,s.length()-1);
        Q--;
    }
    return 0;
}
