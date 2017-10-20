#include<iostream>

using namespace std;

void swap(int *x,int*y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void minHeapify(int arr[],int len,int i){
    int l = 2*i+1, r = 2*i+2, smallest = i;
    if(l<len && arr[l]<arr[smallest])
        smallest = l;
    if(r<len && arr[r]<arr[smallest])
        smallest = r;
    if(smallest!=i){
        swap(&arr[smallest],&arr[i]);
        minHeapify(arr,len,smallest);
    }
}

void constructMinHeap(int arr[],int len){
    int i = len/2;
    while(i>=0){
        minHeapify(arr,len,i);
        i--;
    }
}

int extractMin(int arr[],int &len){
    int val = arr[0];
    arr[0] = arr[len-1];
    minHeapify(arr,len,0);
    len--;
    return val;
}

int main(){
    int len;
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++)
        cin>>arr[i];
    constructMinHeap(arr,len);
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    while(len>0){
        cout<<extractMin(arr,len)<<" ";
    }
    return 0;
}
