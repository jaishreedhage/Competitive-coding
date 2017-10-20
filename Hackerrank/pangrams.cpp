#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char word[1000];
    gets(word);
    int ar[26],s,tots=26;
    for(int i=0;i<26;i++)
        ar[i]=-1;
    for(int i=0;i<strlen(word);i++){
        if(isalpha(word[i])){
            if(isupper(word[i]))
                s = int(word[i])-65;
            else
                s=int(word[i])-97;
            if(ar[s]==-1){
                ar[s]=0;
                tots--;
            }
         
        }
        else 
            continue;
    }
    if(tots==0)
        cout<<"pangram";
    else
        cout<<"not pangram";
    return 0;
}
