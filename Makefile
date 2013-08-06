.SUFFIXES : .cpp .c .o

CXX = g++

INC = /usr/include/ncursesw/
LIBS = -lncursesw
CXXFLAGS = -I $(INC) 

SRCS = src/mainFrame.cpp src/loginWindow.cpp src/mainWindow.cpp \
src/menuWindow.cpp src/writeWindow.cpp src/streamWindow.cpp
OBJS = $(SRCS:.cpp=.o)

TARGET = shellter

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LIBS)

dep :
	gccmakedep $(INC) $(SRCS)

clean :
	rm -rf $(OBJS) $(TARGET) core

new : 
	$(MAKE) clean 
	$(MAKE) 
