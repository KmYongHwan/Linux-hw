cmd_fs/qnx4/qnx4.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/qnx4/qnx4.ko fs/qnx4/qnx4.o fs/qnx4/qnx4.mod.o;  true
