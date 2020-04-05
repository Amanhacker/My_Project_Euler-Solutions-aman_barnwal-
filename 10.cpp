        //Project Euler Problem 10 - Sum of all Prime number
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define MAX_SIZE 2000000

void findSum(ll n){
    
    bool prime[MAX_SIZE];
    memset(prime, true, sizeof(prime));
    
    for(ll p=2; p*p<MAX_SIZE; p++){
        if(prime[p] == true){
            
            for(ll i=p*p; i<MAX_SIZE; i=i+p){
                prime[i] = false;            }
        }    
    }
    //ll w = 2*pow(10,6);
    ll sum = 0;
    for(ll i=2; i<MAX_SIZE; i++){
        if(i >= n)   break;
        if(prime[i] == true)    sum += i;
    }
    cout<<sum<<endl;
}

int main(){
    ll n;
    cin>>n;
     
    findSum(n);
    
    return 0;
}