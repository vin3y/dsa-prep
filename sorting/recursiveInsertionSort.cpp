//similar to insertion sort
//first we pass i=0
//the loop checks i ==n(size of array)
//we have another variable j =i we check whether j>0 and arr[j] < arr[j-1] if then we swap them and j--
//and for the next loop we call the same function i+1


#include<iostream>

void recursiveInsertionSort(std::vector<int> &arr, int i, int n){
  if(i==n){return;}
  int j = i;
  while(j>0 && arr[j-1]>arr[j]){
    std::swap(arr[j], arr[j-1]);
    j--;
  }
  recursiveInsertionSort(arr, i+1, n);
}