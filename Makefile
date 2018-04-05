htmlgen: src/main.cpp
	g++ src/main.cpp -o out/htmlgen

clean:
	rm out/*

install: htmlgen
	cp out/htmlgen /usr/local/bin/

uninstall:
	rm /usr/local/bin/htmlgen
