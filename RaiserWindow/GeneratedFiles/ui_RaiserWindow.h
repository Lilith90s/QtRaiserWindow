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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RaiserWindowClass
{
public:

    void setupUi(QWidget *RaiserWindowClass)
    {
        if (RaiserWindowClass->objectName().isEmpty())
            RaiserWindowClass->setObjectName(QStringLiteral("RaiserWindowClass"));
        RaiserWindowClass->resize(600, 400);

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
