cmd_drivers/mmc/host/usdhi6rol0.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/mmc/host/usdhi6rol0.ko drivers/mmc/host/usdhi6rol0.o drivers/mmc/host/usdhi6rol0.mod.o;  true
