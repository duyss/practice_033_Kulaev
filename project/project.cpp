#include <iostream>
#include <fstream>
#include <clocale>
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_CTYPE, "rus");
    int i, counter;
    string name;
    string* arr;
    counter = 0;
    cout << "Введите кол-во элементов массива: ";
    cin >> i;
    arr = new string[i];
    for (int n = 0; n < i; n++) {
        cout << "Введите " << n+1 << " элемент массива: ";
        cin >> arr[n];
    }
    cout << "Введите элемент, который нужно подсчитать в массиве: ";
    cin >> name;
    for (int n = 0; n < i; n++) {
        if(arr[n] == name) {
            counter++;
        }
    }
    cout << "В массиве " << counter << " элементов!";
}


