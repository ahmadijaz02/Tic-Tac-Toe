#include <iostream>
using namespace std;

class TicTacToe {
private:
	char arr[3][3] = { '1','2','3','4','5','6','7','8','9' }, ch = '0';
	bool turn = false, draw = false;
public:
	void board(char arr[3][3]);
	void input1(char board[3][3], char ch);
	void input2(char board[3][3], char ch);
	void condition(char board[3][3], bool& turn, bool& draw);
	void start();
};
// Main Function
int main() {
	TicTacToe game;
	game.start();
	return 0;
}


void TicTacToe::start() {
	board(arr);

	while (!turn)
	{
		input1(arr, ch);
		board(arr);
		condition(arr, turn, draw);

		//Player 2 Turn
		if (!turn)
		{
			input2(arr, ch);
			board(arr);
			condition(arr, turn, draw);
		}
	}
};

void TicTacToe::board(char arr[3][3]) {
	system("CLS");
	cout << "   Tic Tac Toe\n\n";
	cout << "Player1(X) - Player2(O) \n\n";

	cout << "     |     |     " << endl;
	cout << "  " << arr[0][0] << "  |  " << arr[0][1] << "  |  " << arr[0][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << arr[1][0] << "  |  " << arr[1][1] << "  |  " << arr[1][2] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << arr[2][0] << "  |  " << arr[2][1] << "  |  " << arr[2][2] << endl;

	cout << "     |     |     " << endl << endl;
};

void TicTacToe::input1(char board[3][3], char ch) {
	bool wrong = true;
	do {
		cout << "Player 1 Entre Box Number For Mark.";
		cin >> ch;
		if (ch == board[0][0])
		{
			board[0][0] = 'X';  wrong = false;
		}
		else if (ch == board[0][1])
		{
			board[0][1] = 'X';  wrong = false;
		}
		else if (ch == board[0][2])
		{
			board[0][2] = 'X';  wrong = false;
		}
		else if (ch == board[1][0])
		{
			board[1][0] = 'X';  wrong = false;
		}
		else if (ch == board[1][1])
		{
			board[1][1] = 'X';  wrong = false;
		}
		else if (ch == board[1][2])
		{
			board[1][2] = 'X';  wrong = false;
		}
		else if (ch == board[2][0])
		{
			board[2][0] = 'X';  wrong = false;
		}
		else if (ch == board[2][1])
		{
			board[2][1] = 'X';  wrong = false;
		}
		else if (ch == board[2][2])
		{
			board[2][2] = 'X';  wrong = false;
		}
		else
		{
			cout << "The Box Is already filled" << endl;  cout << "Turn Again" << endl;  wrong = true;
		}
	} while (wrong);
};

void TicTacToe::input2(char board[3][3], char ch) {
	bool wrong = true;
	do {
		cout << "Player 2 Entre Box Number For Mark.";
		cin >> ch;
		if (ch == board[0][0])
		{
			board[0][0] = 'O';    wrong = false;
		}
		else if (ch == board[0][1])
		{
			board[0][1] = 'O';    wrong = false;
		}
		else if (ch == board[0][2])
		{
			board[0][2] = 'O';    wrong = false;
		}
		else if (ch == board[1][0])
		{
			board[1][0] = 'O';    wrong = false;
		}
		else if (ch == board[1][1])
		{
			board[1][1] = 'O';    wrong = false;
		}
		else if (ch == board[1][2])
		{
			board[1][2] = 'O';    wrong = false;
		}
		else if (ch == board[2][0])
		{
			board[2][0] = 'O';    wrong = false;
		}
		else if (ch == board[2][1])
		{
			board[2][1] = 'O';    wrong = false;
		}
		else if (ch == board[2][2])
		{
			board[2][2] = 'O';    wrong = false;
		}
		else
		{
			cout << "The Box Is already filled" << endl;  cout << "Turn Again" << endl;    wrong = true;
		}
	} while (wrong);
};

void TicTacToe::condition(char board[3][3], bool& turn, bool& draw) {
	char p1 = 'X', p2 = 'O';
	if (
		board[0][0] == p1 && board[0][0] == board[0][1] && board[0][1] == board[0][2] ||
		board[1][0] == p1 && board[1][0] == board[1][1] && board[1][1] == board[1][2] ||
		board[2][0] == p1 && board[2][0] == board[2][1] && board[2][1] == board[2][2] ||
		board[0][0] == p1 && board[0][0] == board[1][0] && board[1][0] == board[2][0] ||
		board[0][1] == p1 && board[0][1] == board[1][1] && board[1][1] == board[2][1] ||
		board[0][2] == p1 && board[0][2] == board[1][2] && board[1][2] == board[2][2] ||
		board[0][0] == p1 && board[0][0] == board[1][1] && board[1][1] == board[2][2] ||
		board[0][2] == p1 && board[0][2] == board[1][1] && board[1][1] == board[2][0]
		) {
		cout << "Congratulations \t Player 1 won the Game" << endl;
		turn = true;
		draw = true;
	}
	else if (
		board[0][0] == p2 && board[0][0] == board[0][1] && board[0][1] == board[0][2] ||
		board[1][0] == p2 && board[1][0] == board[1][1] && board[1][1] == board[1][2] ||
		board[2][0] == p2 && board[2][0] == board[2][1] && board[2][1] == board[2][2] ||
		board[0][0] == p2 && board[0][0] == board[1][0] && board[1][0] == board[2][0] ||
		board[0][1] == p2 && board[0][1] == board[1][1] && board[1][1] == board[2][1] ||
		board[0][2] == p2 && board[0][2] == board[1][2] && board[1][2] == board[2][2] ||
		board[0][0] == p2 && board[0][0] == board[1][1] && board[1][1] == board[2][2] ||
		board[0][2] == p2 && board[0][2] == board[1][1] && board[1][1] == board[2][0]
		)
	{
		cout << "Congratulations \t Player 2 won the Game" << endl;
		turn = true;
		draw = true;
	}
	else if (turn == false && board[0][0] != '1' && board[0][1] != '2' && board[0][2] != '3' && board[1][0] != '4' && board[1][1] != '5' && board[1][2] != '6' && board[2][0] != '7' && board[2][1] != '8' && board[2][2] != '9')
	{
		cout << "Match is Draw ";
		turn = true;
		draw = true;
	}
};