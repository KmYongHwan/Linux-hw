cmd_drivers/net/arcnet/com90xx.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/arcnet/com90xx.ko drivers/net/arcnet/com90xx.o drivers/net/arcnet/com90xx.mod.o;  true
