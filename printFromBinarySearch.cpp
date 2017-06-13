#include<iostream>
#include<algorithm>
using namespace std;

int print(int a[],int low, int high, int searchNum){// binary Search, now better time complexity nlogn
	
	int flag = 0;
	while(low <= high){

	int mid = low +(high-low)/2;

	if(a[mid] == searchNum){

		flag  = 1;
	}
	 if(searchNum < a[mid]){

		high = mid -1;
	}
	else{
		low = mid +1;
	
	}
	}
	
	return flag;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++)
		cin>>a[i];
	
	int sum;
	cin>>sum;
	int result;
	sort(a,a+n);
	for(int i = 0; i<n; i++){
			 int result  =  print(a,0,n-1,sum -a[i]);	
		if(result == 1)
		cout<<a[i]<<" "<<(sum-a[i])<<" "<<"\n";
	}

}
