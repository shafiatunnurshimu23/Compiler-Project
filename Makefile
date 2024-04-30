main:
	bison -d 1907001.y
	flex 1907001.l
	gcc -o app lex.yy.c 1907001.tab.c
	./app