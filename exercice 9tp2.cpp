#include <iostream>
using namespace std ;
main()
{ 
int n,m,n1,i;
char etoile= '*' ; 
cout << "combien de lignes ? " ;
cin >> n ;
 for (n1=0 ; n1<n ; n1++)
 { 
       m = n - n1 - 1 ;
      for (i=0 ; i<m ; i++) cout << ' ' ;
      for (i=0 ; i<2*n1+1 ; i++) cout << etoile ;
      cout << "\n" ;
 }
}
