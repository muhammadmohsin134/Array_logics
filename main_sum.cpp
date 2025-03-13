#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[]={65 ,45 ,34, 63};
	int sum=0;
	for(int i=0;i<4; ++i){
		sum=sum+arr[i];
	}
	cout<<"sum of digits in the array is:"<<sum;
	
	
}
