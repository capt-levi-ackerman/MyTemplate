
/*
                    ------ Ackerman ------
     A single soldier might pose a threat to me?
     Yes! Captain Levi is Dangerous.   
*/

#include <iostream>
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
#define rep(i,a,b)     for (int i = a; i < b; i++)
#define rv(i,a,b)      for (int i = a; i >= b; i--)
#define setbits(x)    __builtin_popcount(x)
#define setbitsll(x)  __builtin_popcountll(x)
#define checkParity(x) __builtin_parity(x)
#define leadingZ(x)    __builtin_clz(x)
#define trailingZ(x)   __builtin_ctz(x)


// check parity will return 0->if the set bits are even, 1 -> if set bits are odd

//---------- MOD Operations (Unleash the Beast Mode) -----------------------


const int mod = 1e9 + 7;

inline void add(int &a, int b) {
  a += b;
  if (a >= mod) a -= mod;
}

inline void sub(int &a, int b) {
  a -= b;
  if (a < 0) a += mod;
}

inline int mul(int a, int b) {
  return (int) ((long long) a * b % mod);
}

inline int binexp(int a, int b, int mod){
    assert(b>=0);
    a=a%mod;
    int ans = 1;
    while(b){
        if(b&1){
            ans=ans*a%mod;
        }
        a=a*a%mod;
        b/=2;
    }
    return ans;
}

inline int inv(int a) {
  a %= mod;
  if (a < 0) a += mod;
  int b = mod, u = 0, v = 1;
  while (a) {
    int t = b / a;
    b -= t * a; swap(a, b);
    u -= t * v; swap(u, v);
  }
  assert(b == 1);
  if (u < 0) u += mod;
  return u;
}

//-------------------------------------------------------------


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


int gcd(int a,int b)
 {
   if(b==0) return a;
   return gcd(b,a%b);
 }


// negative mod
inline int Nmode(int x,int m)
{
   x = x%m;
    if (x < 0) x += m;
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

// const int N = 1e7+2;

/* void sieve()
{
  is_prime[0]=is_prime[1] = true;
  for(int i=2;i<=N;i++)
  {
    if(is_prime[i]==false && i*i<=N)
    {
      for(int j = i*i;j<=N;j+=i)
      {
        is_prime[j]= true;
      }
    }
  }
}
*/

// DSU

/* 
const int M = 4 * 1e5 + 1;
int parent[M];
int size1[M];

void make_set(int v) {
     parent[v] = v;
     size1[v] = 1;
  }

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

bool union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a == b) {
        return false;
    }
    if (a != b) {
        if (size1[a] < size1[b])
            swap(a, b);
        parent[b] = a;
        size1[a] += size1[b];
    }
    return true;
}

*/


void solve() {

}

int32_t main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

// #ifndef ONLINE_JUDGE
//   freopen("input.txt",  "r",  stdin);
//   freopen("output.txt", "w", stdout);
// #endif

  clock_t z = clock();

  int t = 1;
  cin >> t;
  while (t--) solve();

  cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

  return 0;
}
