//
// Created by Vinay Sankar on 02/04/25.
//


//Given two integers a and b, the task is to compute their LCM and GCD and return an array containing their LCM and GCD.
//
//Examples:
//
//Input: a = 5 , b = 10
//Output: [10, 5]
//Explanation: LCM of 5 and 10 is 10, while their GCD is 5.


//approach for gcd or HCF part we take euclideans hcf rule
//
//HCF(a,b)=HCF(b,amodb)
//
//where:
//
//    a and b are two positive integers.
//
//    a mod b is the remainder when aa is divided by b.
//
//The process repeats until bb becomes zero. At that point, aa contains the HCF.
//
//48,12 => step 1 : 18, 48%12 => HCF(18, 12)
//step 2 => 12, 18%12 => HCF(12, 6)
//step 3=> 6, 12%6 => here b becomes zero => 6,0 => which make 6 hcf
//
//
//approad for lcm if gcd is found
//
//
//LCM(a,b) = abs(axb) / HCF(a,b)


#include<iostrem>
#include<vector>


class Solution {
public:
    vector<int> lcmAndGcd(int a, int b) {
        std::vector<int> res{}; // resultant vector
        res.push_back((std::abs(a*b))/gcdCal(a, b)); //lcm using abs and hcf funcion call and placed to vector
        res.push_back(gcdCal(a, b)); //hcf
        return res;
    }

    int gcdCal(int a, int b){
        while(b!=0){   //check if b is not zero
            int temp = b; // swap
            b = a%b; // placing b with a remainder b
            a = temp; // placing original b value with a
        }
        return a;
    }
};


