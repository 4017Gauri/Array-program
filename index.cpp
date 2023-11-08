#include<iostream>
using namespace std;

int main(){
	int arr[10], i;
	//reading the array element from end user
	for(i=0; i<10; i++){
		cout<<"\n Enter the array element\n";
		cin>>arr[i];
	}
	
	//printing the array elemnt on console 
	cout<<"\n Array element are as follows:\n";
	for(i=0; i<10; i++){
		cout<<arr[i] <<endl;
	}
	return 0;
}
