cmd_drivers/rtc/rtc-isl1208.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/rtc/rtc-isl1208.ko drivers/rtc/rtc-isl1208.o drivers/rtc/rtc-isl1208.mod.o;  true
