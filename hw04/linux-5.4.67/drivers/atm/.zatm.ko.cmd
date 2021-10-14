cmd_drivers/atm/zatm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/atm/zatm.ko drivers/atm/zatm.o drivers/atm/zatm.mod.o;  true
