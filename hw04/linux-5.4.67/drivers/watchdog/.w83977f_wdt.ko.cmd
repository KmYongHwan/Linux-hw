cmd_drivers/watchdog/w83977f_wdt.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/watchdog/w83977f_wdt.ko drivers/watchdog/w83977f_wdt.o drivers/watchdog/w83977f_wdt.mod.o;  true
