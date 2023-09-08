#include<iostream>
using namespace std;

int dollar(int k, int n, int w){
    int cost=0;
    for (int i = 1; i <=w; i++)
    {
        cost+=i*k;
    }
    if (cost>n)
    {
        return cost-n;
    }
    return 0;
}

int main(){
    int k, n, w;
    cin>>k>>n>>w;
    if(1<=k){
        cout<<dollar(k,n,w);
    }
    return 0;
}