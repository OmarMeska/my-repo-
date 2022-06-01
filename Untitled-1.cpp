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
int n ,k ;
cin >> n >> k ;
int conter =0 ;
string s  ="" ;
int  coner =0 ;
for (int i=0 ; i<n ;i++)
{
    coner ++ ;
    if (coner ==n+1)break; 
    if (conter ==k and i <=n-1) {i=0 ; conter =0 ;}
   s += i+'a' ;
   conter ++ ;

}
cout << "الحمدلله دائما وابدا  "  ;

cout << s  ;

}