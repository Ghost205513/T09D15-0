CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c11 -g

all: decision.o process.o io.o main.o stat.o
	$(CC) decision.o process.o io.o stat.o main.o -o ./../build/Quest_3 -lm

main.o: main_executable_module.c
	$(CC) $(CFLAGS) main_executable_module.c -c -o ./main.o

decision.o: ./../yet_another_decision_module/decision.c
	$(CC) $(CFLAGS) ./../yet_another_decision_module/decision.c -c -o ./../main_executable_module/decision.o

process.o: ./../data_module/data_process.c
	$(CC) $(CFLAGS) ./../data_module/data_process.c -c -o ./../main_executable_module/process.o

io.o: ./../data_libs/data_io.c
	$(CC) $(CFLAGS) ./../data_libs/data_io.c -c -o ./../main_executable_module/io.o

stat.o: ./../data_libs/data_stat.c
	$(CC) $(CFLAGS) ./../data_libs/data_stat.c -c -o ./../main_executable_module/stat.o

clean:
	rm -rf *.o 

rebuild:
	$(clean)
	$(all)