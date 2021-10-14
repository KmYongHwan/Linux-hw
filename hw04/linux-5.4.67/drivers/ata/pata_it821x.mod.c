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
	{ 0x3b8fb354, "ata_cable_80wire" },
	{ 0x257c8ed2, "ata_cable_unknown" },
	{ 0xfaddb08b, "ata_bmdma_port_ops" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x37a0cba, "kfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf10de535, "ioread8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x848d372e, "iowrite8" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xffe80f53, "ata_bmdma_port_start" },
	{ 0x7769d604, "ata_bmdma_stop" },
	{ 0xe3119242, "ata_bmdma_start" },
	{ 0xfeb4e241, "ata_sff_dev_select" },
	{ 0x2b691a14, "ata_dev_pair" },
	{ 0x2e457b0b, "ata_do_dev_read_id" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xcee0a545, "ata_pci_bmdma_init_one" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x1e47fa9d, "ata_bmdma_qc_issue" },
	{ 0xd7d81ba0, "ata_dev_next" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74aa4167, "ata_dev_printk" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001283d00008211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1A16FB2EDA4C94EE2B6C80");
