#include <iostream>
#include <fstream>

using namespace std;


void mul(string path1, string path2, string path3, int row, int col)
{
	ifstream fin;
	fin.open(path1);

	int** a = new int* [row];
	for (int i = 0; i < row; i++)
	{
		a[i] = new int[col];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fin >> a[i][j];
		}
	}
	fin.close();

	ifstream fin2;
	fin2.open(path2);

	int** b = new int* [row];
	for (int i = 0; i < row; i++)
	{
		b[i] = new int[col];
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			fin2 >> b[i][j];
		}
	}
	fin2.close();

	clock_t start;
	start = clock();
	int** c = new int* [row];
	for (int i = 0; i < row; i++)
	{
		c[i] = new int[col];
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < col; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	};
	cout << "Время: " << double(clock() - start / CLOCKS_PER_SEC) << "мс\n" << endl;

	ofstream fout;
	fout.open(path3);
	if (fout.is_open())
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				fout << c[i][j] << " ";
			}
			fout << "\n";
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Rus");

	mul("D:\\1_3.txt", "D:\\2_3.txt", "D:\\res_3.txt", 3, 3);
	mul("D:\\1_10.txt", "D:\\2_10.txt", "D:\\res_10.txt", 10, 10);
	mul("D:\\1_100.txt", "D:\\2_100.txt", "D:\\res_100.txt", 100, 100);

	return 0;
}