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

    // ������������� �������� ����
    for (int i = 0; i < BOARD_SIZE; i++)
        for (int j = 0; j < BOARD_SIZE; j++)
            board[i][j] = '-';

    // ����������� ��������
    board[0][0] = 'S';
    board[0][1] = 'S';
    board[0][2] = 'S';

    board[2][5] = 'D';
    board[3][5] = 'D';

    // ����� �������� ����
    printBoard(board);

    // ������� ����
    int x, y;
    while (true)
    {
        // ���� ��������� ��������
        cout << "������� ���������� �������� (x y): ";
        cin >> x >> y;

        // �������� ���������
        if (board[x][y] == 'S' || board[x][y] == 'D')
        {
            cout << "���������!" << endl;
            board[x][y] = 'X';
        }
        else
        {
            cout << "������!" << endl;
            board[x][y] = 'O';
        }

        // ����� ������������ �������� ����
        printBoard(board);
    }

    return 0;
}