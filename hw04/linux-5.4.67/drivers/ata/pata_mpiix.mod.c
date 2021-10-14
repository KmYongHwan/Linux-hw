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
	{ 0x95b41ce, "ata_sff_port_ops" },
	{ 0xa2c454, "ata_sff_data_xfer32" },
	{ 0x431f7b85, "ata_cable_40wire" },
	{ 0x19a85ecd, "ata_pci_device_resume" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x50c42ad0, "ata_sff_qc_issue" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x304d0eed, "ata_pio_need_iordy" },
	{ 0x9e4b4595, "ata_sff_prereset" },
	{ 0x788881ae, "pci_test_config_bits" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x63559014, "ata_print_version" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x2e4cde64, "ata_port_desc" },
	{ 0xfbee36f, "devm_ioport_map" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x573ce728, "ata_host_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00001234sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "382EA91333CAB295077594C");
