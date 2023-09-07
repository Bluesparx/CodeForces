#include<iostream>
using namespace std;
int main(){
    int weigh;
    cin>>weigh;
    if(weigh==2){
        cout<<"NO";
        return 0;
    }
    if (weigh%2==0)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}