
#include <iostream>
using namespace std;

void game();
void rules();
void start();

void start() {
    system("cls");
    cout << "[+]Крестики-нолики\n";
    cout << "[1]Начать игру\n";
    cout << "[2]Правила игры\n";
    cout << "[0]Выход\n";

    int value;
    cin >> value;

    switch (value)
    {
    case 1:
        game();
        system("cls");
    case 2:
        rules();
        system("cls");
    }
}

void game() {
    system("cls");
    const int Size = 3;
    char game[Size][Size];

    for (int i = 0; i < Size; i++)
    {
        for (int j = 0; j < Size; j++) {
            game[i][j] = '_';
        }
    }

    int count = 0;
    char winner = '*';
    char player = 'X';
    int player1;
    while (count != 9)
    {
        count++;
        if (player == 'X')
        {
            int col = 0, row = 0;
            while (true)
            {
                for (int i = 0; i < Size; i++)
                {
                    for (int j = 0; j < Size; j++) {
                        cout << game[i][j] << "|";
                    }
                    cout << "\n";
                }
                int pos;
                cout << "Выберите ячейку: ";
                cin >> pos;
                switch (pos)
                {
                case 7:
                    row = 0;
                    col = 0;
                    break;
                case 8:
                    row = 0;
                    col = 1;
                    break;
                case 9:
                    row = 0;
                    col = 2;
                    break;
                case 4:
                    row = 1;
                    col = 0;
                    break;
                case 5:
                    row = 1;
                    col = 1;
                    break;
                case 6:
                    row = 1;
                    col = 2;
                    break;
                case 1:
                    row = 2;
                    col = 0;
                    break;
                case 2:
                    row = 2;
                    col = 1;
                    break;
                case 3:
                    row = 2;
                    col = 2;
                    break;
                }
                if (pos > 0 && pos < 10 && game[row][col] == '_') {
                    break;
                }
                else {
                    cout << "Неверное значение\n";
                }
            }
            game[row][col] = player;
            player = 'O';
        }
        else if (player == 'O')
        {
            player1 = player;
            int col = 0, row = 0;
            while (true)
            {
                int pos = 1 + rand() % 9;
                switch (pos)
                {
                case 1:
                    row = 0;
                    col = 0;
                    break;
                case 2:
                    row = 0;
                    col = 1;
                    break;
                case 3:
                    row = 0;
                    col = 2;
                    break;
                case 4:
                    row = 1;
                    col = 0;
                    break;
                case 5:
                    row = 1;
                    col = 1;
                    break;
                case 6:
                    row = 1;
                    col = 2;
                    break;
                case 7:
                    row = 2;
                    col = 0;
                    break;
                case 8:
                    row = 2;
                    col = 1;
                    break;
                case 9:
                    row = 2;
                    col = 2;
                    break;
                }
                if (game[row][col] == '_') {
                    break;
                }
            }
            if (game[0][0] == '_' && (game[0][1] == 'X' && game[0][2] == 'X' || game[1][1] == 'X' && game[2][2] == 'X' || game[1][0] == 'X' && game[2][0] == 'X')) {
                row = 0; col = 0;
            }
            else if (game[0][1] == '_' && (game[0][0] == 'X' && game[0][2] == 'X' || game[1][1] == 'X' && game[2][1] == 'X')) {
                row = 0; col = 1;
            }
            game[row][col] = player;
            player = 'X';
        }

        if (game[0][0] != '_' && (game[0][0] == game[0][1] && game[0][1] == game[0][2] || game[0][0] == game[1][0] && game[1][0] == game[2][0] || game[0][0] == game[1][1] && game[1][1] == game[2][2])) {
            winner = game[0][0];
        }
        else if (game[0][1] != '_' && game[0][1] == game[1][1] && game[1][1] == game[2][1]) {
            winner = game[0][1];
        }
        else if (game[0][2] != '_' && (game[0][2] == game[1][2] && game[1][2] == game[2][2] || game[0][2] == game[1][1] && game[1][1] == game[2][0])) {
            winner = game[0][2];
        }
        else if (game[1][0] != '_' && game[1][0] == game[1][1] && game[1][1] == game[1][2]) {
            winner = game[1][0];
        }
        else if (game[2][0] != '_' && game[2][0] == game[2][1] && game[2][1] == game[2][2]) {
            winner = game[2][0];
        }

        if (winner != '*') {
            for (int i = 0; i < Size; i++)
            {
                for (int j = 0; j < Size; j++) {
                    cout << game[i][j] << "|";
                }
                cout << "\n";
            }
            break;
        }
    }
    cout << "Конец игры, ";
    if (winner == '*') {
        cout << "ничья\n";
    }
    else {
        cout << "победил " << winner << "\n";
    }

    cout << "[0]Выход \n";
    int exit;
    cin >> exit;

    if (exit == 0)
    {
        start();
    }
}

void rules() {
    system("cls");
    cout << "[+]Правила игры\n";
    cout << "[1]Первым ходит крестик\n";
    cout << "[2]Побеждает тот игрок, который первый собрал 3 крестика или нолика подряд по горизонтали, вертикали или диагонали:\n\n";
    cout << "[+]Пример\n\n";
    cout << "_|_|_|\t_|X|_|\t_|_|X|\nX|X|X|\t_|X|_|\t_|X|_|\n_|_|_|\t_|X|_|\tX|_|_|\n\n";
    cout << "[0]Назад \n";

    int exit;
    cin >> exit;
    switch (exit)
    {
    case 0:
        start();
    default:
        break;
    }
}

int main()
{
    setlocale(0, "");

    start();

    int _;
    cin >> _;

    return 0;
}