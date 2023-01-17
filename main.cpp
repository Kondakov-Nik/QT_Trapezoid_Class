// Вычисление периметра и площади трапеции
// @author Кондакаков Н.С.

#include "mainwindow.h"

#include <QApplication>
// основная программа
int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //два аргумента
    MainWindow w; // статистическое создание
    w.show(); // метод вывода виджета
    return a.exec();
}
