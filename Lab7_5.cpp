// Даны три числа. Вывести порядковый номер меньшего из них.
#include <iostream>
using namespace std;

int main () { setlocale (LC_CTYPE , "Russian");
    int a, b, c;
    cout <<  "Введите а, b , c " "\n" ;
    cin  >> a >> b >> c ;
    if (a < b && a < c)
         {
	    cout << 1 << endl;
         }
	
    else if (b < a && b < c)
	 {
	    cout << 2 << endl;
   	 }

    else {
            cout << 3 << endl;
         }
    
  return 0;
}
