cmd_drivers/net/team/team_mode_loadbalance.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/team/team_mode_loadbalance.ko drivers/net/team/team_mode_loadbalance.o drivers/net/team/team_mode_loadbalance.mod.o;  true
