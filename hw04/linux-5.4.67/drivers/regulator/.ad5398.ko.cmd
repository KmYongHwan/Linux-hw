cmd_drivers/regulator/ad5398.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/ad5398.ko drivers/regulator/ad5398.o drivers/regulator/ad5398.mod.o;  true
