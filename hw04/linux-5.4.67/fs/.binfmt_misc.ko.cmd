cmd_fs/binfmt_misc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/binfmt_misc.ko fs/binfmt_misc.o fs/binfmt_misc.mod.o;  true
