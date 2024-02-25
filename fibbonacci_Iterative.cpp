#include <bits/stdc++.h>
#include<time.h>
using namespace std;

int fib(int n)
{
	int a = 0, b = 1, c, i;
	if (n == 0)
		return a;
	for (i = 2; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}


int main()
{
	int n;
	cin>>n;
    clock_t t;
    t=clock();
    double time =((double)t)/CLOCKS_PER_SEC;
    cout<<time<<endl;
	cout << fib(n);
	return 0;
}


