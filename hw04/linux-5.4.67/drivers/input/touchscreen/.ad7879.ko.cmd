cmd_drivers/input/touchscreen/ad7879.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/touchscreen/ad7879.ko drivers/input/touchscreen/ad7879.o drivers/input/touchscreen/ad7879.mod.o;  true
