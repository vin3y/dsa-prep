//
// Created by Vinay Sankar on 21/04/25.
//


//bubble sort with recursion
//we have only one set of loop inside this which goes from to len-2
//we compare if arr[i] > arr[i+1] if the we swap till the greatest element will be placed at teh end
//we call the same function but with n-1
//and our base consition will be n!=1

#include<iostream>

void recursiveBubbleSort(std::vector<int> &arr, int n){
  if(n==1){ return; }
  for(int i=0;i<=n-2;i++){
    if(arr[i]>arr[i+1]){
      std::swap(arr[i], arr[i+1]);
    }
  }

  recursiveBubbleSort(arr, n-1);

}
