cmd_drivers/net/wireless/ath/wcn36xx/wcn36xx.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/net/wireless/ath/wcn36xx/wcn36xx.ko drivers/net/wireless/ath/wcn36xx/wcn36xx.o drivers/net/wireless/ath/wcn36xx/wcn36xx.mod.o;  true
