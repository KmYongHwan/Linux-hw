cmd_drivers/net/wan/wanxl.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wan/wanxl.ko drivers/net/wan/wanxl.o drivers/net/wan/wanxl.mod.o;  true
