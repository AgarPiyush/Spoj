#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

long long a[100005];
pair <long long, long long> dp[100005];

int main()
{
    long long int t,n,k;
    cin >> t;
    while ( t-- ) {
          cin >> n >> k;
          dp[0].first = 0;
          dp[0].second = 0;
          for ( int i = 1; i <= n; i++ ) {
              cin >> a[i];
              dp[i].first = dp[i-1].first + a[i];
              dp[i].second = i;
          }
          sort(dp, dp+n+1);
          for ( int i = 0; i <= n; i++ ) cout << dp[i].first << " " << dp[i].second << "\n ";
          bool f = false;
          printf("\n");
          long long ans;
          for ( int i = 0; i <= n; i++ )
		   {
		   	 getchar();
             
              int idx = lower_bound(dp, dp+n+1, make_pair(dp[i].first+k,dp[i].second+1)) - dp;
              cout << "idx " << idx << " dp " << dp[i].first << " " << dp[i].second << " chk " << dp[i].first+k << " " << dp[i].second+1 << "\n";
              if ( idx == n+1 ) idx--;
              else {
                   if ( dp[idx].first-dp[i].first >= k ) idx--;
              }
              if ( dp[idx].second < dp[i].second ) continue;
              //cout << i << " " << idx << endl;
              if ( !f ) {
                   f = true;
                   ans = dp[idx].first - dp[i].first;
              }
              else ans = max(ans, dp[idx].first-dp[i].first);
              //cerr << "at " << i << " found " << idx << endl;
              //cerr << dp[i].first << " " << dp[i].second << " " << dp[idx].first << " " << dp[idx].second << endl;
           }
          cout << ans << endl;
    }
    return 0;
}

