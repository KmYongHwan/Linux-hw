cmd_drivers/mfd/ab3100-otp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/ab3100-otp.ko drivers/mfd/ab3100-otp.o drivers/mfd/ab3100-otp.mod.o;  true
