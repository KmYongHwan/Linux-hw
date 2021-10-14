cmd_fs/fuse/virtiofs.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/fuse/virtiofs.o fs/fuse/virtio_fs.o
