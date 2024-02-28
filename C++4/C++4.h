#pragma once
#include <Windows.h>
#include <random>
using namespace std;

string reverse(string str)
{
    reverse(str.begin(), str.end());
    return str;
}

string removeVowels(string str) 
{
    const char vowels[] = { 'а', 'о', 'у', 'э', 'ы', 'я', 'ё', 'ю', 'е', 'и', 
                            'А', 'О', 'У', 'Э', 'Ы', 'Ё', 'Ю', 'Е', 'И' };
    string result = "";

    for (char c : str) {
        bool isVowel = false;
        for (char vowel : vowels) {
            if (c == vowel) {
                isVowel = true;
                break;
            }
        }
        if (!isVowel) {
            result += c;
        }
    }

    return result;
}

string removeConsonants(string str)
{
    const char consonants[] = { 'Б', 'В', 'Г', 'Д', 'Ж', 'З', 'К', 'Л', 'М', 
                                'Н', 'П', 'Р', 'С', 'Т', 'Ф', 'Х', 'Ц', 'Ч', 
                                'Ш', 'Щ', 'б', 'в', 'г', 'д', 'ж', 'з', 'к', 
                                'л', 'м', 'н', 'п', 'р', 'с', 'т', 'ф', 'х', 
                                'ц', 'ч', 'ш', 'щ' };
    string result = "";

    for (char c : str) {
        bool isConsonant = false;
        for (char consonant : consonants) {
            if (c == consonant) {
                isConsonant = true;
                break;
            }
        }
        if (!isConsonant) {
            result += c;
        }
    }

    return result;
}

string shuffle(string str) {
    shuffle(str.begin(), str.end(), default_random_engine(time(0)));
    return str;
}



int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);

    int choise;
    string str;

    cout << "Введите строку: ";
    cin >> str;

    cout << "Выберите действие: \n" << "1. Слово выводится задом наперед\n" 
         << "2. Вывести слово без гласных\n" << "3. Вывести слово без согласных\n" 
         << "4. Рандомно раскдать буквы заданного слова\n" << endl;
    cin >> choise;

    switch (choise)
    {
    case 1:
        cout << reverse(str);
        break;
    case 2:
        cout << removeVowels(str);
        break;
    case 3:
        cout << removeConsonants(str);
        break;
    case 4:
        cout << shuffle(str);
        break;
    }
}
