cmd_drivers/hwmon/k8temp.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/hwmon/k8temp.ko drivers/hwmon/k8temp.o drivers/hwmon/k8temp.mod.o;  true
