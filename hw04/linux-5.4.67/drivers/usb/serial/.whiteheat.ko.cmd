cmd_drivers/usb/serial/whiteheat.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/serial/whiteheat.ko drivers/usb/serial/whiteheat.o drivers/usb/serial/whiteheat.mod.o;  true
