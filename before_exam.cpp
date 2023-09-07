#include<iostream>
using namespace std;
int main(){
    int d, sumTime;
    int max=0,min=0;
    cin>>d>>sumTime;
    int minTime[30], maxTime[30];

    for (int i = 0; i < d; i++)
    {
        cin>>minTime[i]>>maxTime[i];
        cout<<endl;
        max+=maxTime[i];
        min+=minTime[i];
    }
    
    if (sumTime<=max && sumTime>=min)
    {
        cout<<"YES\n";
        int extraTime= sumTime-min;
        for (int i = 0; i < d; i++){
            if (extraTime >= maxTime[i] - minTime[i]) {
                cout << maxTime[i] << " ";
                extraTime -= maxTime[i] - minTime[i];
            } 
            else {
                cout << minTime[i] + extraTime << " ";
                extraTime = 0;
        }
        }
        return 0;
    }

    cout<<"NO";

    return 0;
}