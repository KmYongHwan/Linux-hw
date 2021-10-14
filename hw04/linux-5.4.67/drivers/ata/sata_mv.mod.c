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
	{ 0xbf793710, "ata_common_sdev_attrs" },
	{ 0xea42373e, "ata_scsi_unlock_native_capacity" },
	{ 0x9fa6d181, "ata_std_bios_param" },
	{ 0xf163984b, "ata_scsi_change_queue_depth" },
	{ 0x89ed3560, "ata_scsi_slave_destroy" },
	{ 0x6182d457, "ata_scsi_slave_config" },
	{ 0xb5133f6c, "ata_scsi_queuecmd" },
	{ 0x6cbc3b9, "ata_scsi_ioctl" },
	{ 0x95b41ce, "ata_sff_port_ops" },
	{ 0xfaddb08b, "ata_bmdma_port_ops" },
	{ 0x78a88bdb, "ata_pci_device_suspend" },
	{ 0x90a3f438, "ata_pci_remove_one" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa410302d, "sata_link_hardreset" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x18807068, "ata_link_printk" },
	{ 0xb59262e3, "ata_sff_queue_pio_task" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x1e47fa9d, "ata_bmdma_qc_issue" },
	{ 0xc482f17, "ata_port_abort" },
	{ 0x2a69b14, "sata_async_notification" },
	{ 0x3ee4f715, "ata_link_offline" },
	{ 0x728459ed, "ata_bmdma_port_intr" },
	{ 0xe743a5a3, "sata_scr_write_flush" },
	{ 0x45de9517, "sata_scr_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3ebfae75, "ata_link_abort" },
	{ 0xe67629c2, "ata_ehi_push_desc" },
	{ 0xf6d01da4, "ata_ehi_clear_desc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xddb1eed3, "ata_port_printk" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x815588a6, "clk_enable" },
	{ 0x63fd46c1, "phy_power_on" },
	{ 0xc5c362ec, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe4413db4, "clk_get" },
	{ 0x5c415271, "devm_ioremap" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x37e1b2ec, "ata_host_activate" },
	{ 0x20716107, "pci_try_set_mwi" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xdc56281b, "pcim_pin_device" },
	{ 0x63559014, "ata_print_version" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x2055f120, "ata_port_pbar_desc" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x9437ba93, "ata_sff_softreset" },
	{ 0xefa59def, "sata_std_hardreset" },
	{ 0xdb746497, "ata_pci_device_do_resume" },
	{ 0xe8bffe6d, "dmam_pool_create" },
	{ 0x74aa4167, "ata_dev_printk" },
	{ 0x9bb077cb, "sata_pmp_error_handler" },
	{ 0xebd6b19f, "ata_port_freeze" },
	{ 0xb268ea96, "ata_eh_analyze_ncq_error" },
	{ 0xe778b48b, "ata_sff_dma_pause" },
	{ 0xf10de535, "ioread8" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6d623d9, "ata_qc_complete_multiple" },
	{ 0xdd2960b8, "ata_qc_get_active" },
	{ 0x726e8b16, "phy_power_off" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x92992539, "ata_host_detach" },
	{ 0xd13f4e80, "ata_host_suspend" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xc5850110, "printk" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EE023A9DF590CFA741594B1");
