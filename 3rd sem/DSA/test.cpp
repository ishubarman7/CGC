#include <bits/stdc++.h>
using namespace std;

int main ()
{
    
    int n, m, profit[n], wt[n], profitperwt[n];
    cout<<"Number of objects and the maximumm weight allowed: ";
    cin>>n>>m;

    cout<<"enter the profit of each object: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>profit[i];

    }

    cout<<"enter the wieght of each object: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>wt[i];

    }

    // Calculating the Profit /WT ratio

    for(int i = 0; i < n; i++)
    {
        profitperwt[i] = profit[i] / wt[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout<<profitperwt[i]<<endl;

    }

    
}
