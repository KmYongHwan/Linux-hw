cmd_drivers/atm/adummy.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/atm/adummy.ko drivers/atm/adummy.o drivers/atm/adummy.mod.o;  true
