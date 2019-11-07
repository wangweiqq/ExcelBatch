/********************************************************************************
** Form generated from reading UI file 'ThreeCoordTag.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREECOORDTAG_H
#define UI_THREECOORDTAG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThreeCoordTag
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;

    void setupUi(QWidget *ThreeCoordTag)
    {
        if (ThreeCoordTag->objectName().isEmpty())
            ThreeCoordTag->setObjectName(QString::fromUtf8("ThreeCoordTag"));
        ThreeCoordTag->resize(501, 197);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ThreeCoordTag->sizePolicy().hasHeightForWidth());
        ThreeCoordTag->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ThreeCoordTag);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 2, -1, 2);
        groupBox = new QGroupBox(ThreeCoordTag);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox::title\n"
"{\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top left;    \n"
"    font-size: 28px;\n"
"    font-weight: bold;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, -1, 0, -1);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(tableView);


        verticalLayout->addWidget(groupBox);


        retranslateUi(ThreeCoordTag);

        QMetaObject::connectSlotsByName(ThreeCoordTag);
    } // setupUi

    void retranslateUi(QWidget *ThreeCoordTag)
    {
        ThreeCoordTag->setWindowTitle(QApplication::translate("ThreeCoordTag", "ThreeCoordTag", nullptr));
        groupBox->setTitle(QApplication::translate("ThreeCoordTag", "GroupBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThreeCoordTag: public Ui_ThreeCoordTag {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREECOORDTAG_H
