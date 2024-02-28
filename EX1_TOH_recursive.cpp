#include<time.h>
#include <bits/stdc++.h> 
using namespace std; 

void towerOfHanoi(int n, char from_rod, char to_rod, 
				char aux_rod) 
{ 
	if (n == 0) { 
		return; 
	} 
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod); 
	cout << "Move disk " << n << " from rod " << from_rod 
		<< " to rod " << to_rod << endl; 
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod); 
} 
int main() 
{ 
	int N;
	cin>>N;
		clock_t t;
    t=clock();
    double time =((double)t)/CLOCKS_PER_SEC;
    cout<<time<<endl;
	towerOfHanoi(N, 'A', 'C', 'B'); 
	return 0; 
} 
