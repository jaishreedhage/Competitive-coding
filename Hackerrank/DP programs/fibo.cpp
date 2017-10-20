#include <iostream>

using namespace std;

int f[200];

int fibo(int n){
	if(f[n]==0){
		f[n] = fibo(n-1)+fibo(n-2);
	}
	return f[n];
}

int main(){
	int n;
	cin>>n;
	f[0]=0;
	f[1]=1;
	cout<<fibo(n);
}