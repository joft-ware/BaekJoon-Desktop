# pragma GCC optimize ("O3")
# pragma GCC optimize ("Ofast")
# pragma GCC optimize ("unroll-loops")
#include <stdio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <stack>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <deque>
#include <map>
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif


#define M 200001
#define MM 11
#define N 11
long long mod = 1e9 + 7;

#define ll long long
#define ull unsigned ll
#define ld double
#define vll vector<ll>
#define Yes "Yes"
#define No "No"
#define YES "YES"
#define NO "NO"
#define mn m=n;
#define X first
#define Y second


#define foi(a) for(ll i=1;i<=a;i++)
#define foi0(a) for(ll i=0;i<a;i++)
#define foj(a) for(ll j=1;j<=a;j++)
#define foj0(a) for(ll j=0;j<a;j++)
#define fok(a) for(ll k=1;k<=a;k++)
#define fori for(ll i=1;i<=n;i++)
#define forin for(ll i=1;i<=n;i++)
#define fori0 for(ll i=0;i<n;i++)
#define forj for(ll j=1;j<=m;j++)
#define forjn for(ll j=1;j<=n;j++)
#define forjn0 for(ll j=0;j<n;j++)
#define forj0 for(ll j=0;j<m;j++)
#define fork for(ll k=1;k<=l;k++)
#define forkn for(ll k=1;k<=n;k++)
#define foriw for(ll i=1;;i++)

#define scann scanf("%lld",&n)
#define scanm scanf("%lld",&m)
#define scant scanf("%lld",&t)
#define scanx scanf("%lld",&x)
#define scany scanf("%lld",&y)
#define scank scanf("%lld",&k)
#define scanc scanf("%c",&c)
#define scanxy scanf("%lld %lld",&x,&y)
#define scanyx scanf("%lld %lld",&y,&x)
#define scanwe scanf("%lld %lld",&w,&e)
#define scannm scanf("%lld %lld",&n,&m)
#define scanwe scanf("%lld %lld",&w,&e)
#define scanmn scanf("%lld %lld",&m,&n)
#define scannml scanf("%lld %lld %lld",&n,&m,&l)
#define scanxyz scanf("%lld %lld %lld",&x,&y,&z)
#define scanxyzr scanf("%lld %lld %lld %lld",&x,&y,&z,&r)
#define scans frees; scanf("%s", &s[1]); len = strlen(&s[1]);
#define scansn frees; scanf("%s", &s[1]); len = strlen(&s[1]); n=len;
#define scansm frees; scanf("%s", &s[1]); len = strlen(&s[1]); m=len;
#define scans1 cin >> s1; len1 = s1.size();
#define scans2 cin >> s1; len1 = s1.size();
#define scana freea; fori scanf("%lld",&a[i]);
#define scanna scann; fori scanf("%lld",&a[i]);
#define scana1d fori scanf("%1d",&a[i]);
#define scanb1d fori scanf("%1d",&b[i]);
#define scanb fori scanf("%lld",&b[i]);
#define scand fori scanf("%lld",&d[i]);
#define scanaa fori for(ll j=1;j<=m;j++) scanf("%lld",&aa[i][j]);
#define scanbb fori for(ll j=1;j<=m;j++) scanf("%lld",&bb[i][j]);
#define scanline(s) getline(cin,s); slen=s.size();

#define prld(a) printf("%.12lf",a);
#define printld(a) prld(a)
#define printsum printf("%lld\n",sum);
#define printcase printf("Case %lld: ",++casenum);
#define printcases printf("Case #%lld: ",++casenum);
#define prints printf("%s",&s[1]);
#define printc printf("%c",c);
#define printmax printf("%lld\n",maxi);
#define printmin printf("%lld\n",mini);
#define printmini printf("%lld\n",mini);
#define printa fori {printf("%lld ",a[i]); }printf("\n");
#define printb fori {printf("%lld ",b[i]); }printf("\n");
#define printd fori {printf("%lld ",d[i]); }printf("\n");
#define printaa fori {for(ll j=1;j<=m;j++) {printf("%3d ",aa[i][j]);} printf("\n");}printf("\n");
#define printbb fori {for(ll j=1;j<=m;j++) {printf("%3d ",bb[i][j]);} printf("\n");}printf("\n");
#define printgg pr1l("gg");
#define printv(v) for(auto qwe:v) {pr1(qwe);}; prl;
#define prv(v) printv(v)

