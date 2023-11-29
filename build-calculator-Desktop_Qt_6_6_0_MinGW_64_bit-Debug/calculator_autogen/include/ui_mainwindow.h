/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_temp;
    QLineEdit *le_entry;
    QGridLayout *layout_buttons;
    QPushButton *btn_clear;
    QPushButton *btn_3;
    QPushButton *btn_8;
    QPushButton *btn_neg;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_0;
    QPushButton *btn_6;
    QPushButton *btn_div;
    QPushButton *btn_9;
    QPushButton *btn_sub;
    QPushButton *btn_point;
    QPushButton *btn_7;
    QPushButton *btn_add;
    QPushButton *btn_4;
    QPushButton *btn_mul;
    QPushButton *btn_5;
    QPushButton *btn_ce;
    QPushButton *btn_backspace;
    QPushButton *btn_calc;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(350, 500);
        MainWindow->setMinimumSize(QSize(350, 500));
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	color: white;\n"
"	background-color: #31343F;\n"
"	font-family: BrassMono;\n"
"	font-size: 16pt;\n"
"	font-weight: 600;\n"
"}\n"
"\n"
"QPushButton {\n"
"	background-color: transparent;\n"
"	border: none;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: #A1A1A1;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #8D8D8D;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        lbl_temp = new QLabel(centralwidget);
        lbl_temp->setObjectName("lbl_temp");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_temp->sizePolicy().hasHeightForWidth());
        lbl_temp->setSizePolicy(sizePolicy);
        lbl_temp->setLayoutDirection(Qt::LeftToRight);
        lbl_temp->setStyleSheet(QString::fromUtf8("color: #A9A9A9;"));
        lbl_temp->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(lbl_temp);

        le_entry = new QLineEdit(centralwidget);
        le_entry->setObjectName("le_entry");
        le_entry->setStyleSheet(QString::fromUtf8("font-size: 40pt;\n"
"border: none;"));
        le_entry->setMaxLength(16);
        le_entry->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        le_entry->setReadOnly(true);

        verticalLayout->addWidget(le_entry);

        layout_buttons = new QGridLayout();
        layout_buttons->setObjectName("layout_buttons");
        btn_clear = new QPushButton(centralwidget);
        btn_clear->setObjectName("btn_clear");
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy1);
        btn_clear->setCursor(QCursor(Qt::PointingHandCursor));

        layout_buttons->addWidget(btn_clear, 0, 2, 1, 1);

        btn_3 = new QPushButton(centralwidget);
        btn_3->setObjectName("btn_3");
        sizePolicy1.setHeightForWidth(btn_3->sizePolicy().hasHeightForWidth());
        btn_3->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_3, 3, 4, 1, 1);

        btn_8 = new QPushButton(centralwidget);
        btn_8->setObjectName("btn_8");
        sizePolicy1.setHeightForWidth(btn_8->sizePolicy().hasHeightForWidth());
        btn_8->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_8, 1, 3, 1, 1);

        btn_neg = new QPushButton(centralwidget);
        btn_neg->setObjectName("btn_neg");
        sizePolicy1.setHeightForWidth(btn_neg->sizePolicy().hasHeightForWidth());
        btn_neg->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_neg, 4, 2, 1, 1);

        btn_1 = new QPushButton(centralwidget);
        btn_1->setObjectName("btn_1");
        sizePolicy1.setHeightForWidth(btn_1->sizePolicy().hasHeightForWidth());
        btn_1->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_1, 3, 2, 1, 1);

        btn_2 = new QPushButton(centralwidget);
        btn_2->setObjectName("btn_2");
        sizePolicy1.setHeightForWidth(btn_2->sizePolicy().hasHeightForWidth());
        btn_2->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_2, 3, 3, 1, 1);

        btn_0 = new QPushButton(centralwidget);
        btn_0->setObjectName("btn_0");
        sizePolicy1.setHeightForWidth(btn_0->sizePolicy().hasHeightForWidth());
        btn_0->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_0, 4, 3, 1, 1);

        btn_6 = new QPushButton(centralwidget);
        btn_6->setObjectName("btn_6");
        sizePolicy1.setHeightForWidth(btn_6->sizePolicy().hasHeightForWidth());
        btn_6->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_6, 2, 4, 1, 1);

        btn_div = new QPushButton(centralwidget);
        btn_div->setObjectName("btn_div");
        sizePolicy1.setHeightForWidth(btn_div->sizePolicy().hasHeightForWidth());
        btn_div->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_div, 0, 5, 1, 1);

        btn_9 = new QPushButton(centralwidget);
        btn_9->setObjectName("btn_9");
        sizePolicy1.setHeightForWidth(btn_9->sizePolicy().hasHeightForWidth());
        btn_9->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_9, 1, 4, 1, 1);

        btn_sub = new QPushButton(centralwidget);
        btn_sub->setObjectName("btn_sub");
        sizePolicy1.setHeightForWidth(btn_sub->sizePolicy().hasHeightForWidth());
        btn_sub->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_sub, 2, 5, 1, 1);

        btn_point = new QPushButton(centralwidget);
        btn_point->setObjectName("btn_point");
        sizePolicy1.setHeightForWidth(btn_point->sizePolicy().hasHeightForWidth());
        btn_point->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_point, 4, 4, 1, 1);

        btn_7 = new QPushButton(centralwidget);
        btn_7->setObjectName("btn_7");
        sizePolicy1.setHeightForWidth(btn_7->sizePolicy().hasHeightForWidth());
        btn_7->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_7, 1, 2, 1, 1);

        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName("btn_add");
        sizePolicy1.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_add, 3, 5, 1, 1);

        btn_4 = new QPushButton(centralwidget);
        btn_4->setObjectName("btn_4");
        sizePolicy1.setHeightForWidth(btn_4->sizePolicy().hasHeightForWidth());
        btn_4->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_4, 2, 2, 1, 1);

        btn_mul = new QPushButton(centralwidget);
        btn_mul->setObjectName("btn_mul");
        sizePolicy1.setHeightForWidth(btn_mul->sizePolicy().hasHeightForWidth());
        btn_mul->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_mul, 1, 5, 1, 1);

        btn_5 = new QPushButton(centralwidget);
        btn_5->setObjectName("btn_5");
        sizePolicy1.setHeightForWidth(btn_5->sizePolicy().hasHeightForWidth());
        btn_5->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_5, 2, 3, 1, 1);

        btn_ce = new QPushButton(centralwidget);
        btn_ce->setObjectName("btn_ce");
        sizePolicy1.setHeightForWidth(btn_ce->sizePolicy().hasHeightForWidth());
        btn_ce->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_ce, 0, 3, 1, 1);

        btn_backspace = new QPushButton(centralwidget);
        btn_backspace->setObjectName("btn_backspace");
        sizePolicy1.setHeightForWidth(btn_backspace->sizePolicy().hasHeightForWidth());
        btn_backspace->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_backspace, 0, 4, 1, 1);

        btn_calc = new QPushButton(centralwidget);
        btn_calc->setObjectName("btn_calc");
        sizePolicy1.setHeightForWidth(btn_calc->sizePolicy().hasHeightForWidth());
        btn_calc->setSizePolicy(sizePolicy1);

        layout_buttons->addWidget(btn_calc, 4, 5, 1, 1);


        verticalLayout->addLayout(layout_buttons);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
        lbl_temp->setText(QString());
        le_entry->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
