#include <iostream>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int temp,n;
	cout<<"enter array size";
	cin>>n;
	int arr[n];
		cout<<"enter array element: ";
	for(int i=0;i<n;i++){
	
	    cin>>arr[i];
	    }
		cout<<endl<<"the array element: ";
	for(int i=0;i<n;i++)
	    cout<<arr[i]<<" "; 
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++)
			{
				if(arr[i]>arr[j]){
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}   
		cout<<"after sorting array is:";
			for(int i=0;i<n;i++){
				cout<<arr[i]<<" ";
			}

	    
	

}