#define frees for(ll i=0;i<=len+n;i++) s[i]=0;
#define freea for(ll i=0;i<=n;i++) a[i]=0;
#define cleana for(ll i=0;i<=n;i++) a[i]=0;
#define cleanb for(ll i=0;i<=n;i++) b[i]=0;
#define sorta sort(a+1,a+n+1);
#define sortb sort(b+1,b+n+1);
#define sortd sort(d+1,d+n+1);
#define sortv sort(v.begin(),v.end());
#define suma sum=0; fori sum+=a[i];
#define infa fori a[i]=INF;
#define reversea fori tempa[i]=a[n+1-i]; fori a[i]=tempa[i];
#define findmax maxi=a[1]; fori if(a[i]>maxi) maxi=a[i];
#define findmaxn maxi=a[1]; fori if(a[i]>maxi) {maxi=a[i]; num=i;}
#define findmin mini=a[1]; fori if(a[i]<mini) mini=a[i];
#define issmall(a)      ((a>='a')&&(a<='z'))
#define isbig(a)      ((a>='A')&&(a<='Z'))

#define lens len = strlen(s);
#define test printf("TEST!");
#define wt while(t--)
#define w1 while(1)
#define INF (ll)0x7f7f7f7f
#define br break
#define braek break
#define bk break
#define nbreak if(n==0) break;
#define boundcheck(tx,ty) if(tx>=1&&ty>=1&&tx<=n&&ty<=m)
#define strint fori a[i] = s[i] - '0';

#define X first
#define Y second
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define pb push_back
#define mp make_pair
#define pbm(a,b) push_back(make_pair(a,b))
#define vsort(v) sort(v.begin(),v.end());
#define sc(a) cin >> a
#define sc1(a) cin >> a
#define sc2(a,b) cin >> a >> b
#define sc3(a,b,c) cin >> a >> b >> c
#define sc4(a,b,c,d) cin >> a >> b >> c >> d
#define sc5(a,b,c,d,e) cin >> a >> b >> c >> d >> e
#define sc6(a,b,c,d,e,f) cin >> a >> b >> c >> d >> e >> f

#define pr(a) cout << (a)
#define pr0 cout << ('0');
#define prl cout << '\n'
#define pr1(a) cout << (a) << ' '
#define pr2(a,b) cout << (a) << ' ' << (b) << ' '
#define pr3(a,b,c) cout << (a) << ' ' << (b) << ' '<< (c) << ' '
#define pr4(a,b,c,d) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '
#define pr5(a,b,c,d,e) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' '
#define pr6(a,b,c,d,e,f) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' ' << (f) << ' '
#define pr0l cout << '\n';
#define pr1l(a) cout << (a) << '\n'
#define pr2l(a,b) cout << (a) << ' ' << (b) << '\n'
#define pr3l(a,b,c) cout << (a) << ' ' << (b) << ' '<< (c) << '\n'
#define pr4l(a,b,c,d) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << '\n'
#define pr5l(a,b,c,d,e) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << '\n'
#define pr6l(a,b,c,d,e,f) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' ' << (f) << '\n'
#define pr7l(a,b,c,d,e,f,g) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' ' << (f) << ' ' << (g) << '\n'
#define pr8l(a,b,c,d,e,f,g,h) cout << (a) << ' ' << (b) << ' '<< (c) << ' '<< (d) << ' '<< (e) << ' ' << (f) << ' ' << (g) << ' ' << (h) << '\n'