#if QT_CONFIG(shortcut)
        btn_3->setShortcut(QCoreApplication::translate("MainWindow", "3", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
#if QT_CONFIG(shortcut)
        btn_8->setShortcut(QCoreApplication::translate("MainWindow", "8", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_neg->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
#if QT_CONFIG(shortcut)
        btn_1->setShortcut(QCoreApplication::translate("MainWindow", "1", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
#if QT_CONFIG(shortcut)
        btn_2->setShortcut(QCoreApplication::translate("MainWindow", "2", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
#if QT_CONFIG(shortcut)
        btn_0->setShortcut(QCoreApplication::translate("MainWindow", "0", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
#if QT_CONFIG(shortcut)
        btn_6->setShortcut(QCoreApplication::translate("MainWindow", "6", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
#if QT_CONFIG(shortcut)
        btn_div->setShortcut(QCoreApplication::translate("MainWindow", "/", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
#if QT_CONFIG(shortcut)
        btn_9->setShortcut(QCoreApplication::translate("MainWindow", "9", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
#if QT_CONFIG(shortcut)
        btn_sub->setShortcut(QCoreApplication::translate("MainWindow", "-", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
#if QT_CONFIG(shortcut)
        btn_point->setShortcut(QCoreApplication::translate("MainWindow", ".", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
#if QT_CONFIG(shortcut)
        btn_7->setShortcut(QCoreApplication::translate("MainWindow", "7", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
#if QT_CONFIG(shortcut)
        btn_add->setShortcut(QCoreApplication::translate("MainWindow", "+", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
#if QT_CONFIG(shortcut)
        btn_4->setShortcut(QCoreApplication::translate("MainWindow", "4", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
#if QT_CONFIG(shortcut)
        btn_mul->setShortcut(QCoreApplication::translate("MainWindow", "*", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
#if QT_CONFIG(shortcut)
        btn_5->setShortcut(QCoreApplication::translate("MainWindow", "5", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_ce->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        btn_backspace->setText(QCoreApplication::translate("MainWindow", "->", nullptr));
#if QT_CONFIG(shortcut)
        btn_backspace->setShortcut(QCoreApplication::translate("MainWindow", "Backspace", nullptr));
#endif // QT_CONFIG(shortcut)
        btn_calc->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        btn_calc->setShortcut(QCoreApplication::translate("MainWindow", "=", nullptr));
#endif // QT_CONFIG(shortcut)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
