cmd_drivers/mfd/ti-lmu.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/ti-lmu.ko drivers/mfd/ti-lmu.o drivers/mfd/ti-lmu.mod.o;  true