#define prcnt pr1l(cnt)
#define prno pr1l("no")
#define pryes pr1l("yes")
#define prNO pr1l("NO")
#define prYES pr1l("YES")
#define prgg pr1l("gg")
#define prmaxi pr1l(maxi)
#define prmax pr1l(maxi)
#define prmin pr1l(mini)
#define prmini pr1l(mini)
#define prnum pr1l(num)
#define prsum printsum
#define prstr for(ll wq=1;wq<=slen;wq++) pr(str[wq]);

using namespace std;
ll i, j, ii, jj, n, zz, yyy, xxx, maxim, bre, cnt, ans, slen, to, casenum, nn, hab, count, t, now, one, two, yy, m, yes, cntt, x1, x2, x3, Y1, y2, y3, temp, i1, i2, J1, j2, i3, j3, len1, len2, low, mid, left, right, high, ok, tx, ty, k, start, num, xx, qq, w, e, no, r, sum, x, y, z, l, len, mini = INF, maxi = -INF, x11, x22, x33, y11, y22, y33;
ll dx[5] = { 0,-1,0,1,0 };
ll dy[5] = { 0,0,-1,0,1 };
ll ddx[9] = { 0,-1,-1,-1,0,0,1,1,1 };
ll ddy[9] = { 0,-1,0,1,-1,1,-1,0,1 };
ld ld1, ld2, ld3, ld4, ld5, ld6, ld7;
ll a[1000001], b1[M], a1[M], a2[M], a3[M], a4[M], a5[M], bb[MM][MM], sumtree[M], mintree[M], maxtree[M], minindextree[M], prime[M];
ll b[M], dd[MM][MM][4], ax[M], ay[M], az[M];
ll d[M], dist[M], aa[MM][MM], d1[M], d2[M], tempa[M], lazy[M];
ll qry[M][4];
bool check[M], visit[M], treecheck[M], dp[151][1501];
char c1, c2, c, c3, c4;
ld ldmax, ldmin, ldmax1, ldmax2, ldmin1, ldmin2, ldd[M];

string str, s, s1, s2, s3;
typedef pair<ll, ll> ppair;
ull u1, u2, u3, u4;
queue<ll> q;
queue<ll> qx, qy;
priority_queue<ll> pq[1001];
priority_queue<ppair> ppq;
stack<ll> st;
deque<ll> dq;
map<string, ll> msi;
map<ll, string> mis;
vector<ll> v;
vector<ll> vv[M];
vector<ll> v1, v2, v3;
vector<ppair> vp;
bool boo[M];


ll zegob(ll x, ll y)
{
	ll k = 1;
	for (int i = 1; i <= y; i++)
		k *= x;
	return k;
}

bool da(char c)
{
	if (c >= 'A' && c <= 'Z')
		return true;
	return false;
}
bool so(char c)
{
	if (c >= 'a' && c <= 'z')
		return true;
	return false;
}

bool isnum(char c) {
	return (c >= '0'&&c <= '9');
}

bool daso(char c) {
	return (da(c) || so(c));
}

bool vowel(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	return false;
}

bool bound(int x, int y)
{
	if (x > 0 && y > 0 && x <= n && y <= m)
		return true;
	return false;
}

ll find(ll x)
{
	if (d[x] == x)
		return x;
	d[x] = find(d[x]);
	return d[x];
}

void un(ll x, ll y)
{
	ll q = find(x);
	ll w = find(y);
	if (q > w)
		d[q] = find(w);
	else
		d[q] = find(w);
}

bool same(ll x, ll y)
{
	return (find(x) == find(y));
}

ll gcd(ll x, ll y)
{
	if (x < y)
		swap(x, y);
	if (y == 0)
		return x;
	return gcd(y, x % y);
}

ll bigger(ll x, ll y)
{
	if (x > y)
		return x;
	return y;
}

