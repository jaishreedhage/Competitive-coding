#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    cout<<"ENTER "<<endl;
    cin>>Q;
    cout<<"ENTER SYRING"<<endl;
    string s,b;
    while(Q>0){
        cin>>s>>b;
        string sbt=s+b;
        int k=-1,i=0,j=0;
        while(i<s.length() && j<b.length()){
            if(s[i]<b[j]){
                sbt[++k] = s[i];
                i++;
            }
            else {
                sbt[++k] =b[j];
                j++;
            }
        }
        while(i<s.length())
            sbt[++k] = s[i++];
        while(j<b.length())
            sbt[++k] = b[j++];
        //sbt[++k] = '\0';
        //puts(sbt);
        cout<<sbt<<endl;
        Q--;
    }
    return 0;
}
