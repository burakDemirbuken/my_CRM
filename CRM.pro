QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/CustomerPage.cpp \
    src/main.cpp \
    src/crm.cpp

HEADERS += \
    include/CustomerPage.h \
    include/crm.hpp

FORMS += \
    form/crm.ui \
    form/customerpage.ui

# Qt include ve lib yollarını düzeltme
INCLUDEPATH += \
    include/ \
    C:/Qt/6.9.0/mingw_64/include \
    C:/Qt/6.9.0/mingw_64/include/QtCore \
    C:/Qt/6.9.0/mingw_64/include/QtGui \
    C:/Qt/6.9.0/mingw_64/include/QtWidgets

LIBS += -L"C:/Qt/6.9.0/mingw_64/lib" -lQt6Widgets -lQt6Gui -lQt6Core

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
