cmd_drivers/usb/gadget/udc/mv_udc.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/usb/gadget/udc/mv_udc.o drivers/usb/gadget/udc/mv_udc_core.o
