cmd_drivers/usb/serial/usb_wwan.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/serial/usb_wwan.ko drivers/usb/serial/usb_wwan.o drivers/usb/serial/usb_wwan.mod.o;  true
