class Solution {
public:
    bool divisorGame(int n) 
    {
        for (int x = 1; x < n; x++) {
            if (n % x == 0 && !divisorGame(n - x)) {
                return true;
            }
        }    
        return false;
    }
};