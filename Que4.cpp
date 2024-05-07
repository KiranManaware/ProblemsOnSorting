// Find the minimum operations required to sort the array in increasing order. In one operation , you can set each occurrence of one element to 0.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={5,8,9,6,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     int j=i;
    //     while(j>=1 && arr[j]<arr[j-1]){
    //         swap(arr[j],arr[j-1]);
    //         j--;
    //     }
    // }   
    for(int i=0;i<n-1;i++){
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
    for(int a:arr){
        cout<<a<<" ";
    } 
    return 0;
}