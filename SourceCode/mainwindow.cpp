#include "mainwindow.h"
#include "ui_mainwindow.h"
QString category;
QString Priority;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAdd_clicked()
{
    QString finalData;
    QString text =ui->textEdit->toPlainText();
    QDateTime time =ui->dateTimeEdit->dateTime();
    QString timeText =time.toString();

    finalData = "Task: " +text + "\n" +"Piority: " + Priority + "\n" + "Categoty:" + category + "\n" +
                "Deadline:"+timeText+"\n"+"-------------------------";

    ui->textBrowser->append(finalData);


}


void MainWindow::on_btnDelete_clicked()
{
    ui->textBrowser->clear();

}

/*Write to TasksFile.txt*/
void MainWindow::on_btnSave_clicked()
{
    QFile file("tasksFile.txt");
    file.open(QIODevice::WriteOnly);
    QTextStream stream(&file);
    stream<<ui->textBrowser->toPlainText();
    file.close();
}

/*Load from TasksFile.txt*/
void MainWindow::on_btnLoad_clicked()
{
    QFile file("tasksFile.txt");
    if (file.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&file);
        ui->textBrowser->setPlainText(stream.readAll());
        file.close();
    } else
    {

        QMessageBox::information(this,"Loading","Load failed!");
    }
}

void MainWindow::on_comboCategory_currentIndexChanged(int index)
{
    category = ui->comboCategory->itemText(index);

}


void MainWindow::on_comboPriority_currentIndexChanged(int index)
{
    Priority = ui->comboPriority->itemText(index);

}


void MainWindow::on_checkBox_stateChanged(int state)
{
  if (state == Qt::Checked)
    {
        ui->dateTimeEdit->setEnabled(true);
    }
  else
   {

      ui->dateTimeEdit->setEnabled(false);

   }
}

