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
	{ 0xa2c454, "ata_sff_data_xfer32" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x848d372e, "iowrite8" },
	{ 0x135c3729, "ata_acpi_cbl_80wire" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0xce29fbb3, "ata_timing_compute" },
	{ 0x2b691a14, "ata_dev_pair" },
	{ 0x63559014, "ata_print_version" },
	{ 0xa78087e1, "ata_dummy_port_info" },
	{ 0xcee0a545, "ata_pci_bmdma_init_one" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x74aa4167, "ata_dev_printk" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x9e4b4595, "ata_sff_prereset" },
	{ 0x788881ae, "pci_test_config_bits" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xffe80f53, "ata_bmdma_port_start" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00000415sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000581sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00001571sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003164sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005324sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d0000C409sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D2B77EE0976748BB64A48C2");
