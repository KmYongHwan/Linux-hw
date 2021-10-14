cmd_net/decnet/decnet.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/decnet/decnet.ko net/decnet/decnet.o net/decnet/decnet.mod.o;  true
