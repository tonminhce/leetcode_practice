class Solution {
public:
    bool isPalindrome(int x) {
    unsigned int reversedNum =0 ;
    unsigned int tmp = x;
    while( tmp > 0) {
        reversedNum = reversedNum*10 + tmp%10;
        tmp =tmp/10;
    }
    if (x == reversedNum){
        return true;
    }
        return false;
    }
};