#include<iostream>
using namespace std;
class Matrix
{
	int** mat;
	int row;
	int col;
public:
	Matrix(int r, int c)
	{

		row = r;
		col = c;

		mat = new int* [r];
		for (int i = 0; i < r; i++)
		{
			mat[i] = new int[c];
		}


	}
	void input()
	{
		cout << "Enter the data into " << row << " x " << col << " : " << endl;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{

				cin >> mat[i][j];
			}
		}


	}
	void display()
	{
		cout << "THE MATRIX :\n";

		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{

				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
	}
	void sum_mat()
	{
		int sum = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{

				sum+= mat[i][j] ;
			}
		}
		cout << "The sum of Matrix is :" << sum <<endl;
	}
	

	void sum_row()
	{
		int sum = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{

				sum += mat[i][j];
			}
			cout << "The sum of row " << i + 1 << " : " << sum << endl;
			sum = 0;
		}

	}
	void sum_col()
	{
		int *sum  = new int [col];

		for (int i = 0; i < col; i++)
		{
			sum[i] = 0;
		}
		
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{

				sum[j] += mat[i][j];
			}
			
		}

		for (int i = 0; i < col; i++)
		{
			cout << "Sum of col " << i + 1 << " :" << sum[i] << endl;

		}
	
	}


	void tranpose()

	{
		
		int** temp = new int*[col];
		for (int i = 0; i < col; i++)
		{
			temp[i] = new int[row];
			for (int j = 0; j < row; j++)

			{
				  temp[i][j] = mat[j][i];
			}
		}
		for (int i = 0; i < col; i++)
		{
			for (int j = 0; j < row; j++)

			{
				cout <<temp[i][j] << " ";
			}
			cout << endl;
		}
	}
	
};
int  main()
{
	cout << "Enter the row and columns for matrix respectively\n";
	int r, c;
	cin >> r >> c;
	Matrix ob(r, c);
	int ch = 0;

	bool che = true;
	cout << "Menu for operation of matrix : \n 1.input \n2.display\n 3.sum column wise\n 4. sum of all Matrix \n 5. sum row wise \n 6. Tranpose\n 7.  to quit\n";
	while (che)
	{
		cout << "Select th option :\n";
		cin >> ch;
		switch (ch)
		{
		case 1:
			ob.input();
			break;
		case 2:
			ob.display();
			break;
		case 3:
			ob.sum_col();
			break;
		case 4:
			ob.sum_mat();
			break;
		case 5:
			ob.sum_row();
			break;
		case 6:
			ob.tranpose();
			break;
		case 7: 
			che = false;
			break;
		}
		

	}


}