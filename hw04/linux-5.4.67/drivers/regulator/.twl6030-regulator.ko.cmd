cmd_drivers/regulator/twl6030-regulator.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/twl6030-regulator.ko drivers/regulator/twl6030-regulator.o drivers/regulator/twl6030-regulator.mod.o;  true
