cmd_drivers/video/fbdev/core/svgalib.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/video/fbdev/core/svgalib.ko drivers/video/fbdev/core/svgalib.o drivers/video/fbdev/core/svgalib.mod.o;  true
