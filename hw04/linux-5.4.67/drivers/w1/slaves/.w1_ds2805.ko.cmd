cmd_drivers/w1/slaves/w1_ds2805.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/w1/slaves/w1_ds2805.ko drivers/w1/slaves/w1_ds2805.o drivers/w1/slaves/w1_ds2805.mod.o;  true
