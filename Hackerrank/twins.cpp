#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int isprime(int n){
	for(int i = 2; i<=sqrt(n) ; i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m,count=0;
    cin>>n>>m; 
	vector<int> primes;
	for(int i = n; i<= m; i++){
		if(isprime(i))
			primes.push_back(i);
	}
	for(int i = 0;i<primes.size(); i++){
		if(primes[i]==1)
			continue;
		for(int j = i+1 ; j<primes.size(); j++){
			if(abs(primes[i] - primes[j])>2)
				break;
			else if(abs(primes[i] - primes[j])==2){
				count++;
				break;
				//cout<<primes[i]<<" "<<primes[j]<<endl;
			}
		}
	}
	cout<<count;
    return 0;
}
