cmd_drivers/xen/xen-privcmd.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/xen/xen-privcmd.o drivers/xen/privcmd.o drivers/xen/privcmd-buf.o
