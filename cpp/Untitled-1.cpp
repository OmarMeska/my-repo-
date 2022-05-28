#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#define IOS                            \
    std::ios_base::sync_with_stdio(0); \
    cin.tie(0);                        \
    cout.tie(0);
// const int N=1000000+5;
long long mod = 1000000000 + 7;
long long Overflow = (pow(2, 32)) - 1;
bool com(string &first, string &second)
{
    return first.size() >= second.size();
}
void print (vector <int > &a)
{
    for (int i=0 ;i <7 ;i++)
    cout << a[i] << " " ;

}






int freqsmall[290]  ;
int freqcapt[290] ;
int freq[1000]={0};
int main ()
{
IOS ;
int n;cin >> n; 
vector <int > vec(n ) ;
for (int i=0 ;i <n ;i ++ )
{cin >> vec[i] ;
}
int q ;cin >>q; vector <int > the_end (n  ) ;
for (int i=0 ;i<q ;i++)
{
    int l , r ;
    cin >> l >>r ;
    the_end[l-1] +=1 ;
    the_end[r]-=1;
}
for (int i=0 ;i <n ;i++)
{
    (i==0)  ? the_end [i] =the_end[i]: the_end[i] =the_end[i] +the_end[i-1] ;
}
for (auto i :the_end) cout << i << " " ;

vector <int > sol  ;
int conter =0 ;
for (int i=0 ;i <the_end.size () ; i++)
{
    if ( the_end [i]==0 )
    {
        conter ++  ;
    sol.push_back(vec[i]) ;
    }
}
cout <<"\n"<< conter  <<"\n" ;

for (auto i :sol )cout << i << " " ;

}