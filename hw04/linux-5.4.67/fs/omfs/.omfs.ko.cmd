cmd_fs/omfs/omfs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/omfs/omfs.ko fs/omfs/omfs.o fs/omfs/omfs.mod.o;  true
