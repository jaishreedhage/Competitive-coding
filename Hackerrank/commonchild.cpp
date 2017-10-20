#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// int checkme(string s,string b){
//     int max = -1,val; 
//     for(int i=0;i<b.length();i++){
//         for(int j=0;j<s.length();j++){
//             if(s[i]==b[j]){
//                 // cout<<i<<" "<<j<<endl;
//                 for(int k=1;k<b.length() && k<s.length();k++){
//                     if(s[i+k]==b[j+k]){
//                         val = k;
//                         if(max<val)
//                             max=val;
//                     }
//                     else 
//                         break;
//                 }
//             }
//         }
//     }
//     return max+1;
// }


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s,b;
    cin>>s>>b;
    int ar1[26]={0},ar2[26]={0};
    for(int i=0;i<s.length();i++)
        ar1[(int)s[i]-65]++;
    for(int i=0;i<b.length();i++)
        ar2[(int)b[i]-65]++;
    vector<char>ar;
    for(int i=0;i<26;i++){
        if(ar1[i]>0 && ar2[i]>0 ){
            ar.push_back((char)(i+65));
        }
    }
    
    string temp1="",temp2="";
    for(int i=0;i<s.length();i++){
        for(int j=0;j<ar.size();j++){
            if(ar[j]==s[i])
                temp1+=s[i];
            else if(ar[j]>s[i])
                break;
        }
    }
    for(int i=0;i<b.length();i++){
        for(int j=0;j<ar.size();j++){
            if(ar[j]==b[i])
                temp2+=b[i];
            else if(ar[j]>b[i])
                break;
        }
    }
    int val;
    if(temp1.length()>=temp2.length()){
        val = checkme(temp1,temp2);
    }
    else{
        val = checkme(temp2,temp1);
    }
    cout<<temp1<<" "<<temp2<<" "<<temp1.length()<<" "<<temp2.length()<<endl;
    cout<<val;
    return 0;
}
