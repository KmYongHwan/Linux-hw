cmd_drivers/staging/greybus/gb-usb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/staging/greybus/gb-usb.ko drivers/staging/greybus/gb-usb.o drivers/staging/greybus/gb-usb.mod.o;  true
