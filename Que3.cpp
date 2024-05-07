// Given an integer array and an integer k where k<=size of array, We need to return the kth smallest element of the array.
#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[]={5,8,9,6,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<"Enter k : ";
    cin>>k;
    for(int i=0;i<k;i++){
        int min=INT_MAX;
        int idx=0;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                idx=j;
            }
        }
        swap(arr[i],arr[idx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[k];
    return 0;
}