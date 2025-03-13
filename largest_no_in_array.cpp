#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[9]={22,14,34,65,78,3,98,12,32};
	int max;
	cout<<"enter array element";
	for(int i=0;i<9;i++){
		cout<<arr[i]<<endl;
	}
	max=arr[0];
	for(int i=0;i<9;i++){
		if(arr[i]>max){
		max=arr[i];
	}		
	}

	cout<<"te largest number in array is:"<<max;
	return 0;
}
