cmd_drivers/staging/pi433/pi433.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/staging/pi433/pi433.o drivers/staging/pi433/pi433_if.o drivers/staging/pi433/rf69.o
