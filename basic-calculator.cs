using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Calculator
{
    class Program
    {
        static void Main(string[] args)
        {
            //simples calculadora

            double num1, num2;//variáveis que irão conter os números digitados
            string tmp;

            Console.WriteLine("Digite um número: ");
            tmp = Console.ReadLine();
            num1 = int.Parse(tmp);

            Console.WriteLine("Digite mais um número: ");
            Console.ReadLine();
            num2 = int.Parse(tmp);

            double resultado;

            //realiza a soma e imprime no console
            resultado = num1 + num2;
            Console.WriteLine("Soma: " + resultado);

            //realiza a subtração e imprime no console
            resultado = num1 - num2;
            Console.WriteLine("Subtração: " + resultado);

            //realiza a multiplicação e imprime no console
            resultado = num1 * num2;
            Console.WriteLine("Multiplicação: " + resultado);

            //realiza a divisão e imprime no console
            resultado = num1 / num2;
            Console.WriteLine("Divisão: " + resultado);
        }
    }
}