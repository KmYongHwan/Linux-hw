cmd_drivers/mfd/pcf50633.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/pcf50633.ko drivers/mfd/pcf50633.o drivers/mfd/pcf50633.mod.o;  true
