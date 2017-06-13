#include<iostream>
using namespace std;

int search(int a[], int low, int high, int searchNum){
	// create hashmap for n elements and search if the data(sum - a[i]) is present in the hashtable or not.
	//fetching the data O(1) but the space complexity will be more.
}
int main(){
	
	int a[] = {1,2,3,4,5};
	int count =  sizeof(a)/sizeof(int);
	int searNum;
	cin>>searNum;
	int flag;
    flag =  search(a,0,count-1,searNum);
	if(flag)
		cout<<"found";
	else
		cout<<"not found";	
}
