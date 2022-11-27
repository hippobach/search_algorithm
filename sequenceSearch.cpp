#include<bits/stdc++.h>
using namespace std;
template<class T>
T *search(T *L, T *R, T x) {
	for(T *p = L; p < R; p++) 
	 if(*p == x) return p;
	return NULL;
}
int main() {
	int a[]={235, 56, -4, 76, 9}, n=5;
	int *p = search(a, a+n, 9);
	if(!p) cout << "Not Found!";
	else cout << "Found at " << p-a;
	return 0;
}

