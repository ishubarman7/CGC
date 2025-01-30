#include<bits/stdc++.h>
using namespace std;

#define INF 1000000000;
int matrixchaine(int dims[], int n) 
{
    int dp[100][100];
    for(int i = 1;i<n;i++)
    {
        dp[i][i] = 0;
    }

    for(int len = 2; len < n; len++)
    {
        for(int i = 1; i < n-len+1; i++)
        {
            int j = i + len - 1;


            dp[i][j] = INF;
            for(int k = i; k < j; k++)
            {
                int cost = dp[i][k] + dp[k+1][j] + dims[i-1]*dims[k]*dims[j];
                if(cost<dp[i][j])
                {
                    dp[i][j] = cost;
                }
            }
        }

        return dp[1][n-1];
    }
}

int main()
{
   int n;
    cout<<"Enter the no. of matrices : ";
    cin>>n;
    int dims[n+1];
    cout<<"Enter the dimensions of matrices : "<<n+1<<" : ";
    for(int i = 0; i<=n; i++)
    {
        cin>>dims[i];
    }
    cout<<"Minimum number of multiplications is : "<<matrixchaine(dims, n+1)<<endl;
    return 0;
}