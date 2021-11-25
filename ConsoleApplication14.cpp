#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int SIZE = 10;
    int massive = 0;


    cout << "[+]Список массивов:" << endl;

    cout << "[1]Массив int" << endl;
    int first[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    cout << "[2]Массив string" << endl;
    string second[SIZE] = { "asd", "qwe", "zxc", "rty", "tyu", "yui", "vbn", "cvb", "iop", "ghj" };

    cout << "[3]Массив float" << endl;
    float third[SIZE] = { 56.1, 123.243, 27.573, 35.44, 45.5, 557.67, 677.75, 7.8, 84.95, 95.11 };

    cout << "[4]Массив double" << endl;
    double fourth[SIZE] = { 0456.1123, 134.2123123, 243.3123123, 343.434543, 44.534543, 534.6345435, 64.735445, 74.834553, 843.93324, 934.23432411 };

    cout << "[5]Массив char" << endl;
    char fifth[SIZE] = { 'a', 'q', 'z', 'r', 't', 'y', 'v', 'c', 'i', 'g' };

    cout << "[6]Массив short" << endl;
    short sixth[SIZE] = { 55, 71, 22, 33, 44, 55, 67, 78, 86, 94 };

    cout << "[7]Массив long" << endl;
    long seventh[SIZE] = { 55345, 71567, 23452, 31233, 45674, 55675, 68907, 78908, 88906, 98904 };

    cout << "[8]Массив bool" << endl;
    bool eighth[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };


    cout << "[+]Выберите массив: ";
    cin >> massive;



    switch (massive)
    {
    case 1:
        system("cls");
        cout << "[+]Массив int:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cout << first[i] << endl;
        }
        break;

    case 2:
        system("cls");
        cout << "[+]Массив string:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cout << second[i] << endl;
        }
        break;

    case 3:
        system("cls");
        cout << "[+]Массив float:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cout << third[i] << endl;
        }
        break;

    case 4:
        system("cls");
        cout << "[+]Массив double:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cout << fourth[i] << endl;
        }
        break;

    case 5:
        system("cls");
        cout << "[+]Массив char:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cout << fifth[i] << endl;
        }
        break;

    case 6:
        system("cls");
        cout << "[+]Массив short:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cout << fifth[i] << endl;
        }
        break;

    case 7:
        system("cls");
        cout << "[+]Массив long:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cout << seventh[i] << endl;
        }
        break;

    case 8:
        system("cls");
        cout << "[+]Массив bool:" << endl;
        for (int i = 0; i < SIZE; i++)
        {
            cout << eighth[i] << endl;
        }
        break;

    default:
        system("cls");
        cout << "Выбранного массива нет в списке.";
    }

    int _;
    cin >> _;
}