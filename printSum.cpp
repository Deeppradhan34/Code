#include<iostream>
using namespace std;

void print(int a[], int n, int sum){// brute force
	
	for(int i = 0; i < n; i++){// Time Complexity is O(n2), not good.
		for(int j = i+1; j <n; j++){
			int sumIntegers  = a[i]+a[j];
			if(sumIntegers == sum){
				cout<<a[i]<<" "<<a[j]<<"\n";
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	
	int sum;
	cin>>sum;
	print(a,n,sum);	
}
