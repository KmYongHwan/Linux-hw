cmd_drivers/usb/gadget/function/usb_f_uac2.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/usb/gadget/function/usb_f_uac2.ko drivers/usb/gadget/function/usb_f_uac2.o drivers/usb/gadget/function/usb_f_uac2.mod.o;  true
