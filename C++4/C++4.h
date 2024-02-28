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
    const char vowels[] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', '�', 
                            '�', '�', '�', '�', '�', '�', '�', '�', '�' };
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
    const char consonants[] = { '�', '�', '�', '�', '�', '�', '�', '�', '�', 
                                '�', '�', '�', '�', '�', '�', '�', '�', '�', 
                                '�', '�', '�', '�', '�', '�', '�', '�', '�', 
                                '�', '�', '�', '�', '�', '�', '�', '�', '�', 
                                '�', '�', '�', '�' };
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

    cout << "������� ������: ";
    cin >> str;

    cout << "�������� ��������: \n" << "1. ����� ��������� ����� �������\n" 
         << "2. ������� ����� ��� �������\n" << "3. ������� ����� ��� ���������\n" 
         << "4. �������� �������� ����� ��������� �����\n" << endl;
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
