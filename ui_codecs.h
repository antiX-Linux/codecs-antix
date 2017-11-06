/********************************************************************************
** Form generated from reading UI file 'codecs.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODECS_H
#define UI_CODECS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_codecs
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageAccept;
    QLabel *labelAccept;
    QWidget *pageDownload;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QLabel *labelDownload;
    QProgressBar *progressBar;
    QGridLayout *buttonBar;
    QPushButton *buttonCancel;
    QPushButton *buttonOk;
    QSpacerItem *horizontalSpacer2;
    QLabel *label;
    QPushButton *buttonAbout;
    QSpacerItem *horizontalSpacer1;
    QPushButton *buttonHelp;

    void setupUi(QDialog *codecs)
    {
        if (codecs->objectName().isEmpty())
            codecs->setObjectName(QStringLiteral("codecs"));
        codecs->resize(522, 297);
        verticalLayout = new QVBoxLayout(codecs);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        stackedWidget = new QStackedWidget(codecs);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageAccept = new QWidget();
        pageAccept->setObjectName(QStringLiteral("pageAccept"));
        labelAccept = new QLabel(pageAccept);
        labelAccept->setObjectName(QStringLiteral("labelAccept"));
        labelAccept->setGeometry(QRect(20, 20, 481, 201));
        labelAccept->setTextFormat(Qt::RichText);
        labelAccept->setWordWrap(true);
        stackedWidget->addWidget(pageAccept);
        pageDownload = new QWidget();
        pageDownload->setObjectName(QStringLiteral("pageDownload"));
        verticalLayout_2 = new QVBoxLayout(pageDownload);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(pageDownload);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        labelDownload = new QLabel(groupBox);
        labelDownload->setObjectName(QStringLiteral("labelDownload"));
        labelDownload->setGeometry(QRect(0, 30, 481, 151));
        labelDownload->setWordWrap(true);

        verticalLayout_2->addWidget(groupBox);

        progressBar = new QProgressBar(pageDownload);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        verticalLayout_2->addWidget(progressBar);

        stackedWidget->addWidget(pageDownload);

        verticalLayout->addWidget(stackedWidget);

        buttonBar = new QGridLayout();
        buttonBar->setSpacing(5);
        buttonBar->setObjectName(QStringLiteral("buttonBar"));
        buttonBar->setSizeConstraint(QLayout::SetDefaultConstraint);
        buttonBar->setContentsMargins(0, 0, 0, 0);
        buttonCancel = new QPushButton(codecs);
        buttonCancel->setObjectName(QStringLiteral("buttonCancel"));
        QIcon icon;
        icon.addFile(QStringLiteral("../../../../../../../../../../usr/share/icons/Tango/16x16/actions/gtk-cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonCancel->setIcon(icon);
        buttonCancel->setAutoDefault(true);

        buttonBar->addWidget(buttonCancel, 0, 8, 1, 1);

        buttonOk = new QPushButton(codecs);
        buttonOk->setObjectName(QStringLiteral("buttonOk"));
        QIcon icon1;
        icon1.addFile(QStringLiteral("../../../../../../../../../../usr/share/user/icons/dialog-ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonOk->setIcon(icon1);
        buttonOk->setAutoDefault(true);

        buttonBar->addWidget(buttonOk, 0, 6, 1, 1);

        horizontalSpacer2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonBar->addItem(horizontalSpacer2, 0, 5, 1, 1);

        label = new QLabel(codecs);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(32, 32));
        label->setMidLineWidth(0);
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../../../../../../../usr/local/share/icons/antix-globe-3.png")));
        label->setScaledContents(true);

        buttonBar->addWidget(label, 0, 3, 1, 1);

        buttonAbout = new QPushButton(codecs);
        buttonAbout->setObjectName(QStringLiteral("buttonAbout"));
        QIcon icon2;
        icon2.addFile(QStringLiteral("../../../../../../../../../../usr/share/icons/Tango/16x16/apps/accessories-text-editor.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonAbout->setIcon(icon2);
        buttonAbout->setAutoDefault(true);

        buttonBar->addWidget(buttonAbout, 0, 0, 1, 1);

        horizontalSpacer1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonBar->addItem(horizontalSpacer1, 0, 2, 1, 1);

        buttonHelp = new QPushButton(codecs);
        buttonHelp->setObjectName(QStringLiteral("buttonHelp"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonHelp->sizePolicy().hasHeightForWidth());
        buttonHelp->setSizePolicy(sizePolicy);
        QIcon icon3;
        icon3.addFile(QStringLiteral("../../../../../../../../../usr/share/icons/Tango/16x16/apps/gnome-help.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonHelp->setIcon(icon3);

        buttonBar->addWidget(buttonHelp, 0, 1, 1, 1);


        verticalLayout->addLayout(buttonBar);


        retranslateUi(codecs);
        QObject::connect(buttonCancel, SIGNAL(pressed()), codecs, SLOT(reject()));

        stackedWidget->setCurrentIndex(0);
        buttonOk->setDefault(true);


        QMetaObject::connectSlotsByName(codecs);
    } // setupUi

    void retranslateUi(QDialog *codecs)
    {
        codecs->setWindowTitle(QApplication::translate("codecs", "Codecs Installer", Q_NULLPTR));
        labelAccept->setText(QApplication::translate("codecs", "<html><head/><body><p align=\"justify\">This application allows you to install restricted codecs that permit advanced video and audio functions.</p><p align=\"justify\">In some juridictions their distribution may be limited so the user must meet local regulations. </p><p align=\"justify\"><br/></p><p align=\"justify\"><span style=\" font-weight:600;\">Do you assume legal responsibility for downloading these codecs?</span></p></body></html>", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("codecs", "Downloading codecs files", Q_NULLPTR));
        labelDownload->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonCancel->setToolTip(QApplication::translate("codecs", "Cancel any changes then quit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonCancel->setText(QApplication::translate("codecs", "Cancel", Q_NULLPTR));
        buttonCancel->setShortcut(QApplication::translate("codecs", "Alt+N", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonOk->setToolTip(QApplication::translate("codecs", "Apply any changes then quit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonOk->setText(QApplication::translate("codecs", "OK", Q_NULLPTR));
        buttonOk->setShortcut(QString());
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonAbout->setToolTip(QApplication::translate("codecs", "About this application", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonAbout->setText(QApplication::translate("codecs", "About...", Q_NULLPTR));
        buttonAbout->setShortcut(QApplication::translate("codecs", "Alt+B", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonHelp->setToolTip(QApplication::translate("codecs", "Display help ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonHelp->setText(QApplication::translate("codecs", "Help", Q_NULLPTR));
        buttonHelp->setShortcut(QApplication::translate("codecs", "Alt+H", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class codecs: public Ui_codecs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODECS_H
