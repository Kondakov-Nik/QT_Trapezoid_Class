// Вычисление периметра и площади трапеции
// @author Кондакаков Н.С.

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


// конструктор главного окна
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)  // явный вызов конструктора базового класса
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Объект ui содержит все классы-элементы интерфейса,
    // расположенные на главном окне.
    // класс для ui генерируется автоматически из дизайна окна
    ui->plainTextEdit->setReadOnly( !ui->plainTextEdit->isReadOnly() ); //запрет редактирования в PlainText
}

// Деструктор удаления объекта окна
MainWindow::~MainWindow()
{
    delete ui;
}

// обработчик события -- клик на кнопку
// обработчик создан в дизайнере форм
// кнопка вычисления


void MainWindow::on_Button_calc_clicked()
{
    try {
        ui->lineEdit_AB->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_BC->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_CD->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        ui->lineEdit_AD->setStyleSheet("background-color: white;"); // изначально поле ввода белое
        t.set_ab( ui->lineEdit_AB->text().toFloat()); // Обращение к содержимому поля ввода AB
        t.set_bc( ui->lineEdit_BC->text().toFloat()); // Обращение к содержимому поля ввода BC
        t.set_cd( ui->lineEdit_CD->text().toFloat()); // Обращение к содержимому поля ввода CD
        t.set_ad( ui->lineEdit_AD->text().toFloat()); // Обращение к содержимому поля ввода AD


        ui->label_result_P->setText( QString::number( t.perimeter(), 'f', 1 )); // Перевод в строку и вывод результата на форму
        ui->label_result_S->setText( QString::number( t.square(), 'f', 1 )); // Перевод в строку и вывод результата на форму

        ui->plainTextEdit->appendPlainText( "Периметр трапеции = " +QString::number(t.perimeter(),'f', 1 ) + "; Площадь трапеции = " +
                                                                       QString::number(t.square(),'f', 1 )); // Перевод в строку и вывод результата в PlainText

    }    catch (const std::invalid_argument &e) { // при неверно введеных данных появляется error
//         ui->statusbar->showMessage( "Error" );
         ui->lineEdit_AB->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
         ui->lineEdit_BC->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
         ui->lineEdit_CD->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное
         ui->lineEdit_AD->setStyleSheet("background-color:rgb(250, 103, 103);"); // при ошибке поле ввода красное

         ui->plainTextEdit->appendPlainText( "Неверно введенные данные"); // вывод в PlainText ошибки
//       QMessageBox::about(this, "Erorr", "Ошибка");
    }

//   {    ui->lineEdit_vvod->clear(); // очистить поле ввода
//    }

//    {
//        ui->plainTextEdit->setReadOnly( !ui->plainTextEdit->isReadOnly() ); //запрет редактирования поля ввода
//    }

}

void MainWindow::on_about_author_triggered() // обработчки меню( о авторе)
{
    QMessageBox::about(this, "Об авторе", "Автор: Кондаков Никита Сергеевич");
}


void MainWindow::on_pushButton_clear_clicked() // очистить текст в таблице и лейблах
{
  ui->plainTextEdit->clear();
  ui->label_result_P->clear();
  ui->label_result_S->clear();
}
