// #include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
 

int merge(int arr[], int temp[], int left, int mid, int right)
{
  int i, j, k;
  int inv_count = 0;
 
  i = left; 
  j = mid;  
  k = left;
  while ((i <= mid - 1) && (j <= right))
  {
    if (arr[i] <= arr[j])
    {
      temp[k++] = arr[i++];
    }
    else
    {
      temp[k++] = arr[j++];
      printf("** ");
      inv_count = inv_count + (mid - i);
    }
  }
 
  while (i <= mid - 1)
    temp[k++] = arr[i++];
 
  while (j <= right)
    temp[k++] = arr[j++];
 
  for (i=left; i <= right; i++)
    arr[i] = temp[i];
 
  return inv_count;
}

int _mergeSort(int arr[], int temp[], int left, int right)
{
  int mid, inv_count = 0;
  if (right > left)
  {
    mid = (right + left)/2;
 
    inv_count  = _mergeSort(arr, temp, left, mid);
    inv_count += _mergeSort(arr, temp, mid+1, right);
 
    inv_count += merge(arr, temp, left, mid+1, right);
  }

  printf("%d %d %d\n",inv_count,left,right);
  return inv_count;
}

int mergeSort(int arr[], int array_size)
{
    int *temp = (int *)malloc(sizeof(int)*array_size);
    return _mergeSort(arr, temp, 0, array_size - 1);
}


 

 
int main(int argv, char** args)
{
  int Q;
  scanf("%d",&Q);
  int n;
  while(Q>0){
      scanf("%d",&n);
      int ar[n],i;
      for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
      printf("\n%d\n",mergeSort(ar,n));
      Q--;
  }
  return 0;
}