cmd_drivers/usb/gadget/legacy/g_ether.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/gadget/legacy/g_ether.ko drivers/usb/gadget/legacy/g_ether.o drivers/usb/gadget/legacy/g_ether.mod.o;  true
