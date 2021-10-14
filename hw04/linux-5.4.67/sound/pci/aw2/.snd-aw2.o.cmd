cmd_sound/pci/aw2/snd-aw2.o := ld -m elf_x86_64  -z max-page-size=0x200000    -r -o sound/pci/aw2/snd-aw2.o sound/pci/aw2/aw2-alsa.o sound/pci/aw2/aw2-saa7146.o
