cmd_drivers/power/supply/generic-adc-battery.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/power/supply/generic-adc-battery.ko drivers/power/supply/generic-adc-battery.o drivers/power/supply/generic-adc-battery.mod.o;  true
