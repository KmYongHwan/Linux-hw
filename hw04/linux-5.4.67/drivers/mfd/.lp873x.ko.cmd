cmd_drivers/mfd/lp873x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/lp873x.ko drivers/mfd/lp873x.o drivers/mfd/lp873x.mod.o;  true
