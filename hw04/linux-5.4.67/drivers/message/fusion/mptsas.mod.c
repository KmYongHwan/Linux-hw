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
	{ 0xc559ea97, "mptscsih_slave_destroy" },
	{ 0xb8960e6d, "mptscsih_host_reset" },
	{ 0xfba0e6cf, "mptscsih_dev_reset" },
	{ 0xc744327f, "mptscsih_abort" },
	{ 0x4f229de4, "mptscsih_info" },
	{ 0x5aa6d310, "mptscsih_resume" },
	{ 0x1bc4004, "mptscsih_suspend" },
	{ 0x981efe92, "mpt_deregister" },
	{ 0xe6c1e126, "mpt_event_deregister" },
	{ 0x610b257e, "mpt_reset_deregister" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xca175299, "sas_release_transport" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x91fff5bf, "mpt_reset_register" },
	{ 0xc8e2a60e, "mpt_event_register" },
	{ 0x13406e4c, "mptscsih_scandv_complete" },
	{ 0x823e6ccc, "mptscsih_taskmgmt_complete" },
	{ 0x3052f851, "mpt_register" },
	{ 0xc091f81e, "mptscsih_io_done" },
	{ 0xbe55f10, "sas_attach_transport" },
	{ 0x7b54272a, "mpt_GetIocState" },
	{ 0x8d809635, "mptscsih_get_scsi_lookup" },
	{ 0xba00a9d4, "scsi_track_queue_full" },
	{ 0xc4d8dec4, "mpt_raid_phys_disk_pg1" },
	{ 0xb1161a08, "mpt_raid_phys_disk_get_num_paths" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0xb600a613, "mpt_findImVolumes" },
	{ 0xf8c03df8, "mptbase_sas_persist_operation" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x693e6e97, "mptscsih_flush_running_cmds" },
	{ 0x1559a976, "mpt_attach" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaa1236f, "starget_for_each_device" },
	{ 0x9166fada, "strncpy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xbbcc1701, "scsi_is_sas_rphy" },
	{ 0x94551185, "sas_expander_alloc" },
	{ 0xd4dc592e, "sas_phy_free" },
	{ 0xfe4d78c8, "sas_port_add" },
	{ 0xc3acfd9b, "sas_port_alloc_num" },
	{ 0x128f7f40, "sas_phy_alloc" },
	{ 0x1bffcdef, "sas_port_mark_backlink" },
	{ 0x63da0a4c, "sas_phy_add" },
	{ 0x4e9168fc, "sas_port_add_phy" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2bd183b2, "bsg_job_done" },
	{ 0x86cc32d8, "sas_port_delete" },
	{ 0x7a72769, "mpt_detach" },
	{ 0x25eb7a40, "mptscsih_remove" },
	{ 0xeedb56d3, "sas_remove_host" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0x84e588a0, "mptscsih_slave_configure" },
	{ 0x7a3a2b56, "sas_read_port_mode_page" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x62fbc054, "mptscsih_ioc_reset" },
	{ 0xca9b96b9, "scsi_print_command" },
	{ 0x32b586d8, "mptscsih_qcmd" },
	{ 0x63bf6983, "mpt_raid_phys_disk_pg0" },
	{ 0x9ac89f42, "sas_rphy_free" },
	{ 0x653efc76, "sas_rphy_add" },
	{ 0x786f22cb, "sas_end_device_alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x27dc1152, "mptscsih_taskmgmt_response_code" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4a79afb9, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x102ffa7f, "mpt_put_msg_frame_hi_pri" },
	{ 0x5d6b44a4, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x6a8ae03, "scsi_device_set_state" },
	{ 0x3048d52f, "device_reprobe" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x29361773, "complete" },
	{ 0xa43ea241, "mpt_Soft_Hard_ResetHandler" },
	{ 0xbf855d72, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x4893214e, "mpt_put_msg_frame" },
	{ 0x13383b3b, "mpt_get_msg_frame" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x67ff2b22, "sas_port_delete_phy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x9a6e4d0a, "mpt_config" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x245dfeea, "mptscsih_raid_id_to_num" },
	{ 0x64629cf9, "mptscsih_is_phys_disk" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mptscsih,mptbase,scsi_transport_sas");

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B28ED34A9501F84023B5850");
