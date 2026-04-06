#include <iostream>
using namespace std;  // используемые библиотеки

// кратно ли числу A сумма цифра двузначного числа

int main() {
    int number;  // Ввод данных
    cin >> number;

    number = (number);

    if (number < 10 || number > 99) //Проверка на двухзначоность числа
    {
        cout << "Не двухзначное число." << endl; //Вывод ответа в случае если число не двухзначное
        return 0;
    }

    if (number % 3 == 0)
        cout << "Равно 3" << endl;      //Вывод ответа 
    else                                //проверка кратности числа
        cout << "Не равно 3" << endl;

    return 0;
}
