using System;
class MatrixMultiplication
{
    int[,] a;
    int[,] b;
    int[,] c;
    public int m1, n1, m2, n2;
    public void ReadMatrix()
    {
        Console.WriteLine("\n Size of Matrix 1:");
        Console.Write("\n Enter the number of rows in Matrix 1 :");
        m1 = Convert.ToInt16(Console.ReadLine());
        Console.Write("\n Enter the number of columns in Matrix 1 :");
        n1 = Convert.ToInt16(Console.ReadLine());
        a = new int[m1, n1];
        Console.WriteLine("\n Size of Matrix 2 :");
        Console.Write("\n Enter the number of rows in Matrix 2 :");
        m2 = Convert.ToInt16(Console.ReadLine());
        Console.Write("\n Enter the number of columns in Matrix 2 :");
        n2 = Convert.ToInt16(Console.ReadLine());
        b = new int[m2, n2];
        if (n1 != m2)
        {
            Console.WriteLine("columns of A & Rows of B matrix are not equal");
            Console.ReadKey();
            Environment.Exit(0);
        }
        else
        {
            Console.WriteLine("\n Enter the elements of Matrix 1:");
            for (int i = 0; i < m1; i++)
            {
                for (int j = 0; j < n1; j++)
                {
                    a[i, j] = Convert.ToInt16(Console.ReadLine());
                }
            }
            Console.WriteLine("\n Enter the elements of Matrix 2:");
            for (int i = 0; i < m2; i++)
            {
                for (int j = 0; j < n2; j++)
                {
                    b[i, j] = Convert.ToInt16(Console.ReadLine());
                }
            }
        }
    }
    public void PrintMatrix()
    {
        Console.WriteLine("\n Matrix 1:");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                Console.Write("\t" + a[i, j]);
            }
            Console.WriteLine();
        }
        Console.WriteLine("\n Matrix 2:");
        for (int i = 0; i < m2; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                Console.Write("\t" + b[i, j]);
            }
            Console.WriteLine();
        }
        Console.WriteLine("\n Resultant Matrix after multiplying:");
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                Console.Write("\t" + c[i, j]);
            }
            Console.WriteLine();
        }
        Console.ReadLine();
    }
    public void MultiplyMatrix()
    {
        c = new int[m1, n2];
        for (int i = 0; i < m1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                c[i, j] = 0;
                for (int k = 0; k < n1; k++) c[i, j] = c[i, j] + a[i, k] * b[k, j];
            }
        }
    }
}
class Matrices
{
    public static void Main()
    {
        MatrixMultiplication MM = new MatrixMultiplication();
        MM.ReadMatrix();
        MM.MultiplyMatrix();
        MM.PrintMatrix();
    }
}