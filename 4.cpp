        //Project Euler Problem 4 - Largest Palindrome
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main(){
    
    int n, m;
    cin>>n>>m;
    int res;
    set<ll> z;
    
    for(int i=n; i>=1; i--){
        for(int j=m; j>=1; j--){
            res = i*j;

            string w = to_string(res);
            string q = w;
            reverse(w.begin(), w.end());
            if(q==w)  z.insert(res);
        }
    }

    set<ll> :: reverse_iterator it;
    it = z.rbegin();
    cout<<*it<<endl;

    return 0;
}