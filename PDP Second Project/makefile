all: derle bagla calistir
derle:
	gcc -c -I "./include" ./src/Test.c -o ./lib/Test.o
	gcc -c -I "./include" ./src/Taktik.c -o ./lib/Taktik.o
	gcc -c -I "./include" ./src/ATaktik.c -o ./lib/ATaktik.o
	gcc -c -I "./include" ./src/BTaktik.c -o ./lib/BTaktik.o
	gcc -c -I "./include" ./src/Uretim.c -o ./lib/Uretim.o
	gcc -c -I "./include" ./src/AUretim.c -o ./lib/AUretim.o
	gcc -c -I "./include" ./src/BUretim.c -o ./lib/BUretim.o
	gcc -c -I "./include" ./src/Koloni.c -o ./lib/Koloni.o
	gcc -c -I "./include" ./src/Oyun.c -o ./lib/Oyun.o
bagla:
	gcc ./lib/Test.o ./lib/Taktik.o ./lib/ATaktik.o ./lib/BTaktik.o ./lib/Uretim.o ./lib/AUretim.o ./lib/BUretim.o ./lib/Koloni.o ./lib/Oyun.o -o ./bin/program
calistir:
	./bin/program