#include<bits/stdc++.h>
using namespace std;
struct Item{
    int profit, weight;
};
 bool compare(Item a, Item b)
{
    return(double)a.profit/a.weight > (double) b.profit/b.weight;
}
double fraction(int w , Item item[], int n)
{
    sort(item, item + n , compare);

    double maxvalue = 0.0;
    for (int i = 0; i < n; i++){
        if(w>=item[i].weight) {
            maxvalue += item[i].profit;
            w -= item[i].weight;
        }
        else{
            maxvalue += item[i].profit * ((double)w / (double)item[i].weight);
            break;
        }
    }
    return maxvalue;  
}
int main(){
    int n,w;
    cout<<"enter the no. of items and knapsack capacity :";
    cin>>n>>w;
    Item item[n];
    cout<<"Enter the profit and weight of each items :"<<endl;
    for(int i = 0 ; i<n; i++){
        cin>> item[i].profit>>item[i].weight;
    }
        double result = fraction(w, item, n);
        cout<<"profit : "<<result<<endl;
        return 0;
    // for(int i = 0 ; i<n; i++)
    // {
    //     cin>> item[i].profit;
    // }
    // cout<<"Enter the weight of each items :"<<endl;
    //  for(int i = 0 ; i<n; i++)
    // {
    //     cin>> item[i].weight;
    // }

    //  for(int i = 0 ; i<n; i++)
    // {
    //     // cin>> item[i].profit>>item[i].weight;
    //     double result = fraction(w, item, n);
    //     cout<<"profit : "<<result<<endl;
    //     return 0;
    // }

}