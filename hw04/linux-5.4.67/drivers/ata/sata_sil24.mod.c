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
	{ 0xf163984b, "ata_scsi_change_queue_depth" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0x69bf5251, "sata_pmp_port_ops" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc3e0dc78, "pci_intx" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x63559014, "ata_print_version" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x47178151, "pcie_set_readrq" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaa8d59f8, "ata_std_qc_defer" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x5c6dd66d, "ata_msleep" },
	{ 0x3ee4f715, "ata_link_offline" },
	{ 0x3329b026, "sata_link_debounce" },
	{ 0xc428068d, "sata_deb_timing_long" },
	{ 0xbc8eb17e, "ata_link_online" },
	{ 0xcbffdc12, "sata_set_spd" },
	{ 0x18807068, "ata_link_printk" },
	{ 0xefa59def, "sata_std_hardreset" },
	{ 0x9bb077cb, "sata_pmp_error_handler" },
	{ 0xd7703784, "ata_eh_freeze_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2055f120, "ata_port_pbar_desc" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc482f17, "ata_port_abort" },
	{ 0x2a69b14, "sata_async_notification" },
	{ 0x3ebfae75, "ata_link_abort" },
	{ 0xe67629c2, "ata_ehi_push_desc" },
	{ 0xf6d01da4, "ata_ehi_clear_desc" },
	{ 0xebd6b19f, "ata_port_freeze" },
	{ 0xddb1eed3, "ata_port_printk" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x6d623d9, "ata_qc_complete_multiple" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x524dc4ea, "ata_wait_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000244sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4DCD523AFA702A637F2DB4E");
