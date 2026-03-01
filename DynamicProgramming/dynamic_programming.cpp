#include <vector>
#include "dynamic_programming.hpp"

int helper(int n, std::vector<int>& mtx)
{
    if(n<=1)
        return n;

    /*if(mtx[n] != -1)
        return mtx[n];

    mtx[n] = helper(n-1, mtx) + helper(n-2, mtx);

    return mtx[n];*/

    /*mtx[0] = 0; //0 1 1 2 3 5
    mtx[1] = 1;

    for(int i=2; i<=n; i++)
        mtx[i] = mtx[i-1] + mtx[i-2];

    return mtx[n];*/

    int prev1 = 0; //0 1 1 2 3 5
    int prev2 = 1;

    for(int i=2; i<=n; i++)
    {
        int curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return prev2;
}
int fibonacci(int n)
{
    std::vector<int> mtx(n+1, -1);

    return helper(n, mtx);
}
