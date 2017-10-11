#指定编译器
CXX = g++

#指定编译器选项
CFLAGS = -g -std=c++11 -Wall -I $(INC_DIR)

#头文件路径
INC_DIR = ./include

#源文件路径
SRC_DIR = ./src

PROG = Weather
HEADS = $(wildcard $(INC_DIR)/*.h)
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:.cpp=.o)

$(PROG) : $(OBJS)
	$(CXX) -o $@ $^

$(OBJS) : %.o:%.cpp $(HEADS)
	$(CXX) -c $(CFLAGS) $< -o $@

.PHONY : clean
clean :
	-rm $(PROG) $(OBJS)