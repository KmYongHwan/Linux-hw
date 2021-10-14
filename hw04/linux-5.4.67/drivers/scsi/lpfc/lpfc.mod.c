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
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x627f576f, "__cpuhp_remove_state" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0xb3623639, "nvme_fc_register_localport" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xaf770f2c, "pci_enable_sriov" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x349cba85, "strchr" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x20eadeb6, "ip_compute_csum" },
	{ 0xd12e564, "nvme_fc_register_remoteport" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x767ddb02, "set_memory_wc" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0x36490ac8, "pci_irq_get_affinity" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x995483f2, "scsi_is_fc_rport" },
	{ 0x51e67f3b, "nvmet_fc_rcv_ls_req" },
	{ 0x3884f8b8, "nvme_fc_unregister_localport" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x5c8f0a1a, "pci_disable_sriov" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xee86bd09, "cpu_info" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x85df9b6c, "strsep" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0xa567dc5, "pci_reset_bus" },
	{ 0xdb4fc1bc, "fc_host_fpin_rcv" },
	{ 0x999e8297, "vfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7fa5302a, "nvmet_fc_rcv_fcp_abort" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x2bade2b8, "blk_mq_unique_tag" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x47fda759, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x56dbf27e, "__cpuhp_state_add_instance" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa39adc65, "fc_vport_terminate" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0xcfd7e756, "fixed_size_llseek" },
	{ 0x5a921311, "strncmp" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0xfca9dc99, "nvme_fc_unregister_remoteport" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x9ecba507, "fc_remote_port_rolechg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9ef76d99, "nvmet_fc_unregister_targetport" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeee90dc9, "init_uts_ns" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xe3d6084a, "__cpuhp_setup_state" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x1048b92a, "nvmet_fc_rcv_fcp_req" },
	{ 0xd6d0503b, "fc_vport_create" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0xde006432, "sg_miter_next" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x34e02ebb, "fc_host_post_vendor_event" },
	{ 0xf2f9d256, "fc_release_transport" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x7284a929, "nvmet_fc_register_targetport" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x9aa2acfe, "fc_host_post_event" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xa3130988, "scsi_host_get" },
	{ 0x7ea19302, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x3f6b3036, "pci_cleanup_aer_uncorrect_error_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfd88423f, "fc_remote_port_delete" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1953c958, "mempool_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xe8b3f0d8, "__cpuhp_state_remove_instance" },
	{ 0xb1e043f8, "fc_block_scsi_eh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x944c43f, "node_states" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0x20716107, "pci_try_set_mwi" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7096e223, "fc_eh_timed_out" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0xad9bfdb5, "set_user_nice" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x19911d6f, "fc_remove_host" },
	{ 0x96848186, "scnprintf" },
	{ 0x71deb539, "request_firmware" },
	{ 0x3e33ac54, "nvme_fc_rescan_remoteport" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc666a132, "crc_t10dif" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3cd6bd1c, "fc_remote_port_add" },
	{ 0x2bd183b2, "bsg_job_done" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x8a9cf5a7, "nvme_fc_set_remoteport_devloss" },
	{ 0xfe31ba97, "pci_release_selected_regions" },
	{ 0xd8a909f7, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x343f1816, "misc_deregister" },
	{ 0xef04b368, "pci_find_ext_capability" },
	{ 0xd49808d6, "fc_attach_transport" },
	{ 0xede283d, "release_firmware" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x1f95edd, "param_ops_ullong" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "nvme-fc,scsi_transport_fc,nvmet-fc");

MODULE_ALIAS("pci:v000010DFd0000FB00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00001AE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F980sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F098sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FD12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE05sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FE12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F0A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000FC50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000704sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019A2d00000714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E260sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E208sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000E300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000F400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd00000724sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DFd0000072Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C48CD0382FEA506AF929A87");
