cmd_drivers/nvmem/nvmem-rave-sp-eeprom.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/nvmem/nvmem-rave-sp-eeprom.ko drivers/nvmem/nvmem-rave-sp-eeprom.o drivers/nvmem/nvmem-rave-sp-eeprom.mod.o;  true
