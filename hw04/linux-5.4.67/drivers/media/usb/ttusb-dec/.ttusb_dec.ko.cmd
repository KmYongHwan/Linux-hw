cmd_drivers/media/usb/ttusb-dec/ttusb_dec.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/usb/ttusb-dec/ttusb_dec.ko drivers/media/usb/ttusb-dec/ttusb_dec.o drivers/media/usb/ttusb-dec/ttusb_dec.mod.o;  true
