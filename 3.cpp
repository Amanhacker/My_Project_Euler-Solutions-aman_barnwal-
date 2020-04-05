        //Project Euler Problem 3 - Largest Prime Factor
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    ll n;
    cin>>n;
    ll max;
    
    if(n%2 == 0){
        while(n%2 == 0){
            max = 2;
            n = n/2;
        }
    }

    for(ll i=3; i<=sqrt(n); i=i+2){
        while(n%i == 0){
           max = i;
           n = n/i;
        }
    }
    if(n>2) max = n;
    
    cout<<max<<endl;

    return 0;
}