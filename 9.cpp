        //Project Euler Problem 9 - Special Pythagorus Triplet
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define MAX_SIZE 2000000

int main(){
    ll n;
    cin>>n;
    
    for(int i=1; i<n/3; i++){
        
        for(int j=i+1; j<n/2; j++){
            int k = n-i-j;
            if(i*i + j*j == k*k){
                cout<<i*j*k;
                break;
            }
        }
    }    
    cout<<endl;
    
    return 0;
}