cmd_fs/bfs/bfs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o fs/bfs/bfs.ko fs/bfs/bfs.o fs/bfs/bfs.mod.o;  true
