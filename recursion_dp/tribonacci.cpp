/*class Solution {                               using recursion more efficientt prolly use dp
public:
    int dp[37]={-1};
    int tribonacci(int n) {
        static int s=0;
        if(n<=1){
            return n;
        }
        else if(n==2){
            return 1;
        }
        else{
            if(dp[n-1]==-1){
                dp[n-1]=tribonacci(n-1);
            }
            if(dp[n-2]==-1){
                dp[n-2]=tribonacci(n-2);
            }
            if(dp[n-3]==-1){
                dp[n-3]=tribonacci(n-3);
            }
            
        }
        return tribonacci(n-1)+tribonacci(n-2)+tribonacci(n-3)+s;
    }
};
public int tribonacci(int n) {
        if (n < 2) return n;
        int a = 0, b = 1, c = 1, d;
        while (n-- > 2) {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return c;
*/