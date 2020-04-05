        //Project Euler Problem 1
#include<bits/stdc++.h>
using namespace std;

int findMultiples(int n){
    int sum = 0;
    set<int> w;

    int i = 1, k1 = 3, k2 = 5;
    while(k1<n || k2<n){
        if(k1<n)    w.insert(k1);
        if(k2<n)    w.insert(k2);
        i++;
        k1 = i*3;
        k2 = i*5;
    }

    set<int> :: iterator it;
    for(it=w.begin(); it!=w.end(); it++){
        sum += (*it);
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    cout<<findMultiples(n);
    return 0;
}