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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x63559014, "ata_print_version" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x2055f120, "ata_port_pbar_desc" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9e4b4595, "ata_sff_prereset" },
	{ 0xf10de535, "ioread8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x2b691a14, "ata_dev_pair" },
	{ 0xd7d81ba0, "ata_dev_next" },
	{ 0xf43297f1, "ata_do_set_mode" },
	{ 0xc5850110, "printk" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00004D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00004D69sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00006269sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00001275sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00005275sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00007275sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C5075159EE6BBCFB173580C");
