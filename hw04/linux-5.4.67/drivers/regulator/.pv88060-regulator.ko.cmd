cmd_drivers/regulator/pv88060-regulator.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/pv88060-regulator.ko drivers/regulator/pv88060-regulator.o drivers/regulator/pv88060-regulator.mod.o;  true
