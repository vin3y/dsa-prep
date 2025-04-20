//
// Created by Vinay Sankar on 21/04/25.
//


//step for merge sort
//consist of two steps, first we have two elemets of an array low and high which is 0 and n-1
//the we find mid which is low +mid/2, and then we call the same function recursively from 0-mid-1 and mid+1, high
//we check for the base condition low<high, and we call the function till we are with a single element
// now we call the second fiunction merge which takes in the left half and right half
//we take a temp array, and two pointer i and j which are assigned to i=low, j=mid+1
//basically we have two arrays whihc first index are 0, and mid+1
//we loop both and i and j, and the smallest one is added and incremented  till i<=mid and j<=high
//then after if anything is left in the array we just put it into the temp array
// and then we put the temp array back to original array


#include<iostream>

void merge(std::vector<int> &arr, int low, int mid, int high){
  int left = low;
  std::vector<int>temp;
  int right = mid+1;

  while(left<=mid && right<=high){

    if(arr[left]<=arr[right]){
      temp.push_back(arr[left]);
      left++;
     }else{
       temp.push_back(arr[right]);;
       right++;
     }
  }

  while(left<=mid){
    temp.push_back(arr[left]);
    left++;
  }

  while(right<=high){
    temp.push_back(arr[right]);
    right++;
  }

  for(int i=low;i<=high;i++){
    arr[i]=temp[i-low];
  }
}


void mergeSort(std::vector<int> &arr, int low, int high){
  if(low>=high) return;
  int mid = (low+high)/2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid+1, high);
  merge(arr, low, mid, high);
}