cmd_drivers/dax/pmem/dax_pmem_compat.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/dax/pmem/dax_pmem_compat.o drivers/dax/pmem/compat.o
