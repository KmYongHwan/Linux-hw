cmd_drivers/video/backlight/wm831x_bl.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/video/backlight/wm831x_bl.ko drivers/video/backlight/wm831x_bl.o drivers/video/backlight/wm831x_bl.mod.o;  true
