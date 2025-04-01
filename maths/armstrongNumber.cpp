//
// Created by Vinay Sankar on 02/04/25.
//


//Problem statement
//
//You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.
//
//An Armstrong number is a number (with 'k' digits)
//such that the sum of its digits raised to 'kth' power is equal to
//the number itself. For example, 371 is an Armstrong number because 3^3 + 7^3 + 1^3 = 371.
//
//Sample Input 1 :
//1
//
//Sample Output 1 :
//true
//
//Explanation of Sample Input 1 :
//1 is an Armstrong number as, 1^1 = 1.


//approach
//armstrong number depends of upon the number of digits in the input
//eg : if 103 => 3 digits => 1^3 + 0^3 + 3^3
//if 2234 => 4 digits => .....
//
//
//after finding the number of digits digits we extract them each one and exponentially raise it accdoring to the input digits
//and add them to a variable
//
//and atlast return true if it is equal to the original number else return false


#include <cmath>
#include<iostream>

bool checkArmstrong(int n){
    int sumCube = 0, original_n = n;  // sum varible and variable for refernce atlast
    std::string det = std::to_string(n);
    int detSize = det.length(); // convert them to string and find the length


    while(n!=0){
        int extract = n%10; //we etract the digits from the input
        sumCube += static_cast<int>(std::pow(extract, detSize)); // raise them to the power accrording to the lenth of the input
        n/=10; // reduce it
    }

    //comparison 
    return original_n == sumCube;
}

