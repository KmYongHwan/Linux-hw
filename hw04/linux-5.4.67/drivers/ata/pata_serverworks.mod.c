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
	{ 0x257c8ed2, "ata_cable_unknown" },
	{ 0x431f7b85, "ata_cable_40wire" },
	{ 0xbf793710, "ata_common_sdev_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0xfaddb08b, "ata_bmdma_port_ops" },
	{ 0xebba7f97, "ata_bmdma_dumb_qc_prep" },
	{ 0x690a4ed4, "ata_bmdma_qc_prep" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0xa78087e1, "ata_dummy_port_info" },
	{ 0xcee0a545, "ata_pci_bmdma_init_one" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xc5850110, "printk" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x32046a39, "ata_pci_bmdma_clear_simplex" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001166d00000211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000213sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000217sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000214sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9C77F32CA8F16265A883281");
