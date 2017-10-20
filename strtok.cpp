#include<iostream>
#include <cstring>

using namespace std;

int main(){
    char str[50] = "Hello my name is jaishree :)";
    const char tok[2] = " ";
    char *tokens[100];
    int k=0;
    char *s = strtok(str,tok);
    while(s!=NULL){
        tokens[k++] = s;
        s = strtok(NULL,tok);
    }
    for(int i=0;i<k;i++)
        cout<<tokens[i]<<endl;
    return 1;
}
