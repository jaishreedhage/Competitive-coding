#include <iostream>
#include <string>
#include <vector>

using namespace std;

void compute_lps(string pattern,vector <int> &lps){
    lps[0] = 0;
    int len = 0,i=1;
    while(i<pattern.length()){
        if(pattern[len] == pattern[i]){
            len++;
            lps[i] = len;
            i++;
        }
        else{
            if(len>0){
                len = lps[len-1];
            }
            else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

int main(){

    string text,pattern;
    cout<<"Enter a text and pattern"<<endl;
    cin>>text>>pattern;

    vector <int> lps(pattern.length());
    
    compute_lps(pattern,lps);
    for(int i=0;i<pattern.length();i++)
        cout<<lps[i]<<" ";
    cout<<endl;

    int i=0,j=0;
    while(i<text.length()){
        if(text[i] == pattern[j]){
            i++;
            j++;
        }
        if(j==pattern.length()){
            cout<<"Pattern found at "<<i-j<<endl;
            j = lps[j-1];
        }
        else if (pattern[j] != text[i]){
            if(j>0){
                j = lps[j-1];
            }
            else{
                i++;
            }
        }
    }
    return 0;
}