ll smaller(ll x, ll y)
{
	if (x < y)
		return x;
	return y;
}

bool descend(const pair<int, int> & a, const pair<int, int> & b)
{
	//If the first number is same
	if (a.first == b.first)
		return a.second > b.second; //The second number in Descending order
	return a.first > b.first; //The first number of bigger numbers to move forward -> Descending order
}

bool ascend(const pair<int, int> & a, const pair<int, int> & b)
{
	//If the first number is same
	if (a.first == b.first)
		return a.second < b.second; //The second number in Descending order
	return a.first > b.first; //The first number of bigger numbers to move forward -> Descending order
}

ll find_max(long long* a, ll n)
{
	findmax;
	return maxi;
}

void clean(long long* a, int n)
{
	fori
		a[i] = 0;
}

ll zari(ll n)
{
	k = 10;
	foriw
	{
		if (k > n)
			return i;
		k *= 10;
	}
}

ll biggest(int x, int y, int z)
{
	ll a[4];
	a[1] = x;
	a[2] = y;
	a[3] = z;
	sort(a + 1, a + 4);
	return a[3];
}

ll smallest(int x, int y, int z)
{
	ll a[4];
	a[1] = x;
	a[2] = y;
	a[3] = z;
	sort(a + 1, a + 4);
	return a[1];
}

ll minindex(ll x, ll y) {
	if (a[x] == a[y]) return (smaller(x, y));
	return (a[x] < a[y]) ? x : y;
}

ll maketree_minindex(ll left, ll right, ll node)
{
	if (left >= right)
		return minindextree[node] = left;
	else
	{
		ll mid = (left + right) / 2;
		ll leftnode = maketree_minindex(left, mid, node * 2);
		ll rightnode = maketree_minindex(mid + 1, right, node * 2 + 1);
		return minindextree[node] = minindex(leftnode, rightnode);
	}
}

ll query_minindex(ll node, ll left, ll right, ll start, ll end)
{
	if (right < start || end < left)
		return 0; // 겹치지 않는 경우(영향이 없는 값을 반환)
	if (start <= left && right <= end) return minindextree[node]; // 모두 겹치는 경우
	int mid = (left + right) / 2; // 일부만 겹치는 경우
	ll leftnode = query_minindex(node * 2, left, mid, start, end);
	ll rightnode = query_minindex(node * 2 + 1, mid + 1, right, start, end);
	return minindex(leftnode, rightnode);
}

ll maketree_min(ll left, ll right, ll node)
{
	if (left == right)
		return mintree[node] = a[left];
	else
	{
		int mid = (left + right) / 2;
		mintree[node] = smaller(maketree_min(left, mid, node * 2), maketree_min(mid + 1, right, node * 2 + 1)); //작은거
		return mintree[node];
	}
}

ll query_min(ll node, ll left, ll right, ll start, ll end)
{
	if (right < start || end < left)
		return INF; // 겹치지 않는 경우(영향이 없는 값을 반환)
	if (start <= left && right <= end) return mintree[node]; // 모두 겹치는 경우
	int mid = (left + right) / 2; // 일부만 겹치는 경우
	return smaller(query_min(node * 2, left, mid, start, end), query_min(node * 2 + 1, mid + 1, right, start, end));
}

ll update_min(ll node, ll left, ll right, ll idx) { ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	if (idx<left || idx>right) // update 필요없음
		return mintree[node];
	if (left == right)
		return mintree[node] = a[left];

	ll mid = (left + right) / 2;
	ll leftnode = update_min(node * 2, left, mid, idx);
	ll rightnode = update_min(node * 2 + 1, mid + 1, right, idx);
	mintree[node] = min(leftnode, rightnode);
	return mintree[node];
}

ll maketree_max(ll left, ll right, ll node)
{
	if (left == right)
		return maxtree[node] = a[left];
	else
	{
		ll mid = (left + right) / 2;
		maxtree[node] = bigger(maketree_max(left, mid, node * 2), maketree_max(mid + 1, right, node * 2 + 1)); //작은거
		return maxtree[node];
	}
}

