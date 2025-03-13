#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[10]={1,1,1,1,0,0,0,1,0,0},c=0;
	int i=0;
	cout<<"array element are:";
	for(i=0; i<10; ++i){
			cout<<"arr["<<i<<"]"<<arr[i]<<endl;
	}
		for(int i=0; i<10; ++i){
			if(arr[i]==0){
				c=c+1;
			}
			

}	cout<<"zero in array is:"<<c;

}
