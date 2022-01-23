#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int n, l, r, left(0), right(0);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d%d", &l, &r);
        left += l;
        right += r;
        //helps us to tell which side has more one or zero making it easier to make changes
    }
    printf("%d\n", min(left, n - left) + min(right, n - right)); //basically helps to make out teh no. of change to be made on each side then adding them to get answer
    return 0;
}