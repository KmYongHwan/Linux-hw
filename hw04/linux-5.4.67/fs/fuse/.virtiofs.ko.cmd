cmd_fs/fuse/virtiofs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/fuse/virtiofs.ko fs/fuse/virtiofs.o fs/fuse/virtiofs.mod.o;  true
