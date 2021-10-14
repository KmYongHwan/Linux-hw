cmd_fs/bfs/bfs.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o fs/bfs/bfs.o fs/bfs/inode.o fs/bfs/file.o fs/bfs/dir.o
