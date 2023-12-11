#include<iostream>
using namespace std;
void interface()
{ 
	int choice = 0, player1 = 0, player2;
	char a = ' ', b = ' ', c = ' ', d = ' ', e = ' ', f = ' ', g = ' ', h = ' ', i = ' ';
	cout << " \t Tic-Tac-Toe" << endl;
	cout << "          |          |          " << endl;
	cout << " " << a << " " << "\t  |" << " " << b << " " << "\t     |" << " " << c << " " << endl;
	cout << "__________|__________|__________" << endl;
	cout << "          |          |          " << endl;
	cout << " " << d << " " << "\t  |" << " " << e << " " << "\t     |" << " " << f << " " << endl;
	cout << "__________|__________|__________" << endl;
	cout << "          |          |          " << endl;
	cout << " " << g << " " << "\t  |" << " " << h << " " << "\t     |" << " " << i << " " << endl;
	cout << "          |          |          " << endl;

	for (choice = 1; choice < 10; choice++)
	{
		cout << "Player 1 Please Enter Your Box Number : \t";
		cin >> player1;

		switch (player1)
		{
		case 1: a = 'X';  break;
		case 2: b = 'X';  break;
		case 3: c = 'X';  break;
		case 4: d = 'X';  break;
		case 5: e = 'X';  break;
		case 6: f = 'X';  break;
		case 7: g = 'X';  break;
		case 8: h = 'X';  break;
		case 9: i = 'X';  break;
		default:
			cout << "Invalid Box Number";
			choice--;
			continue;
		}
		cout << "          |          |          " << endl;
		cout << " " << a << " " << "\t  |" << " " << b << " " << "\t     |" << " " << c << " " << endl;
		cout << "__________|__________|__________" << endl;
		cout << "          |          |          " << endl;
		cout << " " << d << " " << "\t  |" << " " << e << " " << "\t     |" << " " << f << " " << endl;
		cout << "__________|__________|__________" << endl;
		cout << "          |          |          " << endl;
		cout << " " << g << " " << "\t  |" << " " << h << " " << "\t     |" << " " << i << " " << endl;
		cout << "          |          |          " << endl;
		//checking for player 1
		if ((a == 'X' && b == 'X' && c == 'X') || (d == 'X' && e == 'X' && f == 'X') || (g == 'X' && h == 'X' && i == 'X')
			|| (a == 'X' && d == 'X' && g == 'X') || (b == 'X' && e == 'X' && h == 'X') || (c == 'X' && f == 'X' && i == 'X') ||
			(a == 'X' && e == 'X' && i == 'X') || (c == 'X' && e == 'X' && g == 'X'))
		{
			cout << "Player 1 Wins!";
			break;
		}
		//draw case
		if (choice >= 5)
		{
			cout << "Game is Draw!";
			break;
		}

		cout << "Player 2 Please Enter Your Box Number : \t";
		cin >> player2;

		switch (player2)
		{
		case 1: a = 'O';  break;
		case 2: b = 'O';  break;
		case 3: c = 'O';  break;
		case 4: d = 'O';  break;
		case 5: e = 'O';  break;
		case 6: f = 'O';  break;
		case 7: g = 'O';  break;
		case 8: h = 'O';  break;
		case 9: i = 'O';  break;
		default:
			cout << "Invalid Box Number";
			choice--;
			continue;
		}
		cout << "          |          |          " << endl;
		cout << " " << a << " " << "\t  |" << " " << b << " " << "\t     |" << " " << c << " " << endl;
		cout << "__________|__________|__________" << endl;
		cout << "          |          |          " << endl;
		cout << " " << d << " " << "\t  |" << " " << e << " " << "\t     |" << " " << f << " " << endl;
		cout << "__________|__________|__________" << endl;
		cout << "          |          |          " << endl;
		cout << " " << g << " " << "\t  |" << " " << h << " " << "\t     |" << " " << i << " " << endl;
		cout << "          |          |          " << endl;

		//check for player 2
		if ((a == 'O' && b == 'O' && c == 'O') || (d == 'O' && e == 'O' && f == 'O') || (g == 'O' && h == 'O' && i == 'O')
			|| (a == 'O' && d == 'O' && g == 'O') || (b == 'O' && e == 'O' && h == 'O') || (c == 'O' && f == 'O' && i == 'O') ||
			(a == 'O' && e == 'O' && i == 'O') || (c == 'O' && e == 'O' && g == 'O'))
		{
			cout << "Player 2 Wins!";
			break;
		}

	}
	
}

int main()
{
	interface();
	return 0;
}

	
