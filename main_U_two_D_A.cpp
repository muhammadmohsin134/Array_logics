#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[2][3];
	cout<<"Enter 6 numbers:"<<endl;
	for(int i=0;i<2;++i){
		for(int j=0;j<3;++j){
			cin>>arr[i][j];
		}
	}
	cout<<"the numbers are:"<<endl;
		for(int i=0;i<2;++i){
		   for(int j=0;j<3;++j){
			cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<endl;
		}
	}
	return 0;
}
