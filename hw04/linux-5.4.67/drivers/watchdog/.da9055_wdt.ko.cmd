cmd_drivers/watchdog/da9055_wdt.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/watchdog/da9055_wdt.ko drivers/watchdog/da9055_wdt.o drivers/watchdog/da9055_wdt.mod.o;  true
