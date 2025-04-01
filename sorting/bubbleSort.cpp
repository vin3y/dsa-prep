//
// Created by Vinay Sankar on 01/04/25.
//



//steps for bubble sort
//
//this is a two pointer approach we sort from right to left
//
//first pointer i will be looping from length-1 to 0 reverse order
//second pointer j will loop from 0 to i-1
//
//a series of comparsion takes place we check if arr[j] > arr[j+1] if yes we swap it and move on will i-1
//which means the the greatest element will be sorted at the last and the move  i-1


#include<iostream>
#include<vector>


void bubbleSort(std::vector<int> &arr){

  int vecSize = arr.size();

  for(int i=vecSize-1;i>=0;i--){
    for(int j=0;j<=i-1;j++){
      if(arr[j]>arr[j+1]){
        std::swap(arr[j], arr[j+1]);
      }
    }
  }
}