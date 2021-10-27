// Zadacha9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{
    std::cout << "This program multiplies 2 matrixes N * N and returns A * B\n";
    int *a;
    int *b;
    long long int *c;
    int n;
    long long int temp;
    std::cout << "Enter N\n";
    std::cin >> n;
    while (std::cin.fail() || n <= 0)
    {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Wrong N!\n";
        std::cout << "Enter N another time\n";
        std::cin >> n;
    }
    a = (int*)malloc(n * n * sizeof(int));


    std::cout << "Enter elements of the matrix A \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> *(a + i * n + j);
            while (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Wrong element's value!\n";
                std::cout << "Enter element № " << (i + 1) << ", " << (j + 1) << "  of the array another time\n";
                std::cin >> *(a + i * n + j);
            }
        }
    }

    b = (int*)malloc(n * n * sizeof(int));


    std::cout << "Enter elements of the matrix B \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> *(b + i * n + j);
            while (std::cin.fail())
            {
                std::cin.clear();
                std::cin.ignore(32767, '\n');
                std::cout << "Wrong element's value!\n";
                std::cout << "Enter element № " << (i + 1) << ", " << (j + 1) << "  of the array another time\n";
                std::cin >> *(b + i * n + j);
            }
        }
    }

    c = (long long int*)malloc(n * n * sizeof(long long int));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp = 0;
            for (int k = 0; k < n; k++)
            {
                temp+= *(a + i * n + k) * *(b + k * n + j);
            }
            *(c + i * n + j) = temp;
        }
    }

    std::cout << "\n";
    std::cout << "New matrix is: \n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << *(c + i * n + j) << " ";
        }
        std::cout << "\n";
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
