
.PATH:${.CURDIR}/src/sregex ${.CURDIR}

LIB=sregex

SRCS= sre_capture.c sre_palloc.c sre_regex.c sre_regex_compiler.c sre_vm_bytecode.c sre_vm_pike.c sre_vm_thompson.c sre_yyparser.y

CFLAGS+=-I${.CURDIR}/src -I${.CURDIR}
YACC=bison -d

.SUFFIXES:.dasc

.o.dasc:
	luajit dynasm/dynasm.lua -o ${.TARGET} ${.ALLSRC}

.include <bsd.lib.mk>
.include <bsd.obj.mk>
