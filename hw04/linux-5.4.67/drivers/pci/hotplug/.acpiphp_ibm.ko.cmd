cmd_drivers/pci/hotplug/acpiphp_ibm.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/pci/hotplug/acpiphp_ibm.ko drivers/pci/hotplug/acpiphp_ibm.o drivers/pci/hotplug/acpiphp_ibm.mod.o;  true
