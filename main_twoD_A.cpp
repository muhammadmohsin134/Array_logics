#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int arr[3][2]={{34,5},{4,51},{14,35}};
	for(int i=0;i<3;++i){
		for(int j=0;j<2;++j) {
			cout<<"arr["<<i<<"]["<<j<<"]="<<arr[i][j]<<endl;
		}         
	}
	return 0;
}
