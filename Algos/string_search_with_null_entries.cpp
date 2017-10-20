#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    string s[] = {"at","","","","ball","","","car","","","dad","",""};
    string word;
    cin>>word;
    int l=0,h=12,flag=0;
    while(l<h){
        cout<<l<<" "<<h<<endl;
        int mid = (l+h)/2;
        if(s[mid]==""){
            int lr = mid-1,hr = mid+1;
            cout<<"in here"<<endl;
            while(true){
                if(lr<l || hr>h){
                    mid = -1;
                    break;
                }
                if(s[lr]!=""){
                    mid = lr;
                    break;
                }
                else if(s[hr]!=""){
                    mid = hr;
                    break;
                }
                else{
                    lr--;
                    mid++;
                }
            }
            cout<<"Mid is "<<mid<<endl;
        }
        if(mid==-1)
            break;
        if(s[mid]!=""){
            if(s[mid]==word){
                cout<<"Found at "<<mid<<endl;
                flag=1;
                break;
            }
            else if(s[mid].compare(word)>0)
                h = mid-1;
            else
                l = mid+1;
        }
    }
    if(flag==0)
        cout<<"Not found"<<endl;
    return 1;
}

//Very good binary search additional improvement qsn
