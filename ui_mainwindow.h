/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *loginPushBtn;
    QPushButton *clearPushBtn;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(799, 585);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 252, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(320, 212, 166, 25));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        loginPushBtn = new QPushButton(layoutWidget);
        loginPushBtn->setObjectName(QString::fromUtf8("loginPushBtn"));

        horizontalLayout_3->addWidget(loginPushBtn);

        clearPushBtn = new QPushButton(layoutWidget);
        clearPushBtn->setObjectName(QString::fromUtf8("clearPushBtn"));

        horizontalLayout_3->addWidget(clearPushBtn);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(320, 139, 211, 51));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        usernameLabel = new QLabel(layoutWidget1);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));

        gridLayout->addWidget(usernameLabel, 0, 0, 1, 1);

        usernameLineEdit = new QLineEdit(layoutWidget1);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(usernameLineEdit, 0, 1, 1, 1);

        passwordLabel = new QLabel(layoutWidget1);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));

        gridLayout->addWidget(passwordLabel, 1, 0, 1, 1);

        passwordLineEdit = new QLineEdit(layoutWidget1);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(passwordLineEdit, 1, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 271, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 799, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        loginPushBtn->setText(QApplication::translate("MainWindow", "Login", nullptr));
        clearPushBtn->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        usernameLabel->setText(QApplication::translate("MainWindow", "Username: ", nullptr));
        passwordLabel->setText(QApplication::translate("MainWindow", "Password: ", nullptr));
        label->setText(QApplication::translate("MainWindow", "WELCOME TO BULK CLUB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
