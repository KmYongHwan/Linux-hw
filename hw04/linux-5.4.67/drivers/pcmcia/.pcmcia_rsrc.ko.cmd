cmd_drivers/pcmcia/pcmcia_rsrc.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/pcmcia/pcmcia_rsrc.ko drivers/pcmcia/pcmcia_rsrc.o drivers/pcmcia/pcmcia_rsrc.mod.o;  true
