#include<fstream>
#include <iostream>
#include<string>
#include<windows.h>
#include<vector> 
#include <stdio.h>
#include <stdlib.h>
 #include<ctype.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    ifstream fin ("fin.txt"); // Открываем файл для чтения
    
    char x;
    char mass[10000] = {};
    int flag = 0, count = 0;
     for (int i = 0; i < 1000; i++)
    {
        fin >> mass[i];
    }

    for (int i = 0; i < strlen(mass); i++)
    {
        if (!isdigit(mass[i])  )

        {
            cout << mass[i] << " is not a digit\n";
        }
        else {
            cout << mass[i] << " is  a digit\n";
        }
    }
    return 0;
}

    

