#include <QCoreApplication>
#include <QTextStream>
#include <QDebug>
#include <QFile>
#include <fstream>

#include <iostream>
using namespace std;



int main()
{
    fstream file ("C:\\Users\\opilane\\Desktop\\control\\Tab.txt");

    if (!file) {
        cout << "File is  not opened \n ";
        return -1;

    }

    else  {
        cout << "Ok, file was opened \n";
        return 1;
    }





}
