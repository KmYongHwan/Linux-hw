cmd_sound/pci/nm256/snd-nm256.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/pci/nm256/snd-nm256.ko sound/pci/nm256/snd-nm256.o sound/pci/nm256/snd-nm256.mod.o;  true
