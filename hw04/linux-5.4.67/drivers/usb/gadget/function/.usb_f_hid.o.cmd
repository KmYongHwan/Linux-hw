cmd_drivers/usb/gadget/function/usb_f_hid.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/usb/gadget/function/usb_f_hid.o drivers/usb/gadget/function/f_hid.o
