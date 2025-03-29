/*
    We have to double the x everytime , but how much ? 
    the solution is taken out from constraints i.e -> n * m <= 25 , 
    so in worst case if we consider n = 1, then we have to perform at max 5 operations to make n > 25 and at each stage we will check whether the s can be formed or not. 
    if after checking at each stage , we don't find the s as substring then we simply return -1
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

bool check(string x , string s){
    int n = x.length();
    int m = s.length();

    for(int i = 0 ; i <= (n-m) ; i++){
        string sub = x.substr(i , m);
        if(sub == s){
            return true;
        }
    }

    return false;
}
void solve(int t) {
    int n,m;
    cin >> n >> m;

    string x;
    cin >> x;

    string s;
    cin >> s;

    for(int i = 0 ; i<=5 ; ++i){
        if(x.length() >= s.length()){
            bool ans = check(x,s);
            if(ans == true){
                cout << i << endl;
                return ;
            }
        }

        x = x + x;
    }

    cout << -1 << endl;

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