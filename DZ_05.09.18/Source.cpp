#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;




int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int n = 0;
start:
	cout << "������� ����� �������: ";
	cin >> n;

	if (n == 1)
	{
		cout << "1.	�������� ���������, ������� ������� �� ����������� �������, ������������ ���������� ������� ������, ���������� ������� ��������." << endl;

		int **p;
		int n, m;
		int k = 0;
		cin >> n >> m;
		p = new int*[n];

		for (int i = 0; i < n; i++)
		{
			p[i] = new int[m];
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				p[i][j] = 0 + rand() % 10;
				cout << setw(3) << p[i][j];
			}
			cout << endl;
		}

		int n1 = n;
		for (int pass = 0; pass < n - 1; pass++)
		{


			for (int i = 0; i < n - 1; i++)
			{

				for (int j = 0; j < m; j++)
				{


					if (p[i][j] == 0)
					{
						
						swap(p[i], p[i + 1]);
						//cout << n1 << " ";
						break;
						
					}

				}
			}
		}
		cout << endl;

		for (int i = 0; i < n; i++)
		{

			for (int j = 0; j < m; j++)
			{


				if (p[i][j] == 0)
				{
					k++;
					n1--;
					break;

				}
			}
		}
		cout << n1 << " " << k << endl;

		for (int i = n-1; i >= n-k; i--)
		{
			delete[] p[i];
		}

		for (int i = 0; i < n1; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << setw(3) << p[i][j];
			}
			cout << endl;
		}
		cout << endl;


		/*for (int i = k; i < n1; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << setw(3) << p[i][j];
			}
			cout << endl;
		}
		cout << endl;*/

	}

	else if (n == 2)
	{
		cout << "2.	�������� ���������, ������� ����������� ��������� ��� ������������ ��������� �������, ����������� ���������� ������� � ��������� ��������� � ������� �������. ������� �������� ��������  �������� �������������." << endl;

		int **a;
		int **b;
		int n = 3, m = 4;
		int c = 3, d = 4;
		/*cout << "������� ������ ��� ������� �������: ";
		cin >> n >> m;
		cout << "������� ������ ��� ������� �������: ";
		cin >> c >> d;
*/
		a = new int*[n];
		b = new int*[c];

		for (int i = 0; i < n; i++)
		{
			a[i] = new int[m];
		}
		for (int i = 0; i < c; i++)
		{
			b[i] = new int[d];
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				a[i][j] = 1 + rand() % 10;
				cout << setw(3) << a[i][j];
			}
			cout << endl;
		}
		cout << endl;
		for (int i = 0; i < c; i++)
		{
			for (int j = 0; j < d; j++)
			{
				b[i][j] = 1 + rand() % 10;
				cout << setw(3) << b[i][j];
			}
			cout << endl;
		}
		cout << endl;

		int **New;
		int f = 3, q = 4;
		//cin >> f >> q;
		New = new int*[f];
		for (int i = 0; i < f; i++)
		{
			New[i] = new int[q];
		}
		for (int i = 0; i < f; i++)
		{
			for (int j = 0; j < q; j++)
			{
				New[i][j] = a[i][j] + b[i][j];
				cout << setw(3) << New[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}

	else if (n == 3)
	{
		cout << "3.	�������� ������������ ������, �������� � ������ ������ ���������������� �����, � �� ������ - �������. ����������� ����� �� ID � �� ������ �������� � ����������� ����� � ��������� ������." << endl;
		int **p;
		int n = 4, m = 2;
		p = new int*[n];
		for (int i = 0; i < n; i++)
		{
			p[i] = new int[m];
		}
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				p[i][j] = 1 + rand() % 20;
			}
		}
		cout << endl;
		cout << "  ID   �������\n";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cout << setw(5) << p[i][j];
			}
			cout << endl;
		}

		int key, number;
		cout << "������� ID : ";
		cin >> key;
		cout << "������� ����� �������� : ";
		cin >> number;
		cout << "\n";
		for (int i = 0; i < n; i++)
		{
			if (*p[i] == key)
				for (int j = 0; j < m; j++)
				{
					if (*p[j] == number)
					{
						cout << '+' << endl;
					}
				}
		}


	}

	goto start;
	system("pause");
	return 0;
}




