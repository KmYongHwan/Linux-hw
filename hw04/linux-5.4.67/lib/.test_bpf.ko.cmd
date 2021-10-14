cmd_lib/test_bpf.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/test_bpf.ko lib/test_bpf.o lib/test_bpf.mod.o;  true
