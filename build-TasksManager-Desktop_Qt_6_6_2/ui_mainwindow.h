/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QCheckBox *checkBox;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label;
    QComboBox *comboCategory;
    QLabel *label_2;
    QComboBox *comboPriority;
    QGridLayout *gridLayout;
    QPushButton *btnAdd;
    QPushButton *btnDelete;
    QPushButton *btnSave;
    QPushButton *btnLoad;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(414, 479);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(122, 158, 159);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 245, 219);"));

        verticalLayout->addWidget(textEdit);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(184, 216, 216);"));

        verticalLayout->addWidget(checkBox);

        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
""));

        verticalLayout->addWidget(dateTimeEdit);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label);

        comboCategory = new QComboBox(centralwidget);
        comboCategory->addItem(QString());
        comboCategory->addItem(QString());
        comboCategory->addItem(QString());
        comboCategory->addItem(QString());
        comboCategory->addItem(QString());
        comboCategory->addItem(QString());
        comboCategory->addItem(QString());
        comboCategory->setObjectName("comboCategory");
        comboCategory->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 216, 216);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(comboCategory);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(label_2);

        comboPriority = new QComboBox(centralwidget);
        comboPriority->addItem(QString());
        comboPriority->addItem(QString());
        comboPriority->addItem(QString());
        comboPriority->addItem(QString());
        comboPriority->setObjectName("comboPriority");
        comboPriority->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 216, 216);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(comboPriority);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnAdd = new QPushButton(centralwidget);
        btnAdd->setObjectName("btnAdd");
        btnAdd->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 216, 216);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnAdd, 0, 0, 1, 1);

        btnDelete = new QPushButton(centralwidget);
        btnDelete->setObjectName("btnDelete");
        btnDelete->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 216, 216);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnDelete, 0, 1, 1, 1);

        btnSave = new QPushButton(centralwidget);
        btnSave->setObjectName("btnSave");
        btnSave->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 216, 216);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnSave, 0, 2, 1, 1);

        btnLoad = new QPushButton(centralwidget);
        btnLoad->setObjectName("btnLoad");
        btnLoad->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 216, 216);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(btnLoad, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 245, 219);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(textBrowser);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 414, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "SetDeadLine", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Category :", nullptr));
        comboCategory->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboCategory->setItemText(1, QCoreApplication::translate("MainWindow", "Study", nullptr));
        comboCategory->setItemText(2, QCoreApplication::translate("MainWindow", "Self development", nullptr));
        comboCategory->setItemText(3, QCoreApplication::translate("MainWindow", "Workout", nullptr));
        comboCategory->setItemText(4, QCoreApplication::translate("MainWindow", "Entertainment", nullptr));
        comboCategory->setItemText(5, QCoreApplication::translate("MainWindow", "work", nullptr));
        comboCategory->setItemText(6, QCoreApplication::translate("MainWindow", "Freelancing", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Priority :", nullptr));
        comboPriority->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        comboPriority->setItemText(1, QCoreApplication::translate("MainWindow", "High Priority", nullptr));
        comboPriority->setItemText(2, QCoreApplication::translate("MainWindow", "Medium Priority", nullptr));
        comboPriority->setItemText(3, QCoreApplication::translate("MainWindow", "Low Priority", nullptr));

        btnAdd->setText(QCoreApplication::translate("MainWindow", "AddTask", nullptr));
        btnDelete->setText(QCoreApplication::translate("MainWindow", "DeleteTask", nullptr));
        btnSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        btnLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
