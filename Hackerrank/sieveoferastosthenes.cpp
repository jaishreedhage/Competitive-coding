#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

void sieveguy(int n){
	bool prime[n+1];
	memset(prime, true, sizeof(prime));

	for(int i=2;i<=sqrt(n);i++){
		if(prime[i]==true){
			for(int j=2*i;j<=n;j=j+i)
				prime[j]=false;
		}
	}
	for(int i=2;i<=n;i++)
		if(prime[i]==true)
			cout<<i<<" ";
}

int main(){
	cout<<"Enter a number"<<endl;
	int n;
	cin>>n;
	sieveguy(n);
	return 0;
}