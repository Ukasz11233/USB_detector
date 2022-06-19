/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *currFileLabel;
    QPlainTextEdit *plainTextEdit;
    QPushButton *openMediaDirButton;
    QPushButton *readButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(832, 627);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        currFileLabel = new QLabel(centralwidget);
        currFileLabel->setObjectName(QString::fromUtf8("currFileLabel"));

        verticalLayout->addWidget(currFileLabel);

        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setStyleSheet(QString::fromUtf8("body {background-color: rgb(255, 255, 255)}"));

        verticalLayout->addWidget(plainTextEdit);

        openMediaDirButton = new QPushButton(centralwidget);
        openMediaDirButton->setObjectName(QString::fromUtf8("openMediaDirButton"));

        verticalLayout->addWidget(openMediaDirButton);

        readButton = new QPushButton(centralwidget);
        readButton->setObjectName(QString::fromUtf8("readButton"));

        verticalLayout->addWidget(readButton);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(openMediaDirButton, SIGNAL(clicked()), MainWindow, SLOT(openMediaDirButton_clicked()));
        QObject::connect(readButton, SIGNAL(clicked()), MainWindow, SLOT(readButton_clicked()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        currFileLabel->setText(QString());
        openMediaDirButton->setText(QCoreApplication::translate("MainWindow", "OPEN USB DIRECTORY", nullptr));
        readButton->setText(QCoreApplication::translate("MainWindow", "SHOW A FILE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
