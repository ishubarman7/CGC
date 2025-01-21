#include<iostream>
using namespace std;

struct Item{
    int profit,weight;
};


void knapsack(int capacity, int n, Item item[])
{
    int dp[n+1][capacity+1];
    for(int i=0 ; i<=n ; i++)
    {
        for (int j=0 ; j<=capacity ; j++)
        {




            if(i==0 || j==0)
                dp[i][j] = 0;
            else if(item[i-1].weight <= j)
                dp[i][j] = max(dp[i-1][j],item[i-1].profit + dp[i-1][j-item[i-1].weight]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }  //written in the manual
    cout <<"max profit: "<<dp[n][capacity]<<endl;
    int w = capacity;
    cout<<"selected items for knopsack"<<endl;
    for(int i=n ; i>0 && w>0 ; i--)
    {
        if(dp[i][w] != dp[i-1][w])
        {
            // cout<<"item "<<i<<" with weight "<<item[i-1].weight<<" and profit "<<item[i-1].profit<<endl;
            // w = w - item[i-1].weight;
            cout<<"item "<<i<<" ";
            w = w - item[i-1].weight;
        }
    }
    cout<<endl;
};

int main()
{
   int n,capacity;
   cout<<"Enter the number of items: ";
   cin>>n;
   Item item[n];

    cout<<"Enter the profit and weight of each item: "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cout<<"Enter the profit of item "<<i+1<<": ";
        cin>>item[i].profit;
        cout<<"Enter the weight of item "<<i+1<<": ";
        cin>>item[i].weight;
    }
    cout<<"Enter the capacity of knapsack: ";
    cin>>capacity;
    knapsack(capacity,n,item);
    return 0;
}