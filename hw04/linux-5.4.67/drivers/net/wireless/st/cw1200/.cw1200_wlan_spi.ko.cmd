cmd_drivers/net/wireless/st/cw1200/cw1200_wlan_spi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wireless/st/cw1200/cw1200_wlan_spi.ko drivers/net/wireless/st/cw1200/cw1200_wlan_spi.o drivers/net/wireless/st/cw1200/cw1200_wlan_spi.mod.o;  true
