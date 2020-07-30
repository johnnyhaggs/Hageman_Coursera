#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# <Put a Description Here>
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <Put a description of the supported targets here>
#
# Platform Overrides:
#      <Put a description of the supported Overrides here
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
# If command line doesn't override, then remove the line below
PLATFORM = HOST

ifeq($(PLATFORM),HOST)
	ARCH:=$(shell arch)
	OS:=$(shell uname)
	CC=gcc	
else ifeq($PLATFORM),MSP432)
	ARCH=
	CC=

endif

# Architectures Specific Flags
LINKER_FILE = -T ../msp432p401r.lds  
CPU = 
ARCH = 
SPECS = 

# Compiler Flags and Defines
CC = 
LD = 
LDFLAGS = 
CFLAGS = 
CPPFLAGs = 

OBJS:=$(SRCS:.c=.o)

#Typical format:
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $(LDFLAGS) -O $(TARGET) $(OBJS)

#Version with automatic variables:
$(TARGET): $(OBJS)
        $(CC) $(CFLAGS) $(INCLUDES) $(LDFLAGS) -O $@ $^

#More example code from instructions:
	ifeq ($(PLATFORM),HOST)
		CC = <Add the appropriate compiler>
		# etc
	else
		CC = <Add the appropriate compiler>
		# etc
	endif


.PHONY: all
	all: main.out
main.out: $(OBJS)

.PHONY: clean


.PHONY: debug


#shell command examples for host:
ARCH:=$(shell arch)
CWD:=$(shell pwd)
OS:=$(shell uname)

#example conditional:
ifeq ($(OS),Linux)
	CC=gcc
endif


