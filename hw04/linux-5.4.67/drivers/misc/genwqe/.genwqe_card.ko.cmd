cmd_drivers/misc/genwqe/genwqe_card.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/misc/genwqe/genwqe_card.ko drivers/misc/genwqe/genwqe_card.o drivers/misc/genwqe/genwqe_card.mod.o;  true
