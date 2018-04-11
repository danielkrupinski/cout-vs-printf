CFLAGS=-O$(O)  -std=c++17
O=2
LFLAGS=
OBJS=objs/main.o objs/test.o objs/integer.o objs/string.o


.PHONY: all
all: objs a.out

./a.out: $(OBJS)
	@ echo "    LINK ./a.out"
	@ $(CXX) $(OBJS) -o "./a.out" $(LFLAGS)

objs/main.o: src/main.cpp src/../include/integer.h src/../include/test.h \
 src/../include/string.h
	@ echo "    CXX  src/main.cpp"
	@ $(CXX) $(CFLAGS) -c "src/main.cpp" -o $@
objs/test.o: src/test.cpp src/../include/test.h
	@ echo "    CXX  src/test.cpp"
	@ $(CXX) $(CFLAGS) -c "src/test.cpp" -o $@
objs/integer.o: src/integer.cpp src/../include/integer.h src/../include/test.h
	@ echo "    CXX  src/integer.cpp"
	@ $(CXX) $(CFLAGS) -c "src/integer.cpp" -o $@
objs/string.o: src/string.cpp src/../include/string.h src/../include/test.h
	@ echo "    CXX  src/string.cpp"
	@ $(CXX) $(CFLAGS) -c "src/string.cpp" -o $@

objs:
	@ mkdir "objs"
.PHONY: c clean
c: clean
clean:
	@ if [ -d "objs" ]; then rm -r "objs"; fi
	@ rm -f "./a.out"
	@ echo "    CLEAN"
.PHONY: f fresh
f: fresh
fresh: clean
	@ make all --no-print-directory
.PHONY: r run
r: run
run: all
	@ ././a.out

.PHONY: d debug
d: debug
debug: CFLAGS += -DDEBUG -g3 -Wall -Wextra
debug: O=0
debug: all

.PHONY: check-syntax
check-syntax:
	$(CXX) $(CFLAGS) -fsyntax-only -Wall -o /dev/null -S $(CHK_SOURCES)
