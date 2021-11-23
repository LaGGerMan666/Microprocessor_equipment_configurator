/********************************************************************************
** Form generated from reading UI file 'dialog_createconfig.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CREATECONFIG_H
#define UI_DIALOG_CREATECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_createConfig
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *le_ConfigName;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_Create;
    QPushButton *pb_Cancel;

    void setupUi(QDialog *Dialog_createConfig)
    {
        if (Dialog_createConfig->objectName().isEmpty())
            Dialog_createConfig->setObjectName(QString::fromUtf8("Dialog_createConfig"));
        Dialog_createConfig->resize(250, 90);
        Dialog_createConfig->setMinimumSize(QSize(250, 90));
        Dialog_createConfig->setMaximumSize(QSize(250, 90));
        verticalLayout_2 = new QVBoxLayout(Dialog_createConfig);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        frame = new QFrame(Dialog_createConfig);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        le_ConfigName = new QLineEdit(frame);
        le_ConfigName->setObjectName(QString::fromUtf8("le_ConfigName"));

        verticalLayout->addWidget(le_ConfigName);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(Dialog_createConfig);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pb_Create = new QPushButton(frame_2);
        pb_Create->setObjectName(QString::fromUtf8("pb_Create"));

        horizontalLayout->addWidget(pb_Create);

        pb_Cancel = new QPushButton(frame_2);
        pb_Cancel->setObjectName(QString::fromUtf8("pb_Cancel"));

        horizontalLayout->addWidget(pb_Cancel);


        verticalLayout_2->addWidget(frame_2);


        retranslateUi(Dialog_createConfig);

        QMetaObject::connectSlotsByName(Dialog_createConfig);
    } // setupUi

    void retranslateUi(QDialog *Dialog_createConfig)
    {
        Dialog_createConfig->setWindowTitle(QCoreApplication::translate("Dialog_createConfig", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\275\320\276\320\262\320\276\320\271 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\320\270", nullptr));
        label->setText(QCoreApplication::translate("Dialog_createConfig", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\320\270:", nullptr));
        pb_Create->setText(QCoreApplication::translate("Dialog_createConfig", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        pb_Cancel->setText(QCoreApplication::translate("Dialog_createConfig", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_createConfig: public Ui_Dialog_createConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CREATECONFIG_H
