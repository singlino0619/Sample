#include <stdio.h>#include <iostream>using namespace std;int main(){	int x,v;	int i,l;	cin >> i;	int a[100];	for (int j=0; j<i; j++)		cin >> a[j];	for (int k=0; k<i; k++){		v = a[k];	        l = k - 1;	        while ( l >= 0 && a[l] > v ){		  a[l+1] = a[l];		  l--;		}		a[l+1] = v;}for (int j=0; j<i; j++){cout << a[j] << " " ;}}