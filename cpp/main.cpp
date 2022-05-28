#include <bits/stdc++.h>
using namespace std ;
struct  employe
{
    /* data */
    string name ;
    double salary ;
    int position ;

};
bool compair (const employe &first ,const employe &second  )
{
    if (first.name !=second .name )
    {return first .name <second.name ;}

    if (first .position!=second .position)
    return first.position >second .position ;
    return first .salary >second.salary ;
}
void print (employe &mp)
{
    for (int i =0 ;i<5 ;i++)
    {
        cout << mp.name << " " << mp.salary <<  " " << mp.position ;
        cout <<endl ;
    }

}
int  main()
{
    employe ar_emp [5] =
    {
        {"omar",1000,1},{"aousef",2000,2},{"mohamed",3000,3},{"eslam",4000,4},{"eslam",5000,5}
    } ;
   sort (ar_emp ,ar_emp+5 ,compair) ;
   for (int i=0 ;i<5;i++)
   {
       cout<< "name : " << ar_emp[i].name << " \n" << "salary :" << ar_emp[i].salary << " \n" << "position :" << ar_emp[i] .position << "\n" ;

   }
}
