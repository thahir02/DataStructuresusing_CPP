#include <iostream>
#include <algorithm> // used  for swap fuction
using namespace std;
// selectionSort fuction
void selection(int arr[],int n) {
    int i,j,min_index;
    for (i=0;i<n-1;i++){
        min_index=i;
        for (j=i+1;j<n;j++){
            if (arr[j]<arr[min_index]) {
                  min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}
// main function 
int main(){
    int n;
    std::cout<<"Enter the size of array : ";
    std::cin>>n;
    std::cout<<"Enter the elements into array : ";
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    std::cout<<endl;
    std::cout<<"The unsorted array is: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    selection(arr,n);
    std::cout << "\nThe sorted array is: ";
    for (int i=0;i<n;i++) {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<endl;

    return 0;
}
