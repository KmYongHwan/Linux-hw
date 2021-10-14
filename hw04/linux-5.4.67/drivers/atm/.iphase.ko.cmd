cmd_drivers/atm/iphase.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/atm/iphase.ko drivers/atm/iphase.o drivers/atm/iphase.mod.o;  true
