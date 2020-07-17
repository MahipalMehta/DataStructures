#include<iostream>
using namespace std;
class matrix
{
	public:
	int mat1[20][20],mat2[20][20],mat3[20][20],mat4[20][20],mat5[20][20],mat6[20][20];
	int i,j,count,n;
	void get2();
	void get1();
	void addition();
	void sub();
	void trans();
	void multi();
       void sumdiag();
	void upper();
};
void matrix::get2()   	//get 2 matrices
{

cout<<"Enter order of matrix : ";
  cin>>n;
	cout<<"\n Matrix A\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter element for["<<i<<"]["<<j<<"]: ";
			cin>>mat1[i][j];
		}
	cout<<"\n";
	}
	cout<<"\nMatrix B\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter element for["<<i<<"]["<<j<<"]: ";
			cin>>mat2[i][j];
		}
	cout<<"\n";
	}
	cout<<"\nMatrix A\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<mat1[i][j];
		}
	cout<<"\n";
	}
	cout<<"\nMatrix B\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<mat2[i][j];
		}
	cout<<"\n";
	}
}
void matrix::get1()   //get 1 matrix
{
cout<<"Enter order of matrix n : ";
cin>>n;
	cout<<"\nMatrix D\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter element for["<<i<<"]["<<j<<"]: ";
			cin>>mat4[i][j];
		}
	cout<<"\n";
	}
	cout<<"\nMatrix D\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<mat4[i][j];
		}
	cout<<"\n";
	}


}
void matrix::addition()      //aadition of matrices
{
	cout<<"\nAddition:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			mat3[i][j]=mat1[i][j]+mat2[i][j];
			cout<<"\t"<<mat3[i][j];
		}
	cout<<"\n";
	}
}
void matrix::sub()   //subtraction of matrices
{
	cout<<"\nSubtraction:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			mat4[i][j]=mat1[i][j]-mat2[i][j];
			cout<<"\t"<<mat4[i][j];
		}
	cout<<"\n";
	}
}
void matrix::trans()    // transpose
{
	cout<<"\nTranspose is: \n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			mat3[j][i]=mat4[i][j];
			cout<<"\t"<<mat3[i][j];
		}
	cout<<"\n";
	}
}
void matrix::sumdiag()   //sum of diagonals
{
int sum=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
			sum=sum+mat4[i][j];
			}
		}
	}
cout<<"Sum of diagonal elements is:"<<sum;
}
void matrix::multi()    //multiplication
{
	int j,i,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			mat5[i][j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
			mat5[i][j]=mat5[i][j]+mat1[i][k]*mat2[k][j];
			}
		}
	}
	cout<<"\nMultiplication:\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"\t"<<mat5[i][j];

		}
	cout<<"\n";
	}
}

void matrix::upper()   //upper triangular
{
int count=0,m,n;
cout<<"\n";
cout<<"Enter order of matrix n : ";
cin>>n;
	cout<<"\nMatrix D\n";
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"Enter element for["<<i<<"]["<<j<<"]: ";
			cin>>mat4[i][j];
		}
	cout<<"\n";
	}

	m=(n*(n-1))/2;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i>j)
			{
				if(mat4[i][j]==0)
				{ count++;}
			}


		}
	}

	if(count==m)
	{cout<<"Given matrix is Upper Triangular Matrix\n";}
	else
	{cout<<"Given matrix is not a Upper Triangular Matrix\n";}
}
int main()
{
matrix  m;
int ch;

	cout<<"\nYou have following choices : ";
	cout<<"\n1.Check whether entered matrix is upper triangular\n2.Addition , Subtraction and Multiplication of two matrices\n3.Transpose of a matrix\n4.Sum of Diagonals\n";
	cout<<"\nEnter your choice : ";
	cin>>ch;
	switch(ch)
	{
		case 1:
		m.upper();
		break;
		case 2:m.get2();
		m.addition();
		m.sub();
		m.multi();
		break;
	      case 3:m.get1();
		m.trans();
		break;
		case 4:m.get1();
		m.sumdiag();
		break;

	}

return 0;
}

output-
You have following choices : 
1.Check whether entered matrix is upper triangular
2.Addition , Subtraction and Multiplication of two matrices
3.Transpose of a matrix
4.Sum of Diagonals

Enter your choice : 1

Enter order of matrix n : 2

Matrix D
Enter element for[0][0]: 1
Enter element for[0][1]: 8
Enter element for[1][0]: 0
Enter element for[1][1]: 3

Given matrix is Upper Triangular Matrix


You have following choices : 
1.Check whether entered matrix is upper triangular
2.Addition , Subtraction and Multiplication of two matrices
3.Transpose of a matrix
4.Sum of Diagonals

Enter your choice : 2
Enter order of matrix : 2

 Matrix A
Enter element for[0][0]: 1
Enter element for[0][1]: 1
Enter element for[1][0]: 2
Enter element for[1][1]: 2

Matrix B
Enter element for[0][0]: 3
Enter element for[0][1]: 3
Enter element for[1][0]: 4
Enter element for[1][1]: 4

Matrix A
	1	1
	2	2
Matrix B
	3	3
	4	4
Addition:
	4	4
	6	6
Subtraction:
	-2	-2
	-2	-2
Multiplication:
	7	7
	14	14

