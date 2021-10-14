cmd_drivers/i3c/i3c.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/i3c/i3c.o drivers/i3c/device.o drivers/i3c/master.o
