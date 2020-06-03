#
# Students' Makefile for the Malloc Lab
#

CC = gcc -g
CFLAGS = -Wall
.c.o:
	@$(CC) $(CFLAGS) -c -o $*.o $<
	
# 待补充
OBJS = mmdriver.o memlib.o mm.o
OBJS2 = mmdriver.o memlib.o ep_mm.o

all: mmdriver epmmdriver

mmdriver: $(OBJS)
# 待补充gcc命令（使用变量）
	$(CC) $(CFLAGS) -o $@ $(OBJS)

epmmdriver: $(OBJS2)
	$(CC) $(CFLAGS) -o $@ $(OBJS2)

#待补充
mmdriver.o: mmdriver.c mm.h memlib.h 
memlib.o: memlib.c config.h memlib.h 
mm.o: mm.c mm.h memlib.h 
ep_mm.o: ep_mm.c mm.h memlib.h

clean:
	rm -f *~ *.o mmdrive


