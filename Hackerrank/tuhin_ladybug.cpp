#include <iostream>
#include <vector>
#include <cstdlib>
#include <map>
#include <cstring>

using namespace std;

int count_char(vector<char>& v,char a){
     int s = (int)v.size();
     int count = 0;
     for(int i = 0;i < s;i++){
                  if(v[i] == a){
                           count++;
                  }
     }
     return count;
}

int main( ){

 int n = 0;
 int g;
 cin>>g;

 for(int  k = 0;k < g;k++){
              cin>>n;
              vector<char>b(n);
              int arr[26];
              memset(arr,0,sizeof(arr));
              //map<char,int>mymap;
              for(int j = 0;j < n;j++){
                           cin>>b[j];
                           //Trick for generating count of alphabets

              }

              for(int i = 0;i < n;i++){
                       arr[(int)b[i] - 65]++;
              }

              char uds = '_';
              int count_uds  = count_char(b,uds);
              int count = 0;


              int length = (int)b.size();

              if(count_uds == length){
                   cout<<"YES"<<endl;
              }

              else if(count_uds == 0 && length == 1){
                   cout<<"NO"<<endl;
              }

              else if(count_uds == 0){
               cout<<"HELLLO"<<endl;
               for(int i = 0;i < n;i++){
                     if(arr[(int)b[i] - 65] < 2){
                             cout<<"NO"<<endl;
                             break;
                     }
                     else{
                          if(i == 0){
                                if(b[i] == b[i+1]){
                                       i = i+2;
                                       count++;
                                       //arr[(int)b[i] - 65]--;
                                }
                          }
                          else if(i == n-1){
                                if(b[i] == b[i-1]){
                                       count++;
                                       //arr[(int)b[i] - 65]--;
                                }
                          }
                          else{
                               if((b[i-1] == b[i] || b[i] == b[i+1]) && arr[(int)b[i] - 65] > 0){
                                     count++;
                                     //arr[(int)b[i] - 65]--;
                               }
                          }

                     }
               }

               if(count == n-1){
                       cout<<"YES"<<endl;
               }
               else{
                       cout<<"NO"<<endl;
               }
             }

             else if(count_uds >= 1){

                     cout<<"INSIDE THIS ELSE IF"<<endl;
                     int flag = 0;
                     for(int i = 0;i <= 25;i++){
                                 //cout<<"Inside For Loop"<<endl;
                                 if(arr[i] < 2 && arr[i]!= 0){
                                       flag = 1;
                                       break;
                                 }
                     }

                     if(flag == 1){
                           cout<<"NO"<<endl;
                     }
                     else{
                           cout<<"YES"<<endl;
                     }
             }

             else{
                   cout<<"YES"<<endl;
             }

 }

 return 0;
}