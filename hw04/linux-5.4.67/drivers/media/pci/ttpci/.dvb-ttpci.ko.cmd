cmd_drivers/media/pci/ttpci/dvb-ttpci.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/media/pci/ttpci/dvb-ttpci.ko drivers/media/pci/ttpci/dvb-ttpci.o drivers/media/pci/ttpci/dvb-ttpci.mod.o;  true
