cmd_drivers/rtc/rtc-m41t94.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/rtc/rtc-m41t94.ko drivers/rtc/rtc-m41t94.o drivers/rtc/rtc-m41t94.mod.o;  true
