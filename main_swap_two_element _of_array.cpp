#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[6]={22,32,31,36,55,68};
	int temp=0;
	cout<<"element of array:"<<" ";
	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"swap the array 3 index to 4 index:"<<endl;
	temp=arr[3];
	arr[3]=arr[4];
	arr[4]=temp;
		cout<<"After swap element of array:"<<" ";

	for(int i=0;i<6;i++){
		cout<<arr[i]<<" ";
	}
	
}
