cmd_drivers/regulator/88pm8607.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/regulator/88pm8607.ko drivers/regulator/88pm8607.o drivers/regulator/88pm8607.mod.o;  true
