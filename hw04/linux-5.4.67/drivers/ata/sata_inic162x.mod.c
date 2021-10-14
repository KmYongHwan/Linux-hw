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
	{ 0xf11c5457, "sata_port_ops" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x2055f120, "ata_port_pbar_desc" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0x772fee70, "_dev_alert" },
	{ 0x63559014, "ata_print_version" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8462cb62, "atapi_cmd_type" },
	{ 0x87b8798d, "sg_next" },
	{ 0x18807068, "ata_link_printk" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0xcf010fa3, "ata_wait_after_reset" },
	{ 0xbc8eb17e, "ata_link_online" },
	{ 0x20a6d428, "sata_link_resume" },
	{ 0x5c6dd66d, "ata_msleep" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x40987ed3, "ata_std_error_handler" },
	{ 0xb5fdbffd, "__ata_ehi_push_desc" },
	{ 0xebd6b19f, "ata_port_freeze" },
	{ 0xddb1eed3, "ata_port_printk" },
	{ 0xc482f17, "ata_port_abort" },
	{ 0xe67629c2, "ata_ehi_push_desc" },
	{ 0xf6d01da4, "ata_ehi_clear_desc" },
	{ 0x8cd6c9c3, "ata_qc_complete" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001101d00001622sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D6A9EB4F6804735C7981064");
