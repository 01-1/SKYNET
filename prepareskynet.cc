// {{{ <<-<<<<=< the optimal template >>=>>>>->>
//<editor-fold desc="<<-<<<<=<  >>=>>>>->>">
#include <bits/stdc++.h>  // clang-format off
using namespace std;
#ifdef TAKOTIME
#include "z/d.cc"
#else
#define D(...)
#endif
#define int long long
#define P pair
#define v vector
#define p push_back
#define e emplace_back
#define f first
#define s second
#define L(x) ((int)ssize(x))
#define ben(x) begin(x),end(x)
#define SQ(x) ((x)*(x))
#define frange(i, l, r, k) for(int(i)=(l);(i)<(r);(i)+=(k))
#define fo(i, l, r) frange(i, l, r, 1)
#define f0(i, r) fo(i, 0, r)
#define f1(i, r) fo(i, 1, r)
#define rangerev(i, r, l, k) for(int(i)=(r);(i)>(l);(i)-=(k))
#define ranger(i, r, l) rangerev(i, r, l, 1)
#define fro(i, l, r) ranger(i, (r)-1, (l)-1)
#define TT int TN; cin >> TN; f0(TI, TN)
#define nkl << '\n'
#define t template<class T>
#define u using
#define I int
u ll = int64_t; u ull = uint64_t;
u pi = P<I, I>; u vp = v<pi>;
u vi = v<I>;    u v2 = v<vi>;
u vb = v<bool>; u vl = v<ll>;   
const ull rngseed = chrono::steady_clock::now().time_since_epoch().count();
struct x0rhash{static ull sm64(ull x){x+=0x9e3779b97f4a7c15;x=(x^(x>>30))*0xbf58476d1ce4e5b9;x=(x^(x>>27))*0x94d049bb133111eb;return x^(x>>31);}size_t operator()(ull x)const{return sm64(x+rngseed);}};
t using uset = unordered_set<T, x0rhash>; template<class K,class U> u umap = unordered_map<K, U, x0rhash>;
u seti  = set<I>;  u mapi  = map<I, I>;
u useti = uset<I>; u umapi = umap<I, I>;
t istream &operator>>(istream &i, v<T> &a) { for (auto &x : a) i >> x; return i; };
t ostream &operator<<(ostream &o, v<T> &a) { for (auto &x : a) o << x << ' '; return o; };
t void Unique(T &a) { a.erase(unique(a.begin(), a.end()), a.end()); }
t bool ckx(T &x, T v) { return v > x && (x = v, 1); }
#undef t
#undef u
#undef I
// clang-format on
//</editor-fold> }}} 998244353 1000000007

void rep(int c) {
  if (!c)
    return;
  x0rhash *x = new x0rhash;
  rep(c - 1);
}

int32_t main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);
  rep(3);
  return -1;
}
