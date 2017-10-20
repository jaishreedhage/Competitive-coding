#include <iostream>
#include <string>

using namespace std;

void genCombos(string s,int l,int h){
    if(l==h+1){
        cout<<s<<endl;
        return;
    }
    if(s[l]=='?'){
        s[l] = '0';
        genCombos(s,l+1,h);
        s[l] = '1';
        genCombos(s,l+1,h);
    }
    else
        genCombos(s,l+1,h);
}

int main(){
    int Q;
    cin>>Q;
    while(Q>0){
        string s;
        cin>>s;
        genCombos(s,0,s.length()-1);
        Q--;
    }
    return 1;
}
//    https://knaidu.gitbooks.io/problem-solving/content/strings/combinations_of_strings_with.html
