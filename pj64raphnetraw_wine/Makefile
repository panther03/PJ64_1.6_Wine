all:
	make -C hidapi_wineproxy
	make -C src
	cp hidapi_wineproxy/hidapi_wineproxy.dll.so out/hidapi_wineproxy.dll
	mkdir -p out/
	cp src/pj64raphnetraw.dll out/pj64raphnetraw.dll

clean:
	make -C hidapi_wineproxy clean
	make -C src clean