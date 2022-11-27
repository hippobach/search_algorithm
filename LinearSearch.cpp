#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[], int N, int x) {
	for(int i=0; i<N; i++) {
		if(a[i] == x) {
			return i;
		}
	}
	return -1;
}

int main() {
	int a[] = { 2, 3, 4, 10, 40 };
	int x = 11;
	int N = sizeof(a) / sizeof(a[0]);
	int result = linearSearch(a, N, x);
	(result == -1) ? cout << "Khong ton tai x" : cout << "Ton tai x";
	return 0;
}

