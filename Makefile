.SUFFIXES : .cpp .c .o

CXX = g++

INC = /usr/include/ncursesw/
LIBS = -lncursesw
CXXFLAGS = -I $(INC) 

SRCS = src/mainFrame.cpp src/login.cpp
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
