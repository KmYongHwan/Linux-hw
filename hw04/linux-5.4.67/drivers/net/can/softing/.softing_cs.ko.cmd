cmd_drivers/net/can/softing/softing_cs.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/can/softing/softing_cs.ko drivers/net/can/softing/softing_cs.o drivers/net/can/softing/softing_cs.mod.o;  true
