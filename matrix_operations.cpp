#include <stdlib.h>
#include <iostream>
#include <vector> // for 2D vector
#include <stdbool.h>

using namespace std;

void enterElements(vector<vector<int> > &a, vector<vector<int> > &b);
void printMatrix(vector<vector<int> > matrix);

int main()
{
    int m, n, o, p, i, j, operation;
    bool l = true;

    cout << "Enter the operation:\n";
    cout << "1 - Addition\n2 - Subtraction\n3 - Multiplication\n";
    cout << ">> ";
    cin >> operation;
    cout << endl;

    cout << "Enter the order of matrix a (must be m*n): " << endl;
    cin >> m;
    cout << "* \n";
    cin >> n;
    cout << "Enter the order of matrix b (must be o*p): " << endl;
    cin >> o;
    cout << "* \n";
    cin >> p;

    vector<vector<int> > a(m, vector<int>(n)), b(o, vector<int>(p)), c(m, vector<int>(p));

    switch (operation)
    {
    //ADDITION
    case 1:
        if (m == o && n == p)
        {
            cout << "Addition possible " << endl;
        }
        else
        {
            cout << "Addition not possible ";
            l = false;
        }

        if (l)
        {
            enterElements(a, b);
            cout << "\n\n\nAddition:\nc=a+b=";
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }
            }
            printMatrix(c);
        }
        break;

    //SUBTRACTION
    case 2:
        if (m == o && n == p)
        {
            cout << "Subtracion possible " << endl;
        }
        else
        {
            cout << "Subtraction not possible ";
            l = false;
        }

        if (l)
        {
            enterElements(a, b);
            cout << "\n\n\nSubtraction:\nc=a-b=";
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    c[i][j] = a[i][j] - b[i][j];
                }
            }
            printMatrix(c);
        }
        break;

    //MULTIPLICATION
    case 3:
        if (n == o)
        {
            cout << "Multiplication possible " << endl;
        }
        else
        {
            cout << "Multiplication not possible ";
            l = false;
        }

        if (l)
        {
            enterElements(a, b);
            cout << "\n\n\nMultiplication:\nc=aXb=";
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < p; j++)
                {
                    c[i][j] = 0;
                    for (int k = 0; k < n; k++)
                    {
                        c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                    }
                }
            }
            printMatrix(c);
        }
        break;
    // default case
    default:
        cout << "Wrong choice";
    }
    cout << endl;
    return 0;
};

void enterElements(vector<vector<int> > &a, vector<vector<int> > &b)
{
    int i, j;
    cout << "\n\nEnter the elements of matrix 1: " << endl;
    for (i = 0; i < a.size(); i++)
    {
        for (j = 0; j < a[i].size(); j++)
            cin >> a[i][j];
    }
    cout << "Elements of matrix 1 are: ";
    printMatrix(a);
    cout << "\nEnter the elements of matrix 2: " << endl;
    for (i = 0; i < b.size(); i++)
    {
        for (j = 0; j < b[i].size(); j++)
            cin >> b[i][j];
    }
    cout << "Elements of matrix 2 are: ";
    printMatrix(b);
};

void printMatrix(vector<vector<int> > matrix)
{
    int i, j;
    for (i = 0; i < matrix.size(); i++)
    {
        cout << endl;
        for (j = 0; j < matrix[i].size(); j++)
            cout << matrix[i][j] << " ";
    }
}