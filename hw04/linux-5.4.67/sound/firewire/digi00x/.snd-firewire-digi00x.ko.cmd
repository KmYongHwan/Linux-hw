cmd_sound/firewire/digi00x/snd-firewire-digi00x.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o sound/firewire/digi00x/snd-firewire-digi00x.ko sound/firewire/digi00x/snd-firewire-digi00x.o sound/firewire/digi00x/snd-firewire-digi00x.mod.o;  true
