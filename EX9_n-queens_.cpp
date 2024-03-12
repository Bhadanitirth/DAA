#include <bits/stdc++.h>
#define MAX 10
using namespace std;

int arr[MAX], no;
void nQueens(int k, int n);
bool canPlace(int k, int i);
void display(int n);
void nQueens(int k, int n){
	for (int i = 1;i <= n;i++){
		if (canPlace(k, i)){
			arr[k] = i;
			if (k == n)
				display(n);
			else
				nQueens(k + 1, n);
		}
	}
}
bool canPlace(int k, int i){
	for (int j = 1;j <= k - 1;j++){
		if (arr[j] == i || 
			(abs(arr[j] - i) == abs(j - k)))
		return false;
	}
	return true;
}
void display(int n){
	cout << "Arrangement No. " << ++no<<endl;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (arr[i] != j)
				cout << "\t_";
			else
				cout << "\tQ";
		}
		cout << endl;
	}
}
int main(){
    clock_t t;
    t=clock();
	int n;
	cin>>n;
	nQueens(1, n); 
	double time =((double)t)/CLOCKS_PER_SEC;
    cout<<time<<endl;
	return 0;
}
