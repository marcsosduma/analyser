# Project: cobgdb
# Makefile created by Dev-C++ 5.11

# detect if running under unix by finding 'rm' in $PATH :
ifeq ($(wildcard $(addsuffix /rm,$(subst :, ,$(PATH)))),)
WINMODE=1
else
WINMODE=0
endif

#
# Windows
#
ifeq ($(WINMODE),1)
CPP      = g++.exe
CC       = gcc.exe
RES      = 
OBJ      = cobgdb.o terminal.o read_file.o regex_gdb.o gdb_process.o parser_mi2.o parser.o mi2.o testMI2.o testParser.o realpath.o variables.o debugger.o output.o highlight.o
LINKOBJ  = cobgdb.o terminal.o read_file.o regex_gdb.o gdb_process.o parser_mi2.o parser.o mi2.o testMI2.o testParser.o realpath.o variables.o debugger.o output.o highlight.o
LIBS     = -lregex
INCS     = 
CXXINCS  = 
BIN      = cobgdb.exe
CXXFLAGS = $(CXXINCS) -Wfatal-errors
CFLAGS   = $(INCS) -fdiagnostics-color=always -g
RM       = del
else
#
# Linux
# 
CPP      = g++
CC       = gcc
RES      = 
OBJ      = cobgdb.o terminal.o read_file.o parser.o parser_mi2.o regex_gdb.o gdb_process.o mi2.o testMI2.o testParser.o variables.o debugger.o output.o highlight.o
LINKOBJ  = cobgdb.o terminal.o read_file.o parser.o parser_mi2.o regex_gdb.o gdb_process.o mi2.o testMI2.o testParser.o variables.o debugger.o output.o highlight.o
LIBS     = 
INCS     = 
CXXINCS  = 
BIN      = cobgdb
CXXFLAGS = $(CXXINCS) -Wfatal-errors
CFLAGS   = $(INCS) -fdiagnostics-color=always -g
RM       = rm -f
endif

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o $(BIN) $(LIBS)

cobgdb.o: cobgdb.c
	$(CC) -c cobgdb.c -o cobgdb.o $(CFLAGS)

terminal.o: terminal.c
	$(CC) -c terminal.c -o terminal.o $(CFLAGS)

read_file.o: read_file.c
	$(CC) -c read_file.c -o read_file.o $(CFLAGS)

regex_gdb.o: regex_gdb.c
	$(CC) -c regex_gdb.c -o regex_gdb.o $(CFLAGS)

parser.o: parser.c
	$(CC) -c parser.c -o parser.o $(CFLAGS)

gdb_process.o: gdb_process.c
	$(CC) -c gdb_process.c -o gdb_process.o $(CFLAGS)

mi2.o: mi2.c
	$(CC) -c mi2.c -o mi2.o $(CFLAGS)

parser_mi2.o: parser_mi2.c
	$(CC) -c parser_mi2.c -o parser_mi2.o $(CFLAGS)

testMI2.o: testMI2.c
	$(CC) -c testMI2.c -o testMI2.o $(CFLAGS)

testParser.o: testParser.c
	$(CC) -c testParser.c -o testParser.o $(CFLAGS)

realpath.o: realpath.c
	$(CC) -c realpath.c -o realpath.o $(CFLAGS)

variables.o: variables.c
	$(CC) -c variables.c -o variables.o $(CFLAGS)

debugger.o: debugger.c
	$(CC) -c debugger.c -o debugger.o $(CFLAGS)

output.o: output.c
	$(CC) -c output.c -o output.o $(CFLAGS)

highlight.o: highlight.c
	$(CC) -c highlight.c -o highlight.o $(CFLAGS)
