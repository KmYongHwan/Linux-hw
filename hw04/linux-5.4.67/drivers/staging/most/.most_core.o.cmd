cmd_drivers/staging/most/most_core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/staging/most/most_core.o drivers/staging/most/core.o drivers/staging/most/configfs.o
