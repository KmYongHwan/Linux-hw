cmd_drivers/mfd/mt6397.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/mt6397.ko drivers/mfd/mt6397.o drivers/mfd/mt6397.mod.o;  true
