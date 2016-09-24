CC=/usr/bin/g++
CCC=/usr/bin/gcc
CFLAGS=-g -ansi
SRCPATH=src
INCLUDE=-I$(SRCPATH)
LDFLAGS=-g
LOADLIBS=-lm
OBJPATH=obj




OBJECTS = \
$(OBJPATH)/PPAbblst.o \
$(OBJPATH)/PPCConte.o \
$(OBJPATH)/PPCStrin.o \
$(OBJPATH)/PPCtglst.o \
$(OBJPATH)/PPCtgstr.o \
$(OBJPATH)/PPFnclst.o \
$(OBJPATH)/PPFuncts.o \
$(OBJPATH)/PPInput.o \
$(OBJPATH)/PPNumbers.o \
$(OBJPATH)/PPRlchls.o \
$(OBJPATH)/PPRulchr.o \
$(OBJPATH)/PPRule.o \
$(OBJPATH)/PPRullst.o \
$(OBJPATH)/preproc.o

$(OBJPATH)/%.o		:  $(SRCPATH)/%.cc
	 $(CC) $(INCLUDE) $(CFLAGS) $(DEFINES) -o $@ -c $<



all		:	preproc
preproc	:	$(OBJECTS)
	$(CC) $(LDFLAGS) -o preproc $(OBJECTS) $(LOADLIBS)

clean	 	:
	rm -f preproc  $(OBJPATH)/*.o

