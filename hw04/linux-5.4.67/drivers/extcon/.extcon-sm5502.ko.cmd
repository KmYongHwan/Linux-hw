cmd_drivers/extcon/extcon-sm5502.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/extcon/extcon-sm5502.ko drivers/extcon/extcon-sm5502.o drivers/extcon/extcon-sm5502.mod.o;  true
