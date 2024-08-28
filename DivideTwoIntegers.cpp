#include<iostream>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if(dividend==INT32_MIN && divisor==-1) return INT32_MAX;
        if(dividend==INT32_MIN && divisor==1) return INT32_MIN;
        
        long int x = abs(dividend), y = abs(divisor);
        
        int result = 0;
        while(y <= x) {
            long int intermediaryDivisor = y, tmp = 1;
            while(intermediaryDivisor <= x - intermediaryDivisor) {
                intermediaryDivisor += intermediaryDivisor;
                tmp += tmp;
            }
            result += tmp;
            x -= intermediaryDivisor;
        }
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
            return -result; 
        }
        return result;
    }
};

int main(){
    Solution obj;
    //int dividend = 7, divisor = -3;
    int dividend = 10, divisor = 3;
    cout<< obj.divide(dividend, divisor);
    
    return 0;
}