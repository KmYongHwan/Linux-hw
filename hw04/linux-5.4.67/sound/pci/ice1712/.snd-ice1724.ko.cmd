cmd_sound/pci/ice1712/snd-ice1724.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/pci/ice1712/snd-ice1724.ko sound/pci/ice1712/snd-ice1724.o sound/pci/ice1712/snd-ice1724.mod.o;  true
