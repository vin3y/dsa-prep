//
// Created by Vinay Sankar on 01/04/25.
//


//steps of insertion sort
//
//there are two pointers for this sort
//
//first pointer i goes from 0 to n-1
//
//and the second pointer j will be assigned to current ith location
//
//from which the j loop checks whether it is >0 and if the element is less than it predecessor and swap them till it
//is placed to its location(while loop) it goes till j reached >0


#include<iostream>
#include<vector>



void insertionSort(std::vector<int> &arr){

  for(int i=0;i<arr.size();i++){ //first loop
    int j = i; //assigned to the current location
    while(j>0 && arr[j-1] > arr[j]){  //loop goes around when j-1 > j and its greater than 0
      std::swap(arr[j], arr[j-1]);
      j--; //decrement
    }
  }
}