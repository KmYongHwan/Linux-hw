cmd_drivers/usb/gadget/function/usb_f_ecm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/gadget/function/usb_f_ecm.ko drivers/usb/gadget/function/usb_f_ecm.o drivers/usb/gadget/function/usb_f_ecm.mod.o;  true
