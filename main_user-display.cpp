#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[5];
	cout<<"enter 5 number";
	for(int i=0; i<5;++i){
		cin>>arr[i];
	}
	cout<<"array numbers are: ";
	for(int i=0; i<5; ++i){
		cout<<arr[i]<<" ";
	}
	return 0;
}
