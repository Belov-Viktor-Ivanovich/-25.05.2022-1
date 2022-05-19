// ДЗ до 25.05.2022 ООП Встреча №1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "fractions.cpp"


int main()
{
        fractions point1(4, 4);
        fractions point2(2, 4);
        //point1.summa(point2);
        //point1.subtraction(point2);
        //point1.multiplication(point2);
        point1.division(point2);
}

