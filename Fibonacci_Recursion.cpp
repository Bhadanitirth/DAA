#include <bits/stdc++.h>
#include<time.h>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	return fib(n - 1) + fib(n - 2);
}

int main()
{
	int n;
	cin>>n;
	clock_t t;
    t=clock();
    double time =((double)t)/CLOCKS_PER_SEC;
    cout<<time<<endl;
	cout << n << "th Fibonacci Number: " << fib(n);
	return 0;
}


