cmd_drivers/usb/gadget/udc/udc-core.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/usb/gadget/udc/udc-core.o drivers/usb/gadget/udc/core.o drivers/usb/gadget/udc/trace.o
