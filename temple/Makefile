#define compiler var
GCC = gcc
GXX = g++

#define compiler switch
CFLAG = -Wall -c

#define header of file dir
INCLUDE = ./

#define compiler source code dir
SRC_DIR = ./
SRC = ./*.c

#define output dir for object file
OBJOUTPUT = ./obj/

#define output dir for bin
BINOUTPUT = ./bin/

#$(wildcard *.c)”来获取工作目录下的所有的.c文件列表
#notdir ： 去除路径
#patsubst ：替换通配符
#wildcard : 扩展通配符
#加前缀函数—addprefix
OBJS = $(patsubst %.c,%.o, $(wildcard *.c))
OBJS_DIR = $(addprefix $(OBJOUTPUT), $(notdir $(OBJS)))
%.o:%.c
	$(GCC) $(CFLAG) $< -I$(INCLUDE) -o $@
	mv $@ $(OBJOUTPUT)
#project name:hello
hello:$(OBJS)$
	$(GCC) $(OBJS_DIR) -o $(BINOUTPUT)$@


clean:

	rm -f $(OBJOUTPUT)*.o
