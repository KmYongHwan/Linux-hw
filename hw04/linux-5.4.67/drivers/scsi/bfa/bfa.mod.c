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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xba00a9d4, "scsi_track_queue_full" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x47178151, "pcie_set_readrq" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x995483f2, "scsi_is_fc_rport" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x999e8297, "vfree" },
	{ 0xa9a66bd3, "pcie_get_readrq" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xa39adc65, "fc_vport_terminate" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcfd7e756, "fixed_size_llseek" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9ecba507, "fc_remote_port_rolechg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0xd6d0503b, "fc_vport_create" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x34e02ebb, "fc_host_post_vendor_event" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0xf2f9d256, "fc_release_transport" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfd88423f, "fc_remote_port_delete" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7096e223, "fc_eh_timed_out" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x19911d6f, "fc_remove_host" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3cd6bd1c, "fc_remote_port_add" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x2bd183b2, "bsg_job_done" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd49808d6, "fc_attach_transport" },
	{ 0xede283d, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_fc");

MODULE_ALIAS("pci:v00001657d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001657d00000014sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000021sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000022sv*sd*bc0Csc04i00*");
MODULE_ALIAS("pci:v00001657d00000023sv*sd*bc0Csc04i00*");

MODULE_INFO(srcversion, "1E4EF78997E72FD757CB5EB");
