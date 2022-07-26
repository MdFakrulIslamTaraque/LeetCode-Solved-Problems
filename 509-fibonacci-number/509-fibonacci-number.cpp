class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        int v0 = 0, v1 = 1, now;
        for(int i = 2; i<=n; i++)
        {
            now = v0 + v1;
            v0 = v1;
            v1 = now;
        }
        return now;
        
    }
};