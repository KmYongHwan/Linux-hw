cmd_drivers/net/wireless/ti/wl18xx/wl18xx.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wireless/ti/wl18xx/wl18xx.ko drivers/net/wireless/ti/wl18xx/wl18xx.o drivers/net/wireless/ti/wl18xx/wl18xx.mod.o;  true
