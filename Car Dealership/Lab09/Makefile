#Alyssa Sharpe
#Lab 9 11.26.2019
#Makefile  CS367 


#my variables
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
