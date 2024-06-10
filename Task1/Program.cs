using System;
class Program
{
    public static void Main(string[] args)
    {
        Console.Write("Введите число: ");
        string input = Console.ReadLine();
        try
        {
            int number = int.Parse(input);
            Console.WriteLine("Преобразованное число: " + number);
        }
        catch (FormatException ex)
        {
            Console.WriteLine("Некорректный Ввод: " + ex.Message);
        }
        catch (OverflowException ex)
        {
            Console.WriteLine("Ошибка: Число выходит за пределы допустимого диапазона интерджер: " + ex.Message);
        }
    }
}