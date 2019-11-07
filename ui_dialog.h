/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radU5;
    QRadioButton *radES6;
    QPushButton *btnOpenExcel;
    QPushButton *btnOpenExcel_2;
    QPushButton *btnSaveCSV;
    QPushButton *btnReadCSVFile;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QTableWidget *tableWidget_4;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *tableWidget_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tableWidget_5;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_9;
    QTableWidget *tableWidget_8;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QTableWidget *tableWidget_3;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *tableWidget_6;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *tableWidget_9;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(827, 742);
        verticalLayout = new QVBoxLayout(Dialog);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        radU5 = new QRadioButton(Dialog);
        radU5->setObjectName(QString::fromUtf8("radU5"));
        radU5->setChecked(true);

        horizontalLayout->addWidget(radU5);

        radES6 = new QRadioButton(Dialog);
        radES6->setObjectName(QString::fromUtf8("radES6"));

        horizontalLayout->addWidget(radES6);

        btnOpenExcel = new QPushButton(Dialog);
        btnOpenExcel->setObjectName(QString::fromUtf8("btnOpenExcel"));

        horizontalLayout->addWidget(btnOpenExcel);

        btnOpenExcel_2 = new QPushButton(Dialog);
        btnOpenExcel_2->setObjectName(QString::fromUtf8("btnOpenExcel_2"));

        horizontalLayout->addWidget(btnOpenExcel_2);

        btnSaveCSV = new QPushButton(Dialog);
        btnSaveCSV->setObjectName(QString::fromUtf8("btnSaveCSV"));

        horizontalLayout->addWidget(btnSaveCSV);

        btnReadCSVFile = new QPushButton(Dialog);
        btnReadCSVFile->setObjectName(QString::fromUtf8("btnReadCSVFile"));

        horizontalLayout->addWidget(btnReadCSVFile);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(Dialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 790, 2082));
        verticalLayout_11 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        verticalLayout_11->addWidget(groupBox);

        groupBox_4 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tableWidget_4 = new QTableWidget(groupBox_4);
        tableWidget_4->setObjectName(QString::fromUtf8("tableWidget_4"));

        verticalLayout_5->addWidget(tableWidget_4);


        verticalLayout_11->addWidget(groupBox_4);

        groupBox_7 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(groupBox_7);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        tableWidget_7 = new QTableWidget(groupBox_7);
        tableWidget_7->setObjectName(QString::fromUtf8("tableWidget_7"));

        verticalLayout_8->addWidget(tableWidget_7);


        verticalLayout_11->addWidget(groupBox_7);

        groupBox_2 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableWidget_2 = new QTableWidget(groupBox_2);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        verticalLayout_3->addWidget(tableWidget_2);


        verticalLayout_11->addWidget(groupBox_2);

        groupBox_5 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tableWidget_5 = new QTableWidget(groupBox_5);
        tableWidget_5->setObjectName(QString::fromUtf8("tableWidget_5"));

        verticalLayout_6->addWidget(tableWidget_5);


        verticalLayout_11->addWidget(groupBox_5);

        groupBox_8 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        sizePolicy.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy);
        verticalLayout_9 = new QVBoxLayout(groupBox_8);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        tableWidget_8 = new QTableWidget(groupBox_8);
        tableWidget_8->setObjectName(QString::fromUtf8("tableWidget_8"));

        verticalLayout_9->addWidget(tableWidget_8);


        verticalLayout_11->addWidget(groupBox_8);

        groupBox_3 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableWidget_3 = new QTableWidget(groupBox_3);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));

        verticalLayout_4->addWidget(tableWidget_3);


        verticalLayout_11->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(groupBox_6);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tableWidget_6 = new QTableWidget(groupBox_6);
        tableWidget_6->setObjectName(QString::fromUtf8("tableWidget_6"));

        verticalLayout_7->addWidget(tableWidget_6);


        verticalLayout_11->addWidget(groupBox_6);

        groupBox_9 = new QGroupBox(scrollAreaWidgetContents);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        sizePolicy.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy);
        verticalLayout_10 = new QVBoxLayout(groupBox_9);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        tableWidget_9 = new QTableWidget(groupBox_9);
        tableWidget_9->setObjectName(QString::fromUtf8("tableWidget_9"));

        verticalLayout_10->addWidget(tableWidget_9);


        verticalLayout_11->addWidget(groupBox_9);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        radU5->setText(QApplication::translate("Dialog", "U5", nullptr));
        radES6->setText(QApplication::translate("Dialog", "ES6", nullptr));
        btnOpenExcel->setText(QApplication::translate("Dialog", "\350\257\273\345\217\2263\345\235\220\346\240\207\346\250\241\346\235\277Excel", nullptr));
        btnOpenExcel_2->setText(QApplication::translate("Dialog", "\350\257\273\345\217\2262D\351\207\207\345\233\276\346\225\260\346\215\256Excel", nullptr));
        btnSaveCSV->setText(QApplication::translate("Dialog", "\344\277\235\345\255\230CSV", nullptr));
        btnReadCSVFile->setText(QApplication::translate("Dialog", "\350\257\273\345\217\226CSV\346\226\207\344\273\266", nullptr));
        groupBox->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        groupBox_4->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        groupBox_7->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        groupBox_2->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        groupBox_5->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        groupBox_8->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        groupBox_3->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        groupBox_6->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
        groupBox_9->setTitle(QApplication::translate("Dialog", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
