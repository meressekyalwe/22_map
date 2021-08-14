/*Задание 3. Анаграммы 

Что нужно сделать

Напишите функцию, которая принимает две строки и возвращает true, если первая строка
является анаграммой второй (то есть можно получить первую строку из второй путём
перестановки букв местами), и false иначе. Для достижения хорошей асимптотики решения
рекомендуется использовать std::map.

Пример анаграммы: лекарство — стекловар

Чек-лист для проверки задачи

Функция принимает корректные типы данных, тип возвращаемого значения — bool.
Функция не использует библиотек, кроме <iostream>, <map>, <string>.
Функция корректно определяет, являются ли строки анаграммами.
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

//range letters of a word and return map, (key & value) = letter
map<char, char> f(char str[]) {
    map<char, char>mymap;
    int i = 0;
    while (*(str + i) != '\0') {
        mymap[*(str + i)] = *(str + i);
        i++;
    }
    return mymap;
}

int main(){
    char a[] = "nez";
    char b[] = "zen";

    // compare maps of word a and b and print result
    cout << (f(a) == f(b) ? "Yes" : "No");
}
