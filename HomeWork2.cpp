// HomeWork2.cpp : 

// 1. Создаем и инициализируем переменные типа данных:

#include <iostream>

short int a1 = 60;
int a2 = 23'000;
long long a3 = 2'023'023'234;
char a4 = 'B';
bool a5 = true;
float a6 = 3.234f;
double a7 = 3.23456754324;


// 2. Создаем (enum) с возможными вариантами символов для игры в крестики - нолики.

enum gameCell {
	EMPTY = '_',
	CROSS = 'X',
	ZERO = '0'
};

// 3. Создаем массив, способный содержать значение такого перечисления и инициализировать его.

gameCell array[3][3] = { {EMPTY, EMPTY, EMPTY}, {EMPTY, EMPTY, EMPTY}, {EMPTY, EMPTY, EMPTY} };

// 4.* Создаем структуру (struct) данных «Поле для игры в крестики-нолики» и снабдить его всеми необходимыми свойствами.

struct game
{
	gameCell array[3][3];
	bool PlayedFirstWon;
	bool GameOver;
	gameCell Player1, Player2;
	long long Player1ID, Player2ID;
	const unsigned int FieldSize = 3;
};

// 5. ** Создать структуру (struct MyVariant) объединяющую: union MyData (int, float, char) и 3-и битовых поля (флага) указывающими какого типа значение в данный момент содержится в объединении (isInt, isFloat, isChar). Продемонстрировать пример использования в коде этой структуры.




struct MyVariant {

	union MyData {
		int MyInt,
			float MyFloat,
			char MyChar
	};

	MyData data;

	unsigned int isInt : 1;
	unsigned int isChar : 1;
	unsigned int isFloat : 1;
};

int main() {

	MyData MyVar;

	MyVar.data.MyFloat = 32.234;
	MyVar.isChar = 0;
	MyVar.isFloat = 1; // Мы будем хранить Float
	MyVar.isInt = 0;
}