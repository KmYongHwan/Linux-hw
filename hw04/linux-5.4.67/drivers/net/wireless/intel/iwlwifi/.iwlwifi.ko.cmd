cmd_drivers/net/wireless/intel/iwlwifi/iwlwifi.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wireless/intel/iwlwifi/iwlwifi.ko drivers/net/wireless/intel/iwlwifi/iwlwifi.o drivers/net/wireless/intel/iwlwifi/iwlwifi.mod.o;  true
