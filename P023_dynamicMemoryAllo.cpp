#include <iostream>
using namespace std;
int main() {
    int size;
    int *arr;
    cout<<"Enter the size of aaray"<<endl;
    cin>>size;
    arr = new int[size];
    cout<<"Enter the elements of aaray"<<endl;
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    cout<<"You have entered: "<<endl;
    for(int i=0; i<size;i++){
        cout<<arr[i]<<endl;
    }
    delete[] arr;
    return 0;
}
