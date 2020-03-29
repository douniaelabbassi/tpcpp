#include <iostream>
using namespace std ;
main()
{ int fonction1 (int) ; int fonction2 (int) ; int n ;
 cout << " Merci de donnez un nombre : " ;
 cin >> n ;
 if (fonction2(n)) cout << "le nombre est pair"<<"\n" ;
 if (fonction1(n)) cout << "le nombre est multiple de 3"<<"\n" ;
 if (fonction1(n) && fonction2(n)) cout << "le nombre est divisible par 6"<<"\n";
}
//les deux fonctions
int fonction1 (int n)
{ if (n%3) return 0 ;
 else return 1 ;
}
int fonction2 (int n)
{ if (n%2) return 0 ;
 else return 1 ;
}

