cmd_drivers/net/ipvlan/ipvlan.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ipvlan/ipvlan.ko drivers/net/ipvlan/ipvlan.o drivers/net/ipvlan/ipvlan.mod.o;  true
