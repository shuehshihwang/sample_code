TOPDIR=$(shell pwd)/../../..
include $(TOPDIR)/Profile.mak
include $(TOPDIR)/apps/backdoor/Rules.mak


all: $(patsubst %.c, %.o, ${wildcard *.c})

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $(filter %.c, $^)

clean:
	rm -rf *.o

