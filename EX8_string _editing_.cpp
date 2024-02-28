#include <bits/stdc++.h>
using namespace std;

int lcs(string X, string Y, int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m - 1] == Y[n - 1])
		return 1 + lcs(X, Y, m - 1, n - 1);
	else
		return max(lcs(X, Y, m, n - 1),
				lcs(X, Y, m - 1, n));
}

int main()
{clock_t t;
t=clock();
	string S1;
	string S2;
	cin>>S1>>S2;
	int m = S1.size();
	int n = S2.size();

	cout << "Length of LCS is " << lcs(S1, S2, m, n)<<endl;
	double time =((double)t)/CLOCKS_PER_SEC;
        cout<<time<<endl;
	return 0;
}
