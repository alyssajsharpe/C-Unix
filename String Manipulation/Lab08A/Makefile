# Alyssa Sharpe, November 13, 2019
# #Lab08 Part A Makefile
#
# my variables
EXEC = main
FUNCS = functions

OBJS = ${EXEC}.o ${FUNCS}.o
HDRS = ${FUNCS}.h

# implicit rules variables
CFLAGS = -Wall -g 
LDFLAGS =
CC = gcc

all : ${EXEC}

${EXEC} : ${OBJS}

${OBJS} : ${HDRS}

clean :
	rm -rf ${EXEC} ${OBJS} core
