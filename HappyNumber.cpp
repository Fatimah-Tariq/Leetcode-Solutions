#include<iostream>
using namespace std;

class Solution {
public:
    int numSquareSum(int n)
    {
        int squareSum = 0;
        while (n) {
            squareSum += (n % 10) * (n % 10);
            n /= 10;
        }
        return squareSum;
    }
    //JUST LIKE WE DID THE LINKED LIST CYCLE DETECTION TASK. HERE WHEN WE DETECT CYCLE, WE RETURN FALSE.
    bool isHappy(int n) {
        int slow, fast;
        // initialize slow and fast by n
        slow = fast = n;
        do {
            // move slow number by one iteration
            slow = numSquareSum(slow);
            // move fast number by two iteration
            fast = numSquareSum(numSquareSum(fast));
        } while (slow != fast);
        // if both number meet at 1, then return true
        return (slow == 1);
    }
};

int main(){
    Solution obj;
    int n = 2;
    cout<< obj.isHappy(n);
    return 0;
}