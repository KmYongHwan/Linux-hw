cmd_drivers/hsi/hsi.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/hsi/hsi.o drivers/hsi/hsi_core.o drivers/hsi/hsi_boardinfo.o
