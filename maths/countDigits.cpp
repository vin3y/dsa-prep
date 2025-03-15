//Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder).
// Return the total number of such digits.
//
//A digit d of n divides n evenly if the remainder when n is divided by d is 0 (n % d == 0).
//Digits of n should be checked individually. If a digit is 0, it should be ignored because division by 0 is undefined.

//Input: n = 2446
//Output: 1
//Explanation: Here among 2, 4, 6 only 2 divides 2446 evenly while 4 and 6 do not.

#include<iostream>
#include<set>


class Solution {
public :
    int evenlyDivides(int n) {
        std::set<int> splittedSet; //set for storing splitted set of number
    int count{0};

        if (n == 0) return 0;
        while (n != 0) {
            int rem = n % 10;
            splittedSet.insert(rem);
            n /= 10;
        }

        auto it = splittedSet.begin();
    while (it != splittedSet.end()) {
        int rem = n%*it;
        if (rem == 0) {
            count++;
        }
    }



        return count;
    }
};


int main() {

    Solution s;
    int num{2446};
    std::cout << s.evenlyDivides(num);
    return 0;
}
