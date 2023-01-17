// Вычисление периметра и площади трапеции
// @author Кондакаков Н.С.

#ifndef MAINWINDOW_H   // Защита от повторного подключения заголовочных файлов
#define MAINWINDOW_H

#include "Trap.h"
#include <QMainWindow>  // Библиотека для окна

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; } // класс содержащий элементы UI
QT_END_NAMESPACE

// Создаётся новый класс для главного окна на основе существующего
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_calc_clicked(); ///обработчик события при нажатии на кнопку

    void on_about_author_triggered(); /// обработчик события меню( о авторе)

    void on_pushButton_clear_clicked(); /// очистить текст в таблице и лейблах

private:
    Ui::MainWindow *ui;  // Указатель на UI
    Trap t;
};
#endif // MAINWINDOW_H
