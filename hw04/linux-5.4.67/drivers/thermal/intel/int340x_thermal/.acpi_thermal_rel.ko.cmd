cmd_drivers/thermal/intel/int340x_thermal/acpi_thermal_rel.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o drivers/thermal/intel/int340x_thermal/acpi_thermal_rel.ko drivers/thermal/intel/int340x_thermal/acpi_thermal_rel.o drivers/thermal/intel/int340x_thermal/acpi_thermal_rel.mod.o;  true
