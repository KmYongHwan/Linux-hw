cmd_drivers/parport/parport.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/parport/parport.ko drivers/parport/parport.o drivers/parport/parport.mod.o;  true
