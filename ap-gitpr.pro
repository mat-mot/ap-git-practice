QT -= gui
TARGET = cll
HEADERS += node.h
HEADERS += Circular_linked_list.h
CONFIG += c++11 console
CONFIG -= app_bundle
SOURCES +=  main.cpp
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
