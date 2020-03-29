#include <iostream>
#include <iomanip> 
using namespace std ;
main()
{
 int m=0 , n1 ,n2 , n3 ;
 for (n1=0 ; n1<=10 ; n1++)
 for (n2=0 ; n2<=20 ; n2++)
 for (n3=0 ; n3<=50 ; n3++)
 if ( 2*n2 + 5*n2 + 10*n1 == 100)
 { m ++ ;
 cout << "1 DH = " ;
 if (n3) cout << setw(2) << n3 << " X 2c + " ;
 if (n2) cout << setw(2) << n2 << " X 5c + " ;
 if (n1) cout << setw(2) << n1 << " X 10c + " ;
 cout << "\n" ;
 }
 cout << " tout, il y a " << m << " façons de faire 1 dh\n" ;
}
