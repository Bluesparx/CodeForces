#include<iostream>
using namespace std;

int domino(int n, int m){
    int dom = (m*n)/2;
    cout<<dom;
    return 0;    
}

int main(){
    int n, m;
    cin>>n>>m;
    domino(n,m);
    return 0;
}