cmd_drivers/pci/hotplug/cpcihp_generic.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/pci/hotplug/cpcihp_generic.ko drivers/pci/hotplug/cpcihp_generic.o drivers/pci/hotplug/cpcihp_generic.mod.o;  true
