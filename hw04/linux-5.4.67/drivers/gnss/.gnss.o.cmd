cmd_drivers/gnss/gnss.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/gnss/gnss.o drivers/gnss/core.o
