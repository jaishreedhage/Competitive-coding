#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
// #include <unordered_map>

using namespace std;


int main(){
    int n,a=0,b=0;
    int k;
    cin >> n >> k;
    string number;
    cin >> number;
    int count=0;
    for(int i=0;i<number.length()/2;i++){
        if(number[i]!=number[number.length()-1-i]){
            if(number[i]=='9' || number[number.length()-1-i]=='9'){
                count++;
                a++;
            }
            else{
                count+=2;
                b++;
            }
        }
    }
    if(n==1 && k>0)
        cout<<9;
    else if(k==0)
        cout<<number;
    else if(n<=k){
        for(int i=0;i<number.length()/2;i++){
            number[i]='9';
            number[number.length()-1-i]='9';            
        }
        if(k%2==1)
            number[n/2]='9';
        cout<<number;
    }
    else if(count==0 && k%2==0){
        for(int i=0;i<number.length()/2;i++){
            if(number[i]!='9' && number[number.length()-1-i]!='9'){
                number[i]='9';
                number[number.length()-1-i]='9';
                count+=2;
                if(count==k)
                    break;
            }
            
        } 
        cout<<number;
    }
    else if(count==0 && k%2==1 && n%2==0)
        cout<<-1;
    else if(count==0 && k%2==1 && n%2==1 && number[n/2]!=9){
        number[n/2]='9';
        count++;
        if(count<k){
            for(int i=0;i<number.length()/2;i++){
                if(number[i]!='9' && number[number.length()-1-i]!='9'){
                    number[i]='9';
                    number[number.length()-1-i]='9';
                    count+=2;
                    if(count==k)
                        break;
                }

            } 
        }
        cout<<number;
        
    }
    else if(count==0 && k%2==1 && n%2==1 && number[n/2]==9)
        cout<<-1;
    else if(count<=k){
        for(int i=0;i<number.length()/2;i++){
            if(number[i]!=number[number.length()-1-i]){
                number[i]='9';
                number[number.length()-1-i]='9';
            }
        } 
        if(k-count>0 && (k-count)%2==0){
            for(int i=0;i<number.length()/2;i++){
                if(number[i]!='9' && number[number.length()-1-i]!='9'){
                    number[i]='9';
                    number[number.length()-1-i]='9';
                    count+=2;
                    if(count==k)
                        break;
                }
            
            }
        }
        cout<<number;
    }
    else{
        if(a+b<=k){
            count=0;
            for(int i=0;i<number.length()/2;i++){
                if(number[i]!=number[number.length()-1-i]){
                    if(number[i]>number[number.length()-1-i])
                        number[number.length()-1-i] = number[i];
                    else
                        number[i]=number[number.length()-1-i];
                    count++;
                }
            }
            
            if((k-count)%2==0){
                for(int i=0;i<number.length()/2;i++){
                    if(number[i]!='9' && number[number.length()-1-i]!='9'){
                        number[i]='9';
                        number[number.length()-1-i]='9';
                        count+=2;
                        if(count==k)
                            break;
                    }

                }
                cout<<number;
            }
            
             
            else if((k-count%2==1) && number[n/2]!=9 && n%2==1){
                number[n/2]='9';
                count++;
                if(count<k){
                    for(int i=0;i<number.length()/2;i++){
                        if(number[i]!='9' && number[number.length()-1-i]!='9'){
                            number[i]='9';
                            number[number.length()-1-i]='9';
                            count+=2;
                            if(count==k)
                                break;
                        }

                    } 
                }
                cout<<number;
            }
            else if(count==0 && k%2==1 && n%2==1 && number[n/2]==9)
                cout<<-1;
            else if((k-count%2==1)&& n%2==0)
                cout<<-1;
            
        }
        else
            cout<<-1;
    }
    
    return 0;
}
