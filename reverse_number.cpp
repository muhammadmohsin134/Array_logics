#include <iostream>
using namespace std;

int main() {
	int n,r =0,num;
	cout<<"wnter an integer";
	cin>>n;
	while(n!=0){
		num=n%10;
		r=r*10+num;
		n=n/10;
		
	}
	cout<<"revesre number is:"<<r;

}
