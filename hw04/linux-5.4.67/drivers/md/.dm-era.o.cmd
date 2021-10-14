cmd_drivers/md/dm-era.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/md/dm-era.o drivers/md/dm-era-target.o
