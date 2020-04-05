#include <iostream>
#include<bits/stl_algo.h>
using namespace std;

#define MAX_SIZE 100007
typedef long long int ll;


int findingAllDivisor(int w){
    set<ll> s;
    s.clear();
    for(ll i=1; i<=sqrt(w); i++){
        if(w%i == 0){
            if(i == w/i)    s.insert(i);
            else{
                s.insert(i);
                s.insert(w/i);
            }
        }
    }
    return s.size();
}

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

	int z;
	cin>>z;

	for(ll i=1; i<MAX_SIZE; i++){
		ll w = i*(i+1) / 2;

		if(findingAllDivisor(w) == z+1){
			cout<<w<<endl;
			i = MAX_SIZE;
			break;
		}
	}
	return 0;
}
