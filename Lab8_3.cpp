/* Если их
значения упорядочены по возрастанию или убыванию, то удвоить их в
противном случае заменить значение каждой переменной на противоположное. */
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int a, b, c;
    cout << "Введите 3 целых числа\n";
    cin >> a >> b >> c;

    if ((a < b) && (b < c)) { 
        a = a * 2;
        b = b * 2;
        c = c * 2;
    } else if ((a > b) && (b > c)) {
        a = a * 2; 
        b = b * 2; 
        c = c * 2;
    } else {
        a = a * (-1); 
        b = b * (-1); 
        c = c * (-1); 
    } 

    cout << a << " " << b << " " << c << endl;
    return 0;
}
