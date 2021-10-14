cmd_block/bfq.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o block/bfq.o block/bfq-iosched.o block/bfq-wf2q.o block/bfq-cgroup.o
