cmd_net/caif/caif_usb.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/caif/caif_usb.ko net/caif/caif_usb.o net/caif/caif_usb.mod.o;  true
