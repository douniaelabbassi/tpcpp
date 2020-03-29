#include <iostream>   
using namespace std ;
// déclarer et définir  la fonction fct comme une fonction en ligne.
 inline int fct (char c, int n) {   
 int res ;   
if (c == 'a')      res = n + c ;  
else if (c == 's') res = n - c ;   
else               res = n * c ; 
return res ; 
}
// Le programme main s’écrit de la même manière
 main () {
int n = 150, p ;  
char c = 's' ; 
p = fct (c, n) ;  
cout << "fct (\'" << c << "\', " << n << ") vaut : " << p ; }

