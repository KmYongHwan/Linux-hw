cmd_drivers/regulator/tps65086-regulator.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/tps65086-regulator.ko drivers/regulator/tps65086-regulator.o drivers/regulator/tps65086-regulator.mod.o;  true
