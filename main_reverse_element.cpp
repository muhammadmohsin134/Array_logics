#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[10],i;
	cout<<"enter 10 element of array";
	for(i=0;i<10;i++){
		cin>>arr[i];
	}
	cout<<"orignal array element are :";
	for(i=0;i<10;i++){
		cout<<arr[i]<<" "<<endl;
	}
	cout<<"reverse array element are: ";
	for(i=(10-1);i>0;i--){
		cout<<arr[i]<<" "<<endl;
		
	}
	
}
