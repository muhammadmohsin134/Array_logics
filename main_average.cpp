#include <iostream>
using namespace std;

int main() {
    int n[5]={4,65,76,8,3}; 
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum =sum+n[i];
    }
    cout<<"sum is="<<sum<<endl;
    cout << "Average: " <<sum / 5 << endl;
    return 0;
}
