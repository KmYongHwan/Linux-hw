cmd_drivers/net/ethernet/amd/xgbe/amd-xgbe.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/ethernet/amd/xgbe/amd-xgbe.ko drivers/net/ethernet/amd/xgbe/amd-xgbe.o drivers/net/ethernet/amd/xgbe/amd-xgbe.mod.o;  true
