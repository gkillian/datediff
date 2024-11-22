CC=gcc
MKDIR=mkdir -p
RM=rm -rf
CFLAGS=-Wall -pedantic -std=c99
DEBUG=-g


all: 
	@echo to be done later


clean: lean
	-@$(RM) *.o
	-@$(RM) *.exe

lean :
	-@$(RM) *~
	-@$(RM) "#*#"
	-@$(RM) ?
