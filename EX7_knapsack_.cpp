#include <bits/stdc++.h> 
using namespace std; 
int max(int a, int b) { return (a > b) ? a : b; } 
int knapSack(int W, int wt[], int val[], int n) 
{ 
 
	if (n == 0 || W == 0) 
		return 0; 
	if (wt[n - 1] > W) 
		return knapSack(W, wt, val, n - 1); 
	else
		return max( 
			val[n - 1] 
				+ knapSack(W - wt[n - 1], wt, val, n - 1), 
			knapSack(W, wt, val, n - 1)); 
} 

int main() 
{ clock_t t;
t=clock();
int a,b;
cin>>a>>b;
int profit[10];
int weight[10];
for(int i=0;i<a;i++)
{
    cin>>profit[i];
}for(int i=0;i<b;i++)
{
    cin>>weight[i];
}
	int W;
	cin>>W;
	int n = sizeof(profit) / sizeof(profit[0]); 
	cout << knapSack(W, weight, profit, n)<<endl; 
		double time =((double)t)/CLOCKS_PER_SEC;
        cout<<time<<endl;
	return 0; 
} 