ll query_max(ll node, ll left, ll right, ll start, ll end)
{
	if (right < start || end < left)
		return -1; // 겹치지 않는 경우(영향이 없는 값을 반환)
	if (start <= left && right <= end) return maxtree[node]; // 모두 겹치는 경우
	int mid = (left + right) / 2; // 일부만 겹치는 경우
	return bigger(query_max(node * 2, left, mid, start, end), query_max(node * 2 + 1, mid + 1, right, start, end));
}

ll maketree_sum(ll left, ll right, ll node)
{
	if (left == right)
	{
		sumtree[node] = a[left];
		return sumtree[node];
	}
	else
	{
		ll mid = (left + right) / 2;
		sumtree[node] = (maketree_sum(left, mid, node * 2) + maketree_sum(mid + 1, right, node * 2 + 1));
		return sumtree[node];
	}
}

void update_lazy_sum(ll node, ll left, ll right) {
	if (!lazy[node])
		return;
	sumtree[node] += ((right - left + 1)*lazy[node]);
	if (right != left) {
		lazy[node * 2] += lazy[node];
		lazy[node * 2 + 1] += lazy[node];
	}
	lazy[node] = 0;
}

ll update_sum(ll left, ll right, ll val, ll node, ll start, ll end) {
	update_lazy_sum(node, left, right);
	if (end<left || start>right) // 범위 밖
		return sumtree[node];
	if (start <= left && end >= right) { // 범위 내부에 속함
		lazy[node] += val;
		update_lazy_sum(node, left, right);
		return sumtree[node];
	}
	ll mid = (left + right) / 2; // 걸쳐 있음
	sumtree[node] = update_sum(left, mid, val, node * 2, start, end) + update_sum(mid + 1, right, val, node * 2 + 1, start, end);
	return sumtree[node];
}

ll query_sum(ll node, ll left, ll right, ll start, ll end) {
	update_lazy_sum(node, left, right);
	if (right < start || end < left)
		return 0; // 겹치지 않는 경우(영향이 없는 값을 반환)
	if (start <= left && end >= right) // 범위 내부에 속함
		return sumtree[node]; // 포함되는 경우
	ll mid = (left + right) / 2; // 일부만 겹치는 경우
	return (query_sum(node * 2, left, mid, start, end)) + (query_sum(node * 2 + 1, mid + 1, right, start, end));
}

ll fact(ll n)
{
	k = 1;
	fori
		k *= i;
	return k;
}

long long dfs(long long now, long long visit, ll w)
{
	pr2l(now, visit);
	if (visit == ((1 << n) - 1))
	{
		dp[now][visit] = ((aa[now][1] == 0) ? INF : aa[now][1]);
		return dp[now][visit];
	}
	if (dp[now][visit] != INF)
		return dp[now][visit];
	mini = INF;
	for (long long i = 1; i <= n; i++)
	{

		if ((visit & (1 << (i - 1))) == 0 && aa[now][i] > 0)
		{
			dp[now][visit] = smaller(mini, aa[now][i] + dfs(i, (visit | (1 << (i - 1))), w));
			return dp[now][visit];
		}
	}
}

void re(int x, int lev)
{
	a[lev] = x;
	if (lev == m)
	{
		for (int i = 1; i <= m; i++)
			printf("%d ", b[a[i]]);
		printf("\n");
		return;
	}
	fori
	{
		if (i != x)
		{
			check[i] = 1;
			re(i, lev + 1);
			check[i] = 0;
		}
	}
}

ll reverse(ll x)
{
	ll sum = 0;
	ll t = x;
	ll z = zari(x);
	foi(z)
	{
		sum += (t % 10) * zegob(10, z - i);
		t /= 10;
	}
	return sum;
}

ll ds(char c)
{
	ll x;
	if (so(c))
		x = (c - 'a' + 1);
	else
		x = (c - 'A' + 27);
	return x;
}

