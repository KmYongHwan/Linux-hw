cmd_fs/efs/efs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/efs/efs.ko fs/efs/efs.o fs/efs/efs.mod.o;  true
