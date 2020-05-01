
#include <iostream>
using namespace std;
class TicTacToe
{
private:
    char matrix[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int choice, player = 1;
    int gameStatus;
    char mark;
    int checkForWin()
    {
        int returnValue = 0;

        if (matrix[1] == matrix[2] && matrix[2] == matrix[3])
        {
            returnValue = 1;
        }
        else if (matrix[4] == matrix[5] && matrix[5] == matrix[6])
            returnValue = 1;

        else if (matrix[7] == matrix[8] && matrix[8] == matrix[9])
            returnValue = 1;

        else if (matrix[1] == matrix[4] && matrix[4] == matrix[7])
            returnValue = 1;

        else if (matrix[2] == matrix[5] && matrix[5] == matrix[8])
            returnValue = 1;

        else if (matrix[3] == matrix[6] && matrix[6] == matrix[9])
            returnValue = 1;

        else if (matrix[1] == matrix[5] && matrix[5] == matrix[9])
            returnValue = 1;

        else if (matrix[3] == matrix[5] && matrix[5] == matrix[7])
            returnValue = 1;

        else if (matrix[1] != '1' && matrix[2] != '2' && matrix[3] != '3' &&
                 matrix[4] != '4' && matrix[5] != '5' && matrix[6] != '6' && matrix[7] != '7' && matrix[8] != '8' && matrix[9] != '9')
            returnValue = 0;
        else
            returnValue = -1;

        return returnValue;
    }
public:
    void ShowBoard()
    {

        cout << "\n\n \t"
             << "TIC TAC TOE BY NJ"
             << "\n\n";
        cout << "player 1(x)-player 2(o)" << endl
             << endl
             << endl;
        cout << "_____"
             << "___"
             << "______"
             << "__"
             << "______" << endl;
        cout << "|   "
             << "  | "
             << "    "
             << "   | "
             << "    |" << endl;
        cout << "|  " << matrix[1] << "  | "
             << "   " << matrix[2] << "   | "
             << "  " << matrix[3] << " |" << endl;

        cout << "|____"
             << "___"
             << "______"
             << "__"
             << "_____|" << endl;
        cout << "|  "
             << "   |  "
             << "   "
             << "   |  "
             << "   |" << endl;

        cout << "|  " << matrix[4] << "  | "
             << "   " << matrix[5] << "   | "
             << "  " << matrix[6] << " |" << endl;
        cout << "|____"
             << "___"
             << "______"
             << "__"
             << "_____|" << endl;
        cout << "|    "
             << " | "
             << "      "
             << " | "
             << "    |" << endl;

        cout << "|  " << matrix[7] << "  | "
             << "   " << matrix[8] << "   | "
             << "  " << matrix[9] << " |" << endl;

        cout << "|____"
             << "___"
             << "______"
             << "__"
             << "_____|" << endl;
    }

    void markboard(char mark)
    {
        if (choice == 1 && matrix[1] == '1')
            matrix[1] = mark;

        else if (choice == 2 && matrix[2] == '2')
            matrix[2] = mark;

        else if (choice == 3 && matrix[3] == '3')
            matrix[3] = mark;

        else if (choice == 4 && matrix[4] == '4')
            matrix[4] = mark;

        else if (choice == 5 && matrix[5] == '5')
            matrix[5] = mark;

        else if (choice == 6 && matrix[6] == '6')
            matrix[6] = mark;

        else if (choice == 7 && matrix[7] == '7')
            matrix[7] = mark;

        else if (choice == 8 && matrix[8] == '8')
            matrix[8] = mark;

        else if (choice == 9 && matrix[9] == '9')
            matrix[9] = mark;
        else
        {
            cout << "Invalid move ";

            player--;
        }
    }
public:
    void run()
    {
        do
        {
            ShowBoard();

            player = (player % 2) ? 1 : 2;

            cout << "Player " << player << " enter a number:";
            cin >> choice;

            mark = (player == 1) ? 'X' : 'O';

            markboard(mark);

            gameStatus = checkForWin();
            player++;

        } while (gameStatus == -1);

        if (gameStatus == 1)
        {
            cout << "==> Player " << player << " wins ";
        }
        else
            cout << "==> Game draw";
    }
};
int main()
{
    cout << "\n\ntic tac toe using class,c++\n\n";
    TicTacToe game;
    game.run();
    game.ShowBoard();

    return 0;
}
