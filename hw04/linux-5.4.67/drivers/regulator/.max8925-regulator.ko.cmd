cmd_drivers/regulator/max8925-regulator.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/max8925-regulator.ko drivers/regulator/max8925-regulator.o drivers/regulator/max8925-regulator.mod.o;  true
