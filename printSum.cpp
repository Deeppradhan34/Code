#include<iostream>
using namespace std;
void PrintSmallestValue(int pairs[], int n, int sum);
void getPairsOfSum(int a[], int n, int sum){// brute force
	int pairs[n];
	int count = 0;
	for(int i = 0; i < n; i++){// Time Complexity is O(n2), not good.
		for(int j = i+1; j <n; j++){
			int sumIntegers  = a[i]+a[j];
			if(sumIntegers == sum){
			    pairs[count++] = a[i];
			    pairs[count++] =a[j];
				
			}
		}
	}
	
	PrintSmallestValue(pairs,count, sum);
}
void PrintSmallestValue(int pairs[], int n, int sum){
	int min = pairs[0];
	for(int i = 1; i <n; i++){
		if(pairs[i] < min)
			min = pairs[i];
   }
   cout<<min<<" "<<(sum-min);
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	
	int sum;
	cin>>sum;
	getPairsOfSum(a,n,sum);	
}
