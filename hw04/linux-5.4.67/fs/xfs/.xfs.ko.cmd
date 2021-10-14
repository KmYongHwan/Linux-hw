cmd_fs/xfs/xfs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/xfs/xfs.ko fs/xfs/xfs.o fs/xfs/xfs.mod.o;  true
