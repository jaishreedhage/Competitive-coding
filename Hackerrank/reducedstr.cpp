#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int flag;
    string word;
    cin>>word;
    for(int i=0;i<100;i++){
        flag=0;
        for(int j=0;j<word.length()-1;j++){
            if(word[j]==word[j+1]){
                word.erase(j,2);
                flag=1;
                break;
            }
        }
        if(flag==0 || word.length()<=0)
            break;
    }
    if(word.length()>0)
        cout<<word<<endl;
    else
        cout<<"Empty String"<<endl;
    return 0;
}
