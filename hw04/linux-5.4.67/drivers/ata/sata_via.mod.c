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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0xbf793710, "ata_common_sdev_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0xfaddb08b, "ata_bmdma_port_ops" },
	{ 0xefa59def, "sata_std_hardreset" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x2055f120, "ata_port_pbar_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9cbbbf54, "ata_slave_link_init" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0xcf2ad2f9, "ata_pci_bmdma_prepare_host" },
	{ 0x63559014, "ata_print_version" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x4b8e49b2, "ata_sff_error_handler" },
	{ 0xb672ebe3, "ata_bmdma_irq_clear" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xddb1eed3, "ata_port_printk" },
	{ 0x5c6dd66d, "ata_msleep" },
	{ 0xa724e116, "ata_sff_wait_ready" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd707c077, "ata_sff_pause" },
	{ 0xe3119242, "ata_bmdma_start" },
	{ 0xa821a997, "ata_sff_tf_load" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xebd6b19f, "ata_port_freeze" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00005337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003249sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D02B8C752BDC9941B11FCCB");
