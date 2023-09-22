// � ����� ����������� ���������� (������������ �����, �����-�����) �����:

// 1) ���������� ��� ������ ����������� ���������� �++
#include <iostream>
#include <string>
#include <conio.h>
#include <ctime>
#include <windows.h>
#include <cmath>
#include <vector>
using namespace std;

// 2) ��������� ������������
enum Colors { BLACK, DARKBLUE, DARKGREEN, DARKCYAN, DARKRED, DARKMAGENTA, DARKYELLOW, GREY, DARKGREY, BLUE, GREEN, CYAN, RED, MAGENTA, YELLOW, WHITE };
enum Keys { LEFT = 75, RIGHT = 77, UP = 72, DOWN = 80, ENTER = 13, ESCAPE = 27, SPACE = 32 };

// 3) ��������� ���������� ���������� ��� ��������� (������ ��� ����� ������������)
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

// 4) ���������� ���� ����������� ������� (� ����� ����������)
void SetCursor(int x, int y, Colors color, string text)
{
	COORD position;
	position.X = x;
	position.Y = y;
	SetConsoleCursorPosition(h, position);
	SetConsoleTextAttribute(h, color);
	cout << text;
	cout << "\n";
}