#include <stdio.h>#include <iostream>using namespace std;int main(){	// int d = 1, b = 2; swap(d,b);	// cout<<d<<" " <<b<<endl;	int x=0,n,minl;	int a[100];	cin >> n;	for (int j=0; j<n; j++)		cin >> a[j];	for (int l=0; l<n; l++){		for(int k=l+1; k<n; k++){			if ( a[l] > a[k] ){				swap(a[l],a[k]);				// x=a[k];				// a[k]=a[l];				// a[l]=x;			}		}	}for (int j=0; j<n; j++){cout << a[j] << " " ;}cout<<endl;}