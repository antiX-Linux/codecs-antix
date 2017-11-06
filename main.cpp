/*****************************************************************************
 * main.cpp
 *****************************************************************************
 * Copyright (C) 2014 MX Authors
 *
 * Authors: Jerry 3904
 *          Anticaptilista
 *          Adrian
 *          MX Linux <http://mxlinux.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MX Codecs is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MX Codecs.  If not, see <http://www.gnu.org/licenses/>.
 **********************************************************************/

#include "codecs.h"
#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <unistd.h>


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  a.setWindowIcon(QIcon("/usr/share/pixmaps/codecs.png"));

  QTranslator qtTran;
  qtTran.load(QString("qt_") + QLocale::system().name());
  a.installTranslator(&qtTran);

  QTranslator appTran;
  appTran.load(QString("codecs_") + QLocale::system().name(), "/usr/share/codecs/locale");
  a.installTranslator(&appTran);


  if (getuid() == 0) {
    codecs w;
    w.show();

    return a.exec();

  } else {
    QApplication::beep();
    QMessageBox::critical(0, QString::null,
                          QApplication::tr("You must run this program as root."));
    return 1;
  }

}