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
	{ 0x257c8ed2, "ata_cable_unknown" },
	{ 0x19a85ecd, "ata_pci_device_resume" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x1e47fa9d, "ata_bmdma_qc_issue" },
	{ 0x304d0eed, "ata_pio_need_iordy" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x63559014, "ata_print_version" },
	{ 0xcee0a545, "ata_pci_bmdma_init_one" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001331d00008201sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B0DA19E533AEC2CAFC4F7B5");
