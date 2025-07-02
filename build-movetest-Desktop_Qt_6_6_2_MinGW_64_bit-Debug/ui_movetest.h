/********************************************************************************
** Form generated from reading UI file 'movetest.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVETEST_H
#define UI_MOVETEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Movetest
{
public:

    void setupUi(QWidget *Movetest)
    {
        if (Movetest->objectName().isEmpty())
            Movetest->setObjectName("Movetest");
        Movetest->resize(800, 600);

        retranslateUi(Movetest);

        QMetaObject::connectSlotsByName(Movetest);
    } // setupUi

    void retranslateUi(QWidget *Movetest)
    {
        Movetest->setWindowTitle(QCoreApplication::translate("Movetest", "Movetest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Movetest: public Ui_Movetest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVETEST_H
