/*
    Constraints tell us  1 <= x <= 100 it means ending point is on positive side.
    Just think about the cases when x < k , x == k and x > k

    when x < k -> you can directly move to x with 1 jump.

    when x == k -> you can move to x-1 first and then move to x by taking 1 jump. total jumps are 2

    when x > k -> then there will be two cases -> 
        (1) when x % k == 0 => this condition will require 2 jumps i.e x-1 and then x. 
        (2) when x % k != 0 => you can directly take one jump to x
*/

#include <bits/stdc++.h>

using namespace std;

#define int            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define endl           "\n"
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
#define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl

inline int power(int a, int b)
{
    int x = 1;
    while (b)
    {
        if (b & 1) x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}

const int N = 200005;

void solve(int t) {
    int x,k;
    cin >> x >> k;

    if(x < k){
        cout << 1 << endl;
        cout << x << endl;
    }
    else if(x == k){
        cout << 2 << endl;
        cout << x-1 << " " << 1 << endl;
    }
    else {
        if(x % k == 0){
            cout << 2 << endl;
            cout << x-1 << " " << 1 << endl;
        }else{
            cout << 1 << endl;
            cout << x << endl;
        }
    }
    //bug(t,n,m);
}

int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif

    clock_t z = clock();

    int t = 1;
    cin >> t;
    while (t--) solve(t);

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    return 0;
}