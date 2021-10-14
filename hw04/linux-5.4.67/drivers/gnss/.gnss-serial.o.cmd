cmd_drivers/gnss/gnss-serial.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/gnss/gnss-serial.o drivers/gnss/serial.o
