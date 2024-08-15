currdir=$(shell pwd)
csrcs=$(wildcard *.c)
cppsrcs=$(wildcard *.cpp)
headers=$(wildcard *.h)
srcs=$(csrcs) $(cppsrcs)
cobjs=$(patsubst %.c,output/%.c.o,$(csrcs))
cppobjs=$(patsubst %.cpp,output/%.cpp.o,$(cppsrcs))
cdefs=$(patsubst %.c,output/%.c.d,$(csrcs))
cppdefs=$(patsubst %.cpp,output/%.cpp.d,$(cppsrcs))
cmacros=$(patsubst %.c,output/%.c.m,$(csrcs))
cppmacros=$(patsubst %.cpp,output/%.cpp.m,$(cppsrcs))
cdeps=$(csrcs)
cdeps+=$(headers)
cdeps+=$(cdefs)
cdeps+=$(cmacros)
cppdeps=$(cppsrcpps)
cppdeps+=$(headers)
cppdeps+=$(cppdefs)
cppdeps+=$(cppmacppros)
objs=$(cobjs)
objs+=$(cppobjs)
target=sample
CFLAGS=-Wall -save-temps=obj -I$(currdir)
CFLAGS+=-g -finstrument-functions 
CXXFLAGS=-Wall -save-temps=obj -I$(currdir)
CXXFLAGS+=-g -finstrument-functions 
LDFLAGS=
LIBS=-lpthread

.SUFFIXES:
all: prepare $(target)

.PHONY: prepare $(target)

prepare: 
	mkdir -p output

$(target): $(cobjs) $(cppobjs)
	$(CXX) $(LDFLAGS) -o $@ $(objs) $(LIBS)

$(cobjs): $(cdeps)

$(cppobjs): $(cppdeps)

output/%.cpp.o: %.cpp $(headers)
	$(CXX) $(CXXFLAGS) -o $@ -c $<

output/%.cpp.d: %.cpp $(headers)
	$(CXX) -E -dD $(CXXFLAGS) $< > $@

output/%.cpp.m: %.cpp $(headers)
	$(CXX) -E -dM $(CXXFLAGS) $< > $@

output/%.c.o: %.c $(headers)
	$(CC) $(CFLAGS) -o $@ -c $<

output/%.c.d: %.c $(headers)
	$(CC) -E -dD $(CFLAGS) $< > $@

output/%.c.m: %.c $(headers)
	$(CC) -E -dM $(CFLAGS) $< > $@

clean: 
	rm -rf $(target) output
	rm -rf *.[oidsm]
	rm -rf *.ii

