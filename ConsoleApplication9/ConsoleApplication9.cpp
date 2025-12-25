#include <iostream>
using namespace std;

// кратно ли числу A сумма цифра двузначного числа

int main() {
    int number;
    cin >> number;

    number = (number);

    if (number < 10 || number > 99)
    {
        cout << "Не двухзначное число." << endl; //Проверка на двухзначоность числа
        return 0;
    }

    if (number % 3 == 0)
        cout << "Равно 3" << endl;      //проверка кратности числа
    else
        cout << "Не равно 3" << endl;

    return 0;
}
