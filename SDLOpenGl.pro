TARGET=SDLOpenGl

OBJECTS_DIR=obj

SOURCES+=$$PWD/src/main.cpp \
         $$PWD/src/SDLOpenGl.cpp

HEADERS+=$$PWD/include/SDLOpenGl.h

include($(HOME)/NGL/UseNGL.pri)



