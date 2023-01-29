#pragma once
#include <vector>
#include <iostream>
using namespace std;

//шаблон класса
template<class T>
class Vector
{
	vector <T> v;//последовательный контейнер для хранения элементов вектора
	int len;
public:
	Vector(void);//конструктор без параметра
	Vector(int n);//конструктор с параметром
	void Print();//печать
	~Vector(void);//деструктор

	T Srednee();//вычисление среднего арифметического
	void Add(T el, int pos);//добавление элемента el на позицию pos

	int Max();//найти номер максимальнго элемента
	void Del(int pos);//удалить элемент из позиции pos

	int Min();//найти номер минимальнго элемента
	void Delenie();//деление на минимальный


};

//конструктор без параметра
template <class T>
Vector<T>::Vector()
{
	len = 0;
}
//деструктор
template <class T>
Vector<T>::~Vector(void)
{
}
//конструктор с параметром
template <class T>
Vector<T>::Vector(int n)
{
	T a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	len = v.size();
}
//печать
template <class T>
void Vector<T>::Print()
{
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

//вычислить среднее арифметическое
template<class T>
T Vector<T>::Srednee()
{
	T s = v[0];
	for (int i = 1; i < v.size(); i++)
		s = s + v[i];
	int n = v.size();
	return s / n;
}
//добавление элемента
template<class T>
void Vector<T>::Add(T el, int pos)
{
	v.insert(v.begin() + pos, el);
}

//поиск максимального элемента
template <class T>
int Vector<T>::Max()
{
	T m = v[0];
	int n = 0;
	for (int i = 1; i < v.size(); i++)
		if (v[i] > m)
		{
			m = v[i];
			n = i;
		}
	return n;
}
//удаление элемента из позиции pos
template<class T>
void Vector<T>::Del(int pos)
{
	v.erase(v.begin() + pos);
}

template<class T>
//поиск минимального элемента
int Vector<T>::Min()
{
	T m = v[0];
	int n = 0;
	for (int i = 1; i < v.size(); i++)
		if (v[i] < m)
		{
			m = v[i];
			n = i;
		}
	return n;
}
template<class T>
//деление всех элементов вектора на минимальный элемент
void Vector<T>::Delenie()
{
	int m = Min(); T min = v[m];
	for (int i = 0; i < v.size(); i++)
		v[i] = v[i] / min;
}