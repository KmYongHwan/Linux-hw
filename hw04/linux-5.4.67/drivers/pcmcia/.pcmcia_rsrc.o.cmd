cmd_drivers/pcmcia/pcmcia_rsrc.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o drivers/pcmcia/pcmcia_rsrc.o drivers/pcmcia/rsrc_mgr.o drivers/pcmcia/rsrc_nonstatic.o
