/* Ёлементы окружности пронумерованы следующим образом: 1 Ч
радиус R, 2 Ч диаметр D = 2ЈR, 3 Ч длина L = 2ЈpЈR, 4 Ч площадь круга S =
pЈR2. ƒан номер одного из этих элементов и его значение. ¬ывести значени€
остальных элементов данной окружности (в том же пор€дке). ¬ качестве
значени€ p использовать 3.14. */
#include <iostream>
#include <cmath>
using namespace std;
int main() { setlocale(LC_CTYPE , "Russian");
double R, D, L, S, x;
const double p = 3.14;
int el; //элемент
cout << " " ;
cin >> el >> x;
switch (el){

case 1 : R = x; D = 2 * R; L = 2 * p * R; S = p * R * R; break;
case 2 : D = x; R = D / 2; L = 2 * p * R; S = p * R * R; break;
case 3 : L = x; R = L / (2 * p); D = 2 * R; S = p * R * R; break;
case 4 : S = x; R = sqrt(S / p); D = 2 * R; L = 2 * p * R; break;
}
cout << "–адиус" << " " << R << endl;
cout << "ƒиаметр" << " " << D << endl;
cout << "ƒлина" << " " << L << endl;
cout << "ѕлощадь" << " " << S << endl;

}


