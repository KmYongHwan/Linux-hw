cmd_drivers/media/radio/wl128x/fm_drv.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/radio/wl128x/fm_drv.ko drivers/media/radio/wl128x/fm_drv.o drivers/media/radio/wl128x/fm_drv.mod.o;  true
