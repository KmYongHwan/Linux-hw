cmd_drivers/net/net_failover.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/net_failover.ko drivers/net/net_failover.o drivers/net/net_failover.mod.o;  true
