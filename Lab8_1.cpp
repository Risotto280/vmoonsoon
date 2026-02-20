//Даны три числа. Вывести вначале наименьшее, а затем наибольшее из данных чисел.
#include <iostream>
using namespace std;

int main () { setlocale (LC_CTYPE , "Russian");
    int a, b, c;
    int max, min;
    cout <<  "Введите а, b, c " "\n" ;
    cin >> a >> b >> c;
    if (a > b && a > c) {
        max = a;
    }else if (b > a && b > c) {
        max = b;
	}else {
	    max = c;
    }
    if (a < b && a < c) {
	    min = a;
	}else if (b < a && b < c) {
		min = b;
	}else {
        min = c;	
	}   	
	cout << "Наибольшее" << " " << max << endl << "Наименьшее" << " " << min << endl;
    
    return 0 ; 
    
}
    
    
