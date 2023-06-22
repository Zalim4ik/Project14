#include <iostream>
using namespace std;

const int BOARD_SIZE = 10;

void printBoard(char board[][BOARD_SIZE])
{
    setlocale(LC_ALL, "rus");
    cout << "  ";
    for (int i = 0; i < BOARD_SIZE; i++)
        cout << i << " ";
    cout << endl;

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        cout << i << " ";
        for (int j = 0; j < BOARD_SIZE; j++)
            cout << board[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    char board[BOARD_SIZE][BOARD_SIZE];

    // Инициализация игрового поля
    for (int i = 0; i < BOARD_SIZE; i++)
        for (int j = 0; j < BOARD_SIZE; j++)
            board[i][j] = '-';

    // Расстановка кораблей
    board[0][0] = 'S';
    board[0][1] = 'S';
    board[0][2] = 'S';

    board[2][5] = 'D';
    board[3][5] = 'D';

    // Вывод игрового поля
    printBoard(board);

    // Игровой цикл
    int x, y;
    while (true)
    {
        // Ввод координат выстрела
        cout << "Введите координаты выстрела (x y): ";
        cin >> x >> y;

        // Проверка попадания
        if (board[x][y] == 'S' || board[x][y] == 'D')
        {
            cout << "Попадание!" << endl;
            board[x][y] = 'X';
        }
        else
        {
            cout << "Промах!" << endl;
            board[x][y] = 'O';
        }

        // Вывод обновленного игрового поля
        printBoard(board);
    }

    return 0;
}