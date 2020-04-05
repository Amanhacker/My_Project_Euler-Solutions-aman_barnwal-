        //Project Euler Problem 2 - Even Fibonacci series
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int dp[10000];
    int sum = 2;
    dp[0] = 1;
    dp[1] = 2;

    for(int i=2; i<n; i++){
        dp[i] = dp[i-1] + dp[i-2];
        //cout<<dp[i]<<" ";
       
        if(dp[i]>n){
            i = n;
            break;
        }
        if(dp[i]%2 == 0)    sum += dp[i];
    }
    cout<<sum<<endl;
    return 0;
}