cmd_net/atm/mpoa.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o net/atm/mpoa.ko net/atm/mpoa.o net/atm/mpoa.mod.o;  true
