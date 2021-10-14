cmd_drivers/mfd/rt5033.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mfd/rt5033.ko drivers/mfd/rt5033.o drivers/mfd/rt5033.mod.o;  true
