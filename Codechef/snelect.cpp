#include<iostream>

using namespace std;

int main(){
    int Q;
    cin>>Q;
    while(Q>0){
        string str;
        cin>>str;
        int s=0,m=0;
        for(int i=0;i<str.length();i++){
            if(str[i]=='s')
                s++;
            else{
                if(i-1>=0 && str[i-1]=='s'){
                    str.erase(i-1,1);
                    s--;
                    m++;
                    i--;
                    //cout<<str<<" "<<str[i]<<" "<<str[i-1]<<" "<<s<<" "<<m<<endl;
                }
                else if(i+1<str.length() && str[i+1]=='s'){
                    str.erase(i+1,1);
                    //s--;
                    m++;
                    //cout<<str<<" "<<str[i]<<" "<<str[i+1]<<" "<<s<<" "<<m<<endl;
                }
                else
                    m++;
            }
        }
        cout<<s<<" "<<m<<endl;
        if(s>m)
            cout<<"snakes"<<endl;
        else if(m>s)
            cout<<"mongooses"<<endl;
        else
            cout<<"tie"<<endl;
        Q--;
    }
    return 0;
}
