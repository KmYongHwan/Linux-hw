cmd_drivers/mfd/dln2.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/dln2.ko drivers/mfd/dln2.o drivers/mfd/dln2.mod.o;  true
