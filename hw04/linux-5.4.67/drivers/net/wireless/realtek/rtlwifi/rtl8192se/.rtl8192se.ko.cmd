cmd_drivers/net/wireless/realtek/rtlwifi/rtl8192se/rtl8192se.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wireless/realtek/rtlwifi/rtl8192se/rtl8192se.ko drivers/net/wireless/realtek/rtlwifi/rtl8192se/rtl8192se.o drivers/net/wireless/realtek/rtlwifi/rtl8192se/rtl8192se.mod.o;  true
