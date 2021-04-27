#include <iostream>

int N;
int** array;

int DispPlayField();			//������� ������� ����
int** alloc_array();			//��������� ������ ��� ��� ����
int GetStatePF();				//�������� ������ ��� ����
bool checkmaindiag();			//�������� ���������
bool checkcolldiag();			//�������� ���������
bool checkhorline();			//�����������
bool checkvertdiag();			//���������
bool checkempty();				//������ ����������
int Move(int player);						// ������ ����
bool CheckMove(int x,int y);	// �������� ������������ �����



enum CellState {
	Empty,
	X,
	O
};
enum PlayFieldState {
	InGame,
	Draw,
	Won
};
enum Player {
	XP,
	OP
}player;



int main() {
	player = OP;
	std::cout << "Enter the size of the playing field: ";
	std::cout << "> ";
	std::cin >> N;
	array = alloc_array();
	/*---------------------------------*/
	do {
		player = ((player == XP) ? OP : XP);
		system("cls");
		DispPlayField();
		std::cout << "Player "<< player+1 << " turn" << std::endl;
		Move(player);
		system("cls");
		DispPlayField();
	} while (GetStatePF() == PlayFieldState::InGame);
	
	if ((GetStatePF()) == Won)
		std::cout << "Player " << player+1 << " win!!!\n";
	else
		std::cout << "Player" << player + 1 << " win!!!\n";

	for (int i = 0; i < N; i++)
		delete[] array[i];
	delete[] array;

	return 0;
}
	/*array[N / 2][N / 2] = X;
	array[N / 2+1][N / 2] = O;
	array[0][0] = X;
	array[1][1] = X;
	array[0][2] = X;
	array[3][0] = X;
	array[4][0] = O;*/

int** alloc_array() {
	int** a;
	a = new int* [N] {};
	for (int i = 0; i < N; i++)
		a[i] = new int[N] {};
	return a;
}
int DispPlayField() {
	std::cout << "+";
	for (int i(0);i<(N*4-1);i++)
		std::cout << '-';
	std::cout << "+\n" ;
	
	//char str[] = "-";
	//printf("%*s*\n", (N*3));
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			//std::cout << ' ';
			//std::cout << s array[i][j];
			switch (array[i][j]) {
				case 0: std::cout << "| " << '.' << " "; break;
				case 1: std::cout << "| " << 'X' << " "; break;
				case 2: std::cout << "| " << 'O' << " "; break;
			}
		

		}
		std::cout <<'|' << std::endl;
		std::cout << "+";
		for (int i(0); i < (N * 4 - 1); i++)
			std::cout << '-';
		std::cout << "+\n";
	}

	/*for (int i(0); i < (N *  + 1); i++)
		std::cout << '-';*/
	
	/*std::cout << '+';
	for (int i(0); i < (N * 4 - 1); i++)
		std::cout << '-';
	std::cout << '+' << std::endl;*/

	std::cout << std::endl;
	return 0;
}
bool checkmaindiag() {
	int s = array[0][0];
		for (int i(1); i < N; i++) {
			if ((s == 0) || (s != array[i][i]))
				return false;
		}
		return true;
}
bool checkcolldiag() {
	int s = array[0][N-1];
	for (int i(N-2); i >= 0; i--) {
		if ((s == 0) || (s != array[N-1-i][i]))
			return false;
	}
	return true;


}
bool checkhorline() {
	
	for (int i(0); i < N; i++) {
		int s = array[i][0];
		int temp = 1;
		for (int j(1); j < N; j++) {
			if ((s == 0)|| (s != array[i][j]))
				break;
			temp++;
		}
		if (temp == N)
			return 1;
	}
	return 0;
}
bool checkvertdiag() {
	for (int j(0); j < N; j++) {
		int temp = 1;
		int s = array[0][j];
		for (int i(1); i < N; i++) {
			if ((s==0) || (s != array[i][j]))
				break;
			temp++;
			if (temp == N)
				return 1;
		}
	}
	return 0;


}
bool checkempty() {
	for (int i(0); i < N; i++) {
		for (int j(0); j < N; j++) {
			if (array[i][j] == Empty)
				return false;
		}
	}
	return true;
}
int GetStatePF() {
	bool md = 0, cd = 0, hl = 0, vl = 0,e=0;
	md = checkmaindiag();	//������� ���������
	cd = checkcolldiag();	//�������� ���������
	hl = checkhorline();	//�����������
	vl = checkvertdiag();	//���������
	e = checkempty();		//���� ��������� ���������
	if (e == true) {
		return Draw;
	}
	if (md || cd || hl || vl)
		return Won;

	if (!md && !cd && !hl && !vl && !e)
		return InGame;
	return Draw;
};
int Move(int player) {
	int x, y;
	do {
		std::cout << "Enter your move:" << std::endl;
		std::cout << "x >";
		std::cin >> y;
		std::cout << "y >";
		std::cin >> x;
		x--; y--;
		if (CheckMove(x, y) == false)
			std::cout << "Error!" << std::endl;
	} while (CheckMove(x, y) != true);
	array[x][y] = (player == XP)? X:O;
	return 0;
}
bool CheckMove(int x, int y) {
	if (x < 0 || x >= N || y < 0 || y >= N)
		return 0;
	if (array[x][y] != Empty)
		return 0;
	return 1;
}