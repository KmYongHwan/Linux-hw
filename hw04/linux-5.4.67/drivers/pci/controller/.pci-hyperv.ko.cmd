cmd_drivers/pci/controller/pci-hyperv.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/pci/controller/pci-hyperv.ko drivers/pci/controller/pci-hyperv.o drivers/pci/controller/pci-hyperv.mod.o;  true
