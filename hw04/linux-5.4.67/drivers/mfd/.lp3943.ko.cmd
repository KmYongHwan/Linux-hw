cmd_drivers/mfd/lp3943.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/lp3943.ko drivers/mfd/lp3943.o drivers/mfd/lp3943.mod.o;  true
