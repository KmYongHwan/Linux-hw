cmd_drivers/clk/clk-palmas.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/clk/clk-palmas.ko drivers/clk/clk-palmas.o drivers/clk/clk-palmas.mod.o;  true
