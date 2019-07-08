/********************************************************************************
** Form generated from reading UI file 'RaiserWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RAISERWINDOW_H
#define UI_RAISERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RaiserWindowClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *v_mainLayout;

    void setupUi(QWidget *RaiserWindowClass)
    {
        if (RaiserWindowClass->objectName().isEmpty())
            RaiserWindowClass->setObjectName(QStringLiteral("RaiserWindowClass"));
        RaiserWindowClass->resize(696, 567);
        verticalLayout_2 = new QVBoxLayout(RaiserWindowClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        v_mainLayout = new QVBoxLayout();
        v_mainLayout->setSpacing(0);
        v_mainLayout->setObjectName(QStringLiteral("v_mainLayout"));
        v_mainLayout->setSizeConstraint(QLayout::SetDefaultConstraint);

        verticalLayout_2->addLayout(v_mainLayout);


        retranslateUi(RaiserWindowClass);

        QMetaObject::connectSlotsByName(RaiserWindowClass);
    } // setupUi

    void retranslateUi(QWidget *RaiserWindowClass)
    {
        RaiserWindowClass->setWindowTitle(QApplication::translate("RaiserWindowClass", "RaiserWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RaiserWindowClass: public Ui_RaiserWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RAISERWINDOW_H
