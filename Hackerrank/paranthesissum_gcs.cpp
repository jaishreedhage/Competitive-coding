#include <iostream>
#include <cstring>
#include<cmath>
#include <stack>

using namespace std;

void bringout(char ar1[],int a,int b,int n,int k){
	if(a==b && a==n){
		int flag=0;
		// stack<char>ar;
		// for(int i=0;i<b;i++){
		// 	if(ar1[i]=='(')
		// 		ar.push(ar1[i]);
		// 	else if(ar1[i]==')' && ar.size()>0 && ar.top()=='(')
		// 		ar.pop();
		// 	else if(ar1[i]==')' && ar.size()<=0){
		// 		flag=1;
		// 		break;
		// 	}
		// }
		// if(flag==0 && ar.size()<=0){
			for(int i=0;i<2*n;i++)
				cout<<ar1[i]<<" ";
			cout<<endl;
		// }
	}
	else{
		if(a<n){
			ar1[k] = '(';
			bringout(ar1,a+1,b,n,k+1);
		}
		if(b<a){
			ar1[k] = ')';
			bringout(ar1,a,b+1,n,k+1);
		}
	}
}

int main(){
	int n;
	cin>>n;
	char ar[2*n];
	bringout(ar,0,0,n,0);
	return 0;
}
