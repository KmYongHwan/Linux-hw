cmd_drivers/staging/greybus/gb-vibrator.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/staging/greybus/gb-vibrator.ko drivers/staging/greybus/gb-vibrator.o drivers/staging/greybus/gb-vibrator.mod.o;  true
