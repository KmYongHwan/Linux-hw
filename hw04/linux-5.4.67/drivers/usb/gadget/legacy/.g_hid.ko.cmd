cmd_drivers/usb/gadget/legacy/g_hid.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/gadget/legacy/g_hid.ko drivers/usb/gadget/legacy/g_hid.o drivers/usb/gadget/legacy/g_hid.mod.o;  true
