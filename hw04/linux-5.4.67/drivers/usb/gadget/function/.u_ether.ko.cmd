cmd_drivers/usb/gadget/function/u_ether.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/gadget/function/u_ether.ko drivers/usb/gadget/function/u_ether.o drivers/usb/gadget/function/u_ether.mod.o;  true
