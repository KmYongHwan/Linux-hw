cmd_drivers/input/touchscreen/dynapro.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/touchscreen/dynapro.ko drivers/input/touchscreen/dynapro.o drivers/input/touchscreen/dynapro.mod.o;  true
