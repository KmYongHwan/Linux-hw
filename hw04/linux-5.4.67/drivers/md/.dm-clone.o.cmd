cmd_drivers/md/dm-clone.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/md/dm-clone.o drivers/md/dm-clone-target.o drivers/md/dm-clone-metadata.o
