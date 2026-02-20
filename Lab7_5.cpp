// Даны два числа. Вывести порядковый номер меньшего из них.
#include <iostream>
using namespace std;

int main () { setlocale (LC_CTYPE , "Russian");
    int a, b;
    cout <<  "Введите а, b " "\n" ;
    cin  >> a >> b ;
    if (a < b)
    {
	    cout << 1 << endl;
	}
	
	else if (a > b)
	{
	    cout << 2 << endl;
	}
    else 
    {
	  cout << "Числа равны " << endl << 1  << " " << 2 << endl;
	}
	
  return 0;




}
