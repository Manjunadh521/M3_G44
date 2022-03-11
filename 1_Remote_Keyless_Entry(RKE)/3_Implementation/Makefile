CC=arm-none-eabi-gcc
CFLAGS=-c -mcpu=cortex-m4 -mthumb -std=gnu11 -Wall -O0
LDFLAGS= -nostdlib -T linker.ld 


all:clean main.o driver_fun.o startup.o finalled.elf qemu


main.o:main.c
	$(CC) $(CFLAGS) main.c -o main.o
	
driver_fun.o:driver_fun.c
	$(CC) $(CFLAGS) driver_fun.c -o driver_fun.o

interrupts.o:startup.c
	$(CC) $(CFLAGS) startup.c -o startup.o


finalled.elf: main.o driver_fun.o startup.o
	$(CC) $(LDFLAGS) main.o driver_fun.o startup.o -o finalled.elf

qemu:
	qemu-system-gnuarmeclipse.exe -M STM32F4-Discovery -mcu STM32F407VG -kernel finalled.elf

clean:
	rm -rf *.o *.elf