ld ccw(ld x1, ld x2, ld x3, ld y1, ld y2, ld y3) {
	ld x = (x1*y2 + x2 * y3 + x3 * y1);
	x += (-y1 * x2 - y2 * x3 - y3 * x1);
	return x / 2;
}

ll ab(ll x)
{
	if (x < 0)
		return -x;
	return x;
}

ll bzegob(ll x, ll y) {
	ll k = 1;
	while (y > 0) {
		if (y & 1)
			k = (k*x) % mod;
		k %= mod;
		x = (x*x) % mod;
		y >>= 1;
	}
	return k % mod;
}


ll find_sum(ll left, ll right, ll node, ll sum) {
	update_lazy_sum(node, left, right);
	if (left >= right)
		return right;
	mid = (left + right) / 2;
	if (sumtree[node * 2] >= sum)
		return find_sum(left, mid, node * 2, sum);
	else
		return find_sum(mid + 1, right, node * 2 + 1, sum - sumtree[node * 2]);
}

ll insert_sum(ll node, ll left, ll right, ll start, ll end) {
	update_lazy_sum(node, left, right);

	mid = (left + right) / 2;
	if (left == right)
		return left;
	if (sumtree[node * 2] > 0 && mid >= start)
		return insert_sum(node * 2, left, mid, start, end);
	else
		return insert_sum(node * 2 + 1, mid + 1, right, start, end);
}

vll getpi(string p) { // 문자열 p의 pi배열 반환
	ll n = (ll)p.size();
	ll j = 0;
	vll pi(n, 0);
	fo(i, 1, n - 1) {
		while (j > 0 && p[i] != p[j]) // i: 기준, j: 비교 대상
			j = pi[j - 1];
		if (p[i] == p[j])
			pi[i] = ++j;
	};
	return pi;
}

vll kmp(string s, string s2) { // 문자열 s에 문자열 s2가 포함된 위치 벡터를 반환
	vll ans;
	auto pi = getpi(s2);
	ll n = (ll)s.size(), m = (ll)s2.size(), j = 0;
	fori0{
		while (j > 0 && s[i] != s2[j])
			j = pi[j - 1];
		if (s[i] == s2[j]) {
			if (j == m - 1) {
				ans.pb(i - m + 1);
				j = pi[j];
			}
			else
				j++;
		}
	};
	return ans;
}

vll getpi(vll p) { // 벡터 p의 pi배열 반환
	ll n = (ll)p.size();
	ll j = 0;
	vll pi(n, 0);
	fo(i, 1, n - 1) {
		while (j > 0 && p[i] != p[j]) // i: 기준, j: 비교 대상
			j = pi[j - 1];
		if (p[i] == p[j])
			pi[i] = ++j;
	};
	return pi;
}

vll kmpll(vll v1, vll v2) { // 벡터 v1에 벡터 v2가 포함된 위치 벡터를 반환
	vll ans;
	auto pi = getpi(v2);
	ll n = (ll)v1.size(), m = (ll)v2.size(), j = 0;
	fori0{
		while (j > 0 && v1[i] != v2[j])
			j = pi[j - 1];
		if (v1[i] == v2[j]) {
			if (j == m - 1) {
				ans.pb(i - m + 1);
				j = pi[j];
			}
			else
				j++;
		}
	};
	return ans;
}


int main(void) {
	scanxyz;
	swap(x, z);
	if (x < y)
		swap(x, y);
	if (z%x == 0 || z % y == 0)
	{
		pr(z);
		return 0;
	}
	mini = (z / x) * x + x;
	t = mini;
	foi(t / x) {
		temp = t - i * x;
		if ((z - temp) % y == 0) {
			mini = z;
			break;
		}
		temp += ((z - temp) / y)*y + y;
		if (temp == mini)
			break;
		mini = min(mini, temp);
	}
	prmini;
}