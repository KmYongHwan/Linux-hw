cmd_drivers/gnss/gnss-mtk.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/gnss/gnss-mtk.ko drivers/gnss/gnss-mtk.o drivers/gnss/gnss-mtk.mod.o;  true
