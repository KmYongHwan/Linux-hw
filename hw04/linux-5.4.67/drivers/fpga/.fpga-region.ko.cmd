cmd_drivers/fpga/fpga-region.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/fpga/fpga-region.ko drivers/fpga/fpga-region.o drivers/fpga/fpga-region.mod.o;  true
