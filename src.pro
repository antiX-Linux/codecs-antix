#-------------------------------------------------
#
# Project created by QtCreator 2014-02-14T11:35:17
#
#-------------------------------------------------

#/*****************************************************************************
#* src.pro
# *****************************************************************************
# * Copyright (C) 2014 MX Authors
# *
# * Authors: Jerry 3904
# *          Anticaptilista
# *          Adrian
# *          MX Linux <http://mxlinux.org>
# *
# * This program is free software: you can redistribute it and/or modify
# * it under the terms of the GNU General Public License as published by
# * the Free Software Foundation, either version 3 of the License, or
# * (at your option) any later version.
# *
# * MX Codecs is distributed in the hope that it will be useful,
# * but WITHOUT ANY WARRANTY; without even the implied warranty of
# * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# * GNU General Public License for more details.
# *
# * You should have received a copy of the GNU General Public License
# * along with MX Codecs.  If not, see <http://www.gnu.org/licenses/>.
# **********************************************************************/


QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = codecs
TEMPLATE = app


SOURCES += main.cpp\
        codecs.cpp

HEADERS  += codecs.h

FORMS    += codecs.ui

TRANSLATIONS += translations/codecs_ca.ts \
                translations/codecs_de.ts \
                translations/codecs_el.ts \
                translations/codecs_es.ts \
                translations/codecs_fr.ts \
                translations/codecs_it.ts \
                translations/codecs_ja.ts \
                translations/codecs_kk.ts \
                translations/codecs_nl.ts \
                translations/codecs_pl.ts \
                translations/codecs_pt.ts \
                translations/codecs_ro.ts \
                translations/codecs_ru.ts \
                translations/codecs_sv.ts \
                translations/codecs_tr.ts

