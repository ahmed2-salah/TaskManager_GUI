#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QPushButton>
#include <QComboBox>
#include <QLineEdit>
#include <QTextBrowser>
#include <QCheckBox>
#include <QDateTimeEdit>
#include <QFile>
#include <QTextEdit>
#include <QTextStream>
#include <QMessageBox>
#include <QIODevice>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAdd_clicked();

    void on_btnDelete_clicked();

    void on_btnSave_clicked();

    void on_btnLoad_clicked();

    void on_comboCategory_currentIndexChanged(int index);

    void on_comboPriority_currentIndexChanged(int index);

    void on_checkBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
