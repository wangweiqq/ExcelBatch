/********************************************************************************
** Form generated from reading UI file 'ShowThreeCoord.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWTHREECOORD_H
#define UI_SHOWTHREECOORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowThreeCoord
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *ShowThreeCoord)
    {
        if (ShowThreeCoord->objectName().isEmpty())
            ShowThreeCoord->setObjectName(QString::fromUtf8("ShowThreeCoord"));
        ShowThreeCoord->resize(820, 679);
        horizontalLayout = new QHBoxLayout(ShowThreeCoord);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scrollArea = new QScrollArea(ShowThreeCoord);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 800, 659));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(ShowThreeCoord);

        QMetaObject::connectSlotsByName(ShowThreeCoord);
    } // setupUi

    void retranslateUi(QDialog *ShowThreeCoord)
    {
        ShowThreeCoord->setWindowTitle(QApplication::translate("ShowThreeCoord", "ShowThreeCoord", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowThreeCoord: public Ui_ShowThreeCoord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWTHREECOORD_H
