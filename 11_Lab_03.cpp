// Лабораторная работа №11(3), Вариант 3 (2 семестр).
//


#include "Vector.h"
#include <iostream>
#include "Time.h"
using namespace std;

void main()
{
    Vector<Time>vec(2);//создать вектор из 5 элементов
    vec.Print();//печать вектора
    Time s = vec.Srednee();//среднее ариметическое
    cout << "Srednee=" << s << endl;
    cout << "pos?";
    int p;
    cin >> p;//ввести позицию для добавления
    vec.Add(s, p);//добавить элемент в вектор
    vec.Print();//печать вектора

    p = vec.Max();//найти максимальный элемент
    vec.Del(p);//удаление
    vec.Print();//печать

    vec.Delenie();//деление
    vec.Print();  //печать
}
