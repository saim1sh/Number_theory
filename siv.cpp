#include <bits/stdc++.h>
using namespace std;
#define endl "\n";
#define int long long
vector<int> primes;
int arr[1000001];

void siv()
{
   int n = 100;
   arr[1] = 1;
   for (int i = 2; i <= n; i++)
   {
      if (arr[i] == 0)
      {
         primes.push_back(i);
         // for (int j = 2 * i; j <= n; j += i)
         //    arr[j] = 1;
         for (int j = 2; i * j <= n; j++)
            arr[i * j] = 1;
      }
   }
}
signed main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   siv();
   for (auto n : primes)
      cout << n << endl;
   return 0;
}