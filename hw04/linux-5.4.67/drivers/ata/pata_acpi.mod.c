#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xbf793710, "ata_common_sdev_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0xfaddb08b, "ata_bmdma_port_ops" },
	{ 0x19a85ecd, "ata_pci_device_resume" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x1e47fa9d, "ata_bmdma_qc_issue" },
	{ 0xb3d75f4f, "ata_acpi_stm" },
	{ 0xd2b10a05, "ata_timing_find_mode" },
	{ 0x9e4b4595, "ata_sff_prereset" },
	{ 0xffe80f53, "ata_bmdma_port_start" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xae5a3281, "ata_acpi_gtm_xfermask" },
	{ 0x96206f8, "ata_acpi_gtm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc56281b, "pcim_pin_device" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xcee0a545, "ata_pci_bmdma_init_one" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v*d*sv*sd*bc01sc01i*");

MODULE_INFO(srcversion, "CE051C1619D7ADD5FC2FA16");
