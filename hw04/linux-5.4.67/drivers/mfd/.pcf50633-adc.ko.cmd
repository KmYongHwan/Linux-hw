cmd_drivers/mfd/pcf50633-adc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/pcf50633-adc.ko drivers/mfd/pcf50633-adc.o drivers/mfd/pcf50633-adc.mod.o;  true
