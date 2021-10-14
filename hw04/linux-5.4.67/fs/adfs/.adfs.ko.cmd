cmd_fs/adfs/adfs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/adfs/adfs.ko fs/adfs/adfs.o fs/adfs/adfs.mod.o;  true
