#include<iostream>
#include<conio.h>
#include"help.h"
void Circle(int x1, int y1, int state)
{
	if (state == 0)
		myEllipse(x1 + 7, y1 + 3, x1 + 40, y1 + 35, 194, 75, 11, 194, 75, 11);
	else if (state == 1)
		myEllipse(x1 + 7, y1 + 3, x1 + 40, y1 + 35, 194, 2, 2, 194, 73, 11);
	else if (state == 2)
		myEllipse(x1 + 7, y1 + 3, x1 + 40, y1 + 35, 7, 31, 194, 194, 75, 11);
}
void Rectangle(int x1, int y1, int state)
{
	if (state == 0)
		myRectangle(x1 + 7, y1 + 3, x1 + 40, y1 + 35, 26, 195, 127, 26, 194, 127);
	else if (state == 1)
		myRectangle(x1 + 7, y1 + 3, x1 + 40, y1 + 35, 194, 2, 2, 26, 194, 127);
	else if (state == 2)
		myRectangle(x1 + 7, y1 + 3, x1 + 40, y1 + 35, 7, 31, 194, 26, 194, 127);
}
void Triangle(int x1,int y1,int state)
{
	float X1 = (2 * x1 + 45) / 2, X2 = X1;
	int Y = y1 + 4;
	for (int i = 1; i <= 15; i++)
	{
		myLine(X1, Y, X2, Y, 39, 194, 22);
		X1--; X2++; Y++;
	}
	if (state == 0)
	{
		myLine((X1 + X2) / 2, y1, X1, Y, 140, 29, 96);
		myLine((X1 + X2) / 2, y1, X2, Y, 140, 29, 96);
		myLine(X1, Y, X2, Y, 140, 29, 96);
	}
	if (state == 1)
	{
		myLine((X1 + X2) / 2, y1, X1, Y, 194, 2, 2);
		myLine((X1 + X2) / 2, y1, X2, Y, 194, 2, 2);
		myLine(X1, Y, X2, Y, 194, 2, 2);
	}
	if (state == 2)
	{
		myLine((X1 + X2) / 2, y1, X1, Y, 7, 31, 194);
		myLine((X1 + X2) / 2, y1, X2, Y, 7, 31, 194);
		myLine(X1, Y, X2, Y, 7, 31, 194);
	}
}
void Diamond(int x1 , int y1, int state)
{
	float X1 = (2 * x1 + 45) / 2, X2 = X1;
	int Y = y1 + 4;
	for (int i = 1; i <= 15; i++)
	{
		myLine(X1, Y, X2, Y, 39, 194, 22);
		X1--; X2++; Y++;
	}
	float X3 = X1, X4 = X2;
	for (int i = 1; i <= 15; i++)
	{
		myLine(X1, Y, X2, Y, 39, 194, 22);
		X1++; X2--; Y++;
	}
	if (state == 0)
	{
		myLine(X1, Y - 30, X3, Y - 15, 39, 194, 22);
		myLine(X3, Y - 15, X1, Y, 39, 194, 22);
		myLine(X1, Y - 30, X4, Y - 15, 39, 194, 22);
		myLine(X4, Y - 15, X1, Y, 39, 194, 22);
	}
	else if (state == 1)
	{
		myLine(X1, Y - 30, X3, Y - 15, 194, 2, 2);
		myLine(X3, Y - 15, X1, Y, 194, 2, 2);
		myLine(X1, Y - 30, X4, Y - 15, 194, 2, 2);
		myLine(X4, Y - 15, X1, Y, 194, 2, 2);
	}
	else if (state == 2)
	{
		myLine(X1, Y - 30, X3, Y - 15, 7, 31, 194);
		myLine(X3, Y - 15, X1, Y, 7, 31, 194);
		myLine(X1, Y - 30, X4, Y - 15, 7, 31, 194);
		myLine(X4, Y - 15, X1, Y, 7, 31, 194);
	}
}
void Hexagon(int x1,int y1,int state)
{
	int Y = y1;
	float X1 = (2 * x1 + 45) / 2, X2 = X1;
	for (int i = 1; i <= 10; i++)
	{
		myLine(X1, Y, X2, Y, 219, 212, 25);
		X1--; X2++; Y++;
	}
	float X3 = X1, X4 = X2;
	int Y2 = Y;
	for (int i = 1; i <= 15; i++)
	{
		myLine(X1, Y2, X2, Y2, 219, 212, 25);
		Y2++;
	}
	int Y3 = Y2;
	for (int i = 1; i <= 10; i++)
	{
		myLine(X3, Y3, X4, Y3, 219, 212, 25);
		X3++; X4--; Y3++;
	}
	if (state == 0)
	{
		myLine(X3, y1, X1, Y, 219, 212, 25);
		myLine(X3, y1, X2, Y, 219, 212, 25);
		myLine(X1, Y, X1, Y2, 219, 212, 25);
		myLine(X2, Y, X2, Y2, 219, 212, 25);
		myLine(X1, Y2, X3, Y3, 219, 212, 25);
		myLine(X2, Y2, X3, Y3, 219, 212, 25);
	}
	else if (state == 1)
	{
		myLine(X3, y1, X1, Y, 194, 2, 2);
		myLine(X3, y1, X2, Y, 194, 2, 2);
		myLine(X1, Y, X1, Y2, 194, 2, 2);
		myLine(X2, Y, X2, Y2, 194, 2, 2);
		myLine(X1, Y2, X3, Y3, 194, 2, 2);
		myLine(X2, Y2, X3, Y3, 194, 2, 2);
	}
	else if (state == 2)
	{
		myLine(X3, y1, X1, Y, 7, 31, 194);
		myLine(X3, y1, X2, Y, 7, 31, 194);
		myLine(X1, Y, X1, Y2, 7, 31, 194);
		myLine(X2, Y, X2, Y2, 7, 31, 194);
		myLine(X1, Y2, X3, Y3, 7, 31, 194);
		myLine(X2, Y2, X3, Y3, 7, 31, 194);
	}
}
void Printingboard(int arr[][8])
{
	float x = 100;
	int y = 50;
	for (int i = 1; i < 9; i++)
	{
		x = 100;
		for (int j = 1; j < 9; j++)
		{
			myRectangle(x, y, x + 50, y + 40, 117, 101, 122, 117, 101, 122);
			if (arr[i][j] == 0)
				Circle(x, y, 0);
			else if (arr[i][j] == 1)
				Rectangle(x, y, 0);
			else if (arr[i][j] == 2)
				Diamond(x, y, 0);
			else if (arr[i][j] == 3)
				Triangle(x, y, 0);
			else if (arr[i][j] == 4)
				Hexagon(x, y, 0);
			else if (arr[i][j] == 5)
				Circle(x, y, 1);
			else if (arr[i][j] == 6)
				Rectangle(x, y, 1);
			else if (arr[i][j] == 7)
				Diamond(x, y, 1);
			else if (arr[i][j] == 8)
				Triangle(x, y, 1);
			else if (arr[i][j] == 9)
				Hexagon(x, y, 1);
			else if (arr[i][j] == 10)
				Circle(x, y, 2);
			else if (arr[i][j] == 11)
				Rectangle(x, y, 2);
			else if (arr[i][j] == 12)
				Diamond(x, y, 2);
			else if (arr[i][j] == 13)
				Triangle(x, y, 2);
			else if (arr[i][j] == 14)
				Hexagon(x, y, 2);
			x += 100;
		}
		y += 50;
	}
}
bool SameVal(int arr[][8])
{
	bool same = 0;
	for (int i = 1; i < 9 && same == 0; i++)
	{
		for (int j = 1; j < 7 && same == 0; j++)
		{
			if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2])
				same = 1;
		}
	}
	for (int i = 1; i < 7 && same == 0; i++)
	{
		for (int j = 1; j < 9 && same == 0; j++)
		{
			if (arr[i][j] == arr[i + 1][j]&& arr[i][j] == arr[i + 2][j])
				same = 1;
		}
	}
	return same;
}


int main()
{
	//printing the grid
	myRectangle(100, 50, 900, 450, 225, 255, 255, 117, 101, 122);
	for (int i = 200; i <= 900; i = i + 100) {
		myLine(i, 50, i, 450, 255,255,255);
	}
	for (int i = 100; i <=450; i = i + 50) {
		myLine(100,i, 900, i, 255,255,255);
	}
	int arr[8][8];
}