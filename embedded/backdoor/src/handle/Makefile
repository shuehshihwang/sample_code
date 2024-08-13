TOPDIR=$(shell pwd)/../../..
include $(TOPDIR)/Profile.mak
include $(TOPDIR)/apps/backdoor/Rules.mak

all: $(patsubst %.c, %.o, ${wildcard *.c})

%.o:%.c %.h
	gcc $(CFLAGS) -o $@ -c $(filter %.c, $^)

clean: 
	rm -rf *.o

