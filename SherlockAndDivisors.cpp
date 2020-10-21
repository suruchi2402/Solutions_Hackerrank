#include <bits/stdc++.h>

using namespace std;

long long divisors(long long n) {
    long long count=0,i;
    for ( i=1;i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            if (i%2==0) count++;
            if ((n/i)%2==0) count++;
        }
    }
    if ((n%2==0) && (pow((int)sqrt(n), 2) == n))  count--;
    return count;
}
  

int main()
{
    long long t;
    cin >> t;

    for (long long t_itr = 0; t_itr < t; t_itr++) {
        long long n;
        cin >> n;
        cout <<divisors(n)<< "\n";
    }

    return 0;
}
