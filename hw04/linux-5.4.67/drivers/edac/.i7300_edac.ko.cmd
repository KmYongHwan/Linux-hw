cmd_drivers/edac/i7300_edac.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/edac/i7300_edac.ko drivers/edac/i7300_edac.o drivers/edac/i7300_edac.mod.o;  true
