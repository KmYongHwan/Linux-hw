cmd_drivers/input/misc/mma8450.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/input/misc/mma8450.ko drivers/input/misc/mma8450.o drivers/input/misc/mma8450.mod.o;  true
