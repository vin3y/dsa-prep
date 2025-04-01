//
// Created by Vinay Sankar on 01/04/25.
//


//steps for selection sort:
//
//two pointer apporach
//
//first pointer i will loop from 0 to n-2, there wil be a index called minimum which keeps track of the minimum
//element index which will be intialized to i every step
//
//the second pointer j will be move from i+1 to n-1, and what it does is it check whether j element is smaller than min index
//if it is smaller than min index value new index will be assigned as j
//
//and at the last if the j goes out of bounds, the new mini will be swapped to the ith index



#include<iostream>
#include<vector>


void selectionSort(std::vector<int> &vec){

  int vecSize = vec.size(); //calculating the vector input size
  for(int i =0;i<vecSize-1;i++){  //first pointer i looping from 0 to second last element
    int mini =i; //mini index
    for(int j=i+1;j<vecSize;j++){ // we assume mini to have the index of smallest value in the array
      if(vec[j]<vec[mini]){ // we check for the smallest value in the vector and assign its index to  mini
        mini = j;
      }
    }
    if (mini != i) {  // Avoid unnecessary swap
      std::swap(vec[mini], vec[i]);
    }
  }


}