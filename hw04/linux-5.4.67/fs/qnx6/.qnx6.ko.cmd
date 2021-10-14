cmd_fs/qnx6/qnx6.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/qnx6/qnx6.ko fs/qnx6/qnx6.o fs/qnx6/qnx6.mod.o;  true
