cmd_drivers/usb/serial/keyspan.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/serial/keyspan.ko drivers/usb/serial/keyspan.o drivers/usb/serial/keyspan.mod.o;  true
