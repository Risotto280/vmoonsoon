// Дано вещественное число — цена 1 кг конфет. Вывести
//стоимость 1.2, 1.4, …, 2 кг конфет.
#include <iostream>
using namespace std;

int main() { setlocale(LC_CTYPE , "Russian");
int x;
double i,price;
cout << "";
cin >> x;

for (i = 1.0; i <= 2.0; i+= 0.2) { // i <= 2 , i + 0.2
    cout << "Стоимость " << x * i << "," << " кг конфет: " << i << endl;
}
}

