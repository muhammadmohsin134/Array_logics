#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int size , count=0;
	cout<<"enter size of array";
	cin>>size;
	int arr[size];

	for(int i=0;i<size;i++){
    cout<<"enter number for array";
    cin>>arr[i];
	}
	for(int j=0;j<size;j++){
		cout<<arr[j] <<endl;
		count++;
	}
	cout<<"the length of array is:"<<count;
}
