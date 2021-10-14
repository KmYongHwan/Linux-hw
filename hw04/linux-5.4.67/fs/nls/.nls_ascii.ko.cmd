cmd_fs/nls/nls_ascii.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/nls/nls_ascii.ko fs/nls/nls_ascii.o fs/nls/nls_ascii.mod.o;  true
