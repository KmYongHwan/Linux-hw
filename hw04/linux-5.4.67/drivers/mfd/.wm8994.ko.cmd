cmd_drivers/mfd/wm8994.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/wm8994.ko drivers/mfd/wm8994.o drivers/mfd/wm8994.mod.o;  true
