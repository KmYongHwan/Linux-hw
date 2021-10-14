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
	{ 0x31a146a6, "mptscsih_host_attrs" },
	{ 0x1228a4ea, "mptscsih_show_info" },
	{ 0xa531966, "mptscsih_bios_param" },
	{ 0x8dca7fb, "mptscsih_change_queue_depth" },
	{ 0xb8960e6d, "mptscsih_host_reset" },
	{ 0x5fd34ebd, "mptscsih_bus_reset" },
	{ 0xfba0e6cf, "mptscsih_dev_reset" },
	{ 0xc744327f, "mptscsih_abort" },
	{ 0x4f229de4, "mptscsih_info" },
	{ 0x20f9fe23, "mptscsih_shutdown" },
	{ 0x1bc4004, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a932668, "spi_release_transport" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x91fff5bf, "mpt_reset_register" },
	{ 0xc8e2a60e, "mpt_event_register" },
	{ 0x13406e4c, "mptscsih_scandv_complete" },
	{ 0x823e6ccc, "mptscsih_taskmgmt_complete" },
	{ 0x3052f851, "mpt_register" },
	{ 0xc091f81e, "mptscsih_io_done" },
	{ 0x16fdd06b, "spi_attach_transport" },
	{ 0xaedb6d1, "mptscsih_IssueTaskMgmt" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x1559a976, "mpt_attach" },
	{ 0x245dfeea, "mptscsih_raid_id_to_num" },
	{ 0xc559ea97, "mptscsih_slave_destroy" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0xff087b9b, "scsi_device_lookup_by_target" },
	{ 0x62fbc054, "mptscsih_ioc_reset" },
	{ 0x84e588a0, "mptscsih_slave_configure" },
	{ 0x3a5f56f, "scsi_scan_target" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0xb600a613, "mpt_findImVolumes" },
	{ 0x9f0a02d4, "spi_display_xfer_agreement" },
	{ 0xfcda597c, "spi_dv_device" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x9a6e4d0a, "mpt_config" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x818426f3, "mptscsih_event_process" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xca9b96b9, "scsi_print_command" },
	{ 0x32b586d8, "mptscsih_qcmd" },
	{ 0x64629cf9, "mptscsih_is_phys_disk" },
	{ 0x25eb7a40, "mptscsih_remove" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x5aa6d310, "mptscsih_resume" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbf855d72, "mpt_free_msg_frame" },
	{ 0x23b06446, "mpt_HardResetHandler" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x4893214e, "mpt_put_msg_frame" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x13383b3b, "mpt_get_msg_frame" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CA585F517EE6F59C8BD3064");
