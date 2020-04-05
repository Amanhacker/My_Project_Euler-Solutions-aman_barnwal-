        //Project Euler Problem 6 - 
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    cin>>n;
    ll res;
    
    res = n*(n+1)*((3*n*n)-n-2);
    
    cout<<res/12<<endl;
    return 0;
}