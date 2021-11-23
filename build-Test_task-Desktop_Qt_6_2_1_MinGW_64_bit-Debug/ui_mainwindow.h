/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Create;
    QAction *action_Open;
    QAction *action_SaveAs;
    QAction *action_Close;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *gb_Interfaces;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *lw_SelectedInterfaces;
    QFrame *frame_pbInterfaces;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pb_DellInterface;
    QPushButton *pb_AddInterface;
    QPushButton *pb_DellAllInterfaces;
    QPushButton *pb_AddAllInterfaces;
    QListWidget *lw_AvailableInterfaces;
    QGroupBox *gb_GIPO;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_RadioButtons;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpinBox *sb_PortNum;
    QRadioButton *Radio_Input;
    QFrame *frame_RadioInput;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rb_VCC;
    QRadioButton *rb_GND;
    QRadioButton *rb_NULL;
    QRadioButton *Radio_Output;
    QFrame *frame_RadioOutput;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *rb_LowPotential;
    QRadioButton *rb_HighPotential;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *tw_ModesGIPO;
    QPushButton *pb_AddModeGIPO;
    QPushButton *pb_DellModeGIPO;
    QGroupBox *gb_MainParam;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *le_Series;
    QLabel *label_2;
    QLineEdit *le_Model;
    QLabel *label_3;
    QLineEdit *le_CoreClockFreq;
    QLabel *label_4;
    QLineEdit *le_PeripheralClockFreq;
    QMenuBar *menubar;
    QMenu *menu_File;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 538);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        action_Create = new QAction(MainWindow);
        action_Create->setObjectName(QString::fromUtf8("action_Create"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_SaveAs = new QAction(MainWindow);
        action_SaveAs->setObjectName(QString::fromUtf8("action_SaveAs"));
        action_Close = new QAction(MainWindow);
        action_Close->setObjectName(QString::fromUtf8("action_Close"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gb_Interfaces = new QGroupBox(centralwidget);
        gb_Interfaces->setObjectName(QString::fromUtf8("gb_Interfaces"));
        gb_Interfaces->setMaximumSize(QSize(400, 16777215));
        horizontalLayout_2 = new QHBoxLayout(gb_Interfaces);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lw_SelectedInterfaces = new QListWidget(gb_Interfaces);
        lw_SelectedInterfaces->setObjectName(QString::fromUtf8("lw_SelectedInterfaces"));
        lw_SelectedInterfaces->setFocusPolicy(Qt::StrongFocus);
        lw_SelectedInterfaces->setDragEnabled(false);
        lw_SelectedInterfaces->setSelectionBehavior(QAbstractItemView::SelectItems);

        horizontalLayout_2->addWidget(lw_SelectedInterfaces);

        frame_pbInterfaces = new QFrame(gb_Interfaces);
        frame_pbInterfaces->setObjectName(QString::fromUtf8("frame_pbInterfaces"));
        frame_pbInterfaces->setMaximumSize(QSize(50, 16777215));
        frame_pbInterfaces->setFrameShape(QFrame::StyledPanel);
        frame_pbInterfaces->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_pbInterfaces);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 9, 2, -1);
        pb_DellInterface = new QPushButton(frame_pbInterfaces);
        pb_DellInterface->setObjectName(QString::fromUtf8("pb_DellInterface"));

        verticalLayout_2->addWidget(pb_DellInterface);

        pb_AddInterface = new QPushButton(frame_pbInterfaces);
        pb_AddInterface->setObjectName(QString::fromUtf8("pb_AddInterface"));

        verticalLayout_2->addWidget(pb_AddInterface);

        pb_DellAllInterfaces = new QPushButton(frame_pbInterfaces);
        pb_DellAllInterfaces->setObjectName(QString::fromUtf8("pb_DellAllInterfaces"));

        verticalLayout_2->addWidget(pb_DellAllInterfaces);

        pb_AddAllInterfaces = new QPushButton(frame_pbInterfaces);
        pb_AddAllInterfaces->setObjectName(QString::fromUtf8("pb_AddAllInterfaces"));

        verticalLayout_2->addWidget(pb_AddAllInterfaces);


        horizontalLayout_2->addWidget(frame_pbInterfaces);

        lw_AvailableInterfaces = new QListWidget(gb_Interfaces);
        new QListWidgetItem(lw_AvailableInterfaces);
        new QListWidgetItem(lw_AvailableInterfaces);
        new QListWidgetItem(lw_AvailableInterfaces);
        new QListWidgetItem(lw_AvailableInterfaces);
        new QListWidgetItem(lw_AvailableInterfaces);
        new QListWidgetItem(lw_AvailableInterfaces);
        new QListWidgetItem(lw_AvailableInterfaces);
        lw_AvailableInterfaces->setObjectName(QString::fromUtf8("lw_AvailableInterfaces"));
        lw_AvailableInterfaces->setDragEnabled(false);
        lw_AvailableInterfaces->setDragDropOverwriteMode(false);
        lw_AvailableInterfaces->setSortingEnabled(false);

        horizontalLayout_2->addWidget(lw_AvailableInterfaces);


        gridLayout->addWidget(gb_Interfaces, 1, 1, 1, 1);

        gb_GIPO = new QGroupBox(centralwidget);
        gb_GIPO->setObjectName(QString::fromUtf8("gb_GIPO"));
        horizontalLayout = new QHBoxLayout(gb_GIPO);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_RadioButtons = new QFrame(gb_GIPO);
        frame_RadioButtons->setObjectName(QString::fromUtf8("frame_RadioButtons"));
        frame_RadioButtons->setEnabled(true);
        frame_RadioButtons->setFrameShape(QFrame::StyledPanel);
        frame_RadioButtons->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_RadioButtons);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 4, -1, 4);
        frame = new QFrame(frame_RadioButtons);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 0, -1, 0);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        sb_PortNum = new QSpinBox(frame);
        sb_PortNum->setObjectName(QString::fromUtf8("sb_PortNum"));
        sb_PortNum->setMinimum(1);
        sb_PortNum->setMaximum(128);

        horizontalLayout_3->addWidget(sb_PortNum);


        verticalLayout->addWidget(frame);

        Radio_Input = new QRadioButton(frame_RadioButtons);
        Radio_Input->setObjectName(QString::fromUtf8("Radio_Input"));

        verticalLayout->addWidget(Radio_Input);

        frame_RadioInput = new QFrame(frame_RadioButtons);
        frame_RadioInput->setObjectName(QString::fromUtf8("frame_RadioInput"));
        frame_RadioInput->setFrameShape(QFrame::StyledPanel);
        frame_RadioInput->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_RadioInput);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, 0);
        rb_VCC = new QRadioButton(frame_RadioInput);
        rb_VCC->setObjectName(QString::fromUtf8("rb_VCC"));
        rb_VCC->setEnabled(true);
        rb_VCC->setCheckable(true);
        rb_VCC->setChecked(false);

        verticalLayout_4->addWidget(rb_VCC);

        rb_GND = new QRadioButton(frame_RadioInput);
        rb_GND->setObjectName(QString::fromUtf8("rb_GND"));

        verticalLayout_4->addWidget(rb_GND);

        rb_NULL = new QRadioButton(frame_RadioInput);
        rb_NULL->setObjectName(QString::fromUtf8("rb_NULL"));

        verticalLayout_4->addWidget(rb_NULL);


        verticalLayout->addWidget(frame_RadioInput);

        Radio_Output = new QRadioButton(frame_RadioButtons);
        Radio_Output->setObjectName(QString::fromUtf8("Radio_Output"));

        verticalLayout->addWidget(Radio_Output);

        frame_RadioOutput = new QFrame(frame_RadioButtons);
        frame_RadioOutput->setObjectName(QString::fromUtf8("frame_RadioOutput"));
        frame_RadioOutput->setFrameShape(QFrame::StyledPanel);
        frame_RadioOutput->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_RadioOutput);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        rb_LowPotential = new QRadioButton(frame_RadioOutput);
        rb_LowPotential->setObjectName(QString::fromUtf8("rb_LowPotential"));

        verticalLayout_5->addWidget(rb_LowPotential);

        rb_HighPotential = new QRadioButton(frame_RadioOutput);
        rb_HighPotential->setObjectName(QString::fromUtf8("rb_HighPotential"));

        verticalLayout_5->addWidget(rb_HighPotential);


        verticalLayout->addWidget(frame_RadioOutput);


        horizontalLayout->addWidget(frame_RadioButtons);

        frame_5 = new QFrame(gb_GIPO);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        tw_ModesGIPO = new QTableWidget(frame_5);
        if (tw_ModesGIPO->columnCount() < 3)
            tw_ModesGIPO->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tw_ModesGIPO->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tw_ModesGIPO->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tw_ModesGIPO->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tw_ModesGIPO->setObjectName(QString::fromUtf8("tw_ModesGIPO"));
        tw_ModesGIPO->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tw_ModesGIPO->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tw_ModesGIPO->setAutoScroll(true);
        tw_ModesGIPO->setSelectionMode(QAbstractItemView::SingleSelection);
        tw_ModesGIPO->setSelectionBehavior(QAbstractItemView::SelectRows);
        tw_ModesGIPO->setHorizontalScrollMode(QAbstractItemView::ScrollPerItem);
        tw_ModesGIPO->setGridStyle(Qt::SolidLine);
        tw_ModesGIPO->setWordWrap(true);
        tw_ModesGIPO->setRowCount(0);
        tw_ModesGIPO->horizontalHeader()->setVisible(true);
        tw_ModesGIPO->horizontalHeader()->setCascadingSectionResizes(false);
        tw_ModesGIPO->horizontalHeader()->setDefaultSectionSize(90);
        tw_ModesGIPO->horizontalHeader()->setHighlightSections(false);
        tw_ModesGIPO->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tw_ModesGIPO->horizontalHeader()->setStretchLastSection(true);
        tw_ModesGIPO->verticalHeader()->setVisible(false);
        tw_ModesGIPO->verticalHeader()->setCascadingSectionResizes(false);
        tw_ModesGIPO->verticalHeader()->setMinimumSectionSize(19);
        tw_ModesGIPO->verticalHeader()->setDefaultSectionSize(19);
        tw_ModesGIPO->verticalHeader()->setHighlightSections(true);
        tw_ModesGIPO->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tw_ModesGIPO->verticalHeader()->setStretchLastSection(false);

        verticalLayout_6->addWidget(tw_ModesGIPO);

        pb_AddModeGIPO = new QPushButton(frame_5);
        pb_AddModeGIPO->setObjectName(QString::fromUtf8("pb_AddModeGIPO"));

        verticalLayout_6->addWidget(pb_AddModeGIPO);

        pb_DellModeGIPO = new QPushButton(frame_5);
        pb_DellModeGIPO->setObjectName(QString::fromUtf8("pb_DellModeGIPO"));

        verticalLayout_6->addWidget(pb_DellModeGIPO);


        horizontalLayout->addWidget(frame_5);


        gridLayout->addWidget(gb_GIPO, 2, 0, 1, 2);

        gb_MainParam = new QGroupBox(centralwidget);
        gb_MainParam->setObjectName(QString::fromUtf8("gb_MainParam"));
        verticalLayout_3 = new QVBoxLayout(gb_MainParam);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(gb_MainParam);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        le_Series = new QLineEdit(gb_MainParam);
        le_Series->setObjectName(QString::fromUtf8("le_Series"));

        verticalLayout_3->addWidget(le_Series);

        label_2 = new QLabel(gb_MainParam);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        le_Model = new QLineEdit(gb_MainParam);
        le_Model->setObjectName(QString::fromUtf8("le_Model"));

        verticalLayout_3->addWidget(le_Model);

        label_3 = new QLabel(gb_MainParam);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(false);

        verticalLayout_3->addWidget(label_3);

        le_CoreClockFreq = new QLineEdit(gb_MainParam);
        le_CoreClockFreq->setObjectName(QString::fromUtf8("le_CoreClockFreq"));

        verticalLayout_3->addWidget(le_CoreClockFreq);

        label_4 = new QLabel(gb_MainParam);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::AutoText);
        label_4->setWordWrap(true);

        verticalLayout_3->addWidget(label_4);

        le_PeripheralClockFreq = new QLineEdit(gb_MainParam);
        le_PeripheralClockFreq->setObjectName(QString::fromUtf8("le_PeripheralClockFreq"));

        verticalLayout_3->addWidget(le_PeripheralClockFreq);


        gridLayout->addWidget(gb_MainParam, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 20));
        menubar->setTabletTracking(false);
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Create);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_SaveAs);
        menu_File->addAction(action_Close);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\220\320\261\321\201\321\202\321\200\320\260\320\272\321\202\320\275\321\213\320\271 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\202\320\276\321\200 \320\274\320\270\320\272\321\200\320\276\320\277\321\200\320\276\321\206\320\265\321\201\321\201\320\276\321\200\320\275\320\276\320\263\320\276 \320\276\320\261\320\276\321\200\321\203\320\264\320\276\320\262\320\260\320\275\320\270\321\217", nullptr));
        action_Create->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\216", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\216", nullptr));
        action_SaveAs->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\216", nullptr));
        action_Close->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        gb_Interfaces->setTitle(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\265\320\271\321\201\321\202\320\262\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\270\320\275\321\202\320\265\321\200\321\204\320\265\320\271\321\201\321\213", nullptr));
        pb_DellInterface->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        pb_AddInterface->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pb_DellAllInterfaces->setText(QCoreApplication::translate("MainWindow", ">>", nullptr));
        pb_AddAllInterfaces->setText(QCoreApplication::translate("MainWindow", "<<", nullptr));

        const bool __sortingEnabled = lw_AvailableInterfaces->isSortingEnabled();
        lw_AvailableInterfaces->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = lw_AvailableInterfaces->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "USB", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = lw_AvailableInterfaces->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "UART", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = lw_AvailableInterfaces->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "SPI", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = lw_AvailableInterfaces->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "I2C", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = lw_AvailableInterfaces->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Ethernet", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = lw_AvailableInterfaces->item(5);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "1-Wire", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = lw_AvailableInterfaces->item(6);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "\320\234\320\275\320\276\320\263\320\276\321\200\320\260\320\267\321\200\321\217\320\264\320\275\320\260\321\217 \321\210\320\270\320\275\320\260", nullptr));
        lw_AvailableInterfaces->setSortingEnabled(__sortingEnabled);

        gb_GIPO->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\200\320\265\320\266\320\270\320\274\320\276\320\262 \321\200\320\260\320\261\320\276\321\202\321\213 GIPO \320\277\320\276\321\200\321\202\320\276\320\262", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \320\277\320\276\321\200\321\202\320\260", nullptr));
        Radio_Input->setText(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264", nullptr));
        rb_VCC->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\321\217\320\266\320\272\320\260 \320\272 \320\277\320\270\321\202\320\260\320\275\320\270\321\216", nullptr));
        rb_GND->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\202\321\217\320\266\320\272\320\260 \320\272 \320\267\320\265\320\274\320\273\320\265", nullptr));
        rb_NULL->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\201\321\203\321\202\321\201\321\202\320\262\320\270\320\265 \320\277\320\276\320\264\321\202\321\217\320\266\320\272\320\270", nullptr));
        Radio_Output->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        rb_LowPotential->setText(QCoreApplication::translate("MainWindow", "\320\235\320\270\320\267\320\272\320\270\320\271 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\260\320\273", nullptr));
        rb_HighPotential->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\201\320\276\320\272\320\270\320\271 \320\277\320\276\321\202\320\265\320\275\321\206\320\270\320\260\320\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tw_ModesGIPO->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\342\204\226 \320\277\320\276\321\200\321\202\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tw_ModesGIPO->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tw_ModesGIPO->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\260 \321\200\320\265\320\266\320\270\320\274\320\260", nullptr));
        pb_AddModeGIPO->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\321\203 \320\277\320\276\321\200\321\202\320\260", nullptr));
        pb_DellModeGIPO->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\275\320\260\321\201\321\202\321\200\320\276\320\271\320\272\321\203 \320\277\320\276\321\200\321\202\320\260", nullptr));
        gb_MainParam->setTitle(QCoreApplication::translate("MainWindow", "\320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\321\200\320\270\321\217 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\265\320\273\321\214 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \321\202\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \321\217\320\264\321\200\320\260 (\320\234\320\223\321\206):", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\247\320\260\321\201\321\202\320\276\321\202\320\260 \321\202\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\277\320\265\321\200\320\270\321\204\320\265\321\200\320\270\320\271\320\275\321\213\321\205 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262 (\320\234\320\223\321\206):", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
