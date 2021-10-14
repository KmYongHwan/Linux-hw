cmd_lib/bch.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o lib/bch.ko lib/bch.o lib/bch.mod.o;  true
