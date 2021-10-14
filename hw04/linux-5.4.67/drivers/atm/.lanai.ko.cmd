cmd_drivers/atm/lanai.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/atm/lanai.ko drivers/atm/lanai.o drivers/atm/lanai.mod.o;  true
