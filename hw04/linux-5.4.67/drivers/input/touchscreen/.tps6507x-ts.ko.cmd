cmd_drivers/input/touchscreen/tps6507x-ts.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/touchscreen/tps6507x-ts.ko drivers/input/touchscreen/tps6507x-ts.o drivers/input/touchscreen/tps6507x-ts.mod.o;  true
