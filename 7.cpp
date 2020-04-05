        //Project Euler Problem 7 - 100001st Prime number
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define MAX_SIZE 1000007

int main(){
    int n;
    cin>>n;
     
	bool prime[MAX_SIZE];
	memset(prime, true, sizeof(prime));

	for(int p=2; p*p<MAX_SIZE; p++){
		if(prime[p]==true){

			for(int i=p*p; i<MAX_SIZE; i=i+p){
				prime[i] = false;
			}
		}
	}

	int sum = 0;
	for(int i=2; i<MAX_SIZE; i++){
		if(prime[i] == true){
			sum++;
		}	
		if(sum==n){
		    cout<<i<<endl;
		    break;
		}	
	}
    
    return 0;
}