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
	{ 0x2d3385d3, "system_wq" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2d6e4a02, "scsi_remove_target" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xca175299, "sas_release_transport" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xb56f876f, "param_get_int" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0x36490ac8, "pci_irq_get_affinity" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0x65697edc, "sas_is_tlr_enabled" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8d2720dd, "pci_stop_and_remove_bus_device_locked" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x63da0a4c, "sas_phy_add" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0x301fef6f, "sas_disable_tlr" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4e9168fc, "sas_port_add_phy" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x67ff2b22, "sas_port_delete_phy" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x495e1a7b, "param_set_int" },
	{ 0x653efc76, "sas_rphy_add" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x69de47dd, "blk_queue_virt_boundary" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xca9b96b9, "scsi_print_command" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0x86cc32d8, "sas_port_delete" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xcaeffb3f, "scsi_host_busy" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x76da24f6, "dma_get_required_mask" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x97e3b8f5, "scsi_internal_device_block_nowait" },
	{ 0x7c8c7fff, "raid_class_release" },
	{ 0xbe55f10, "sas_attach_transport" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0x47fda759, "misc_register" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x94551185, "sas_expander_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7a3a2b56, "sas_read_port_mode_page" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x786f22cb, "sas_end_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xf1e046cc, "panic" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x2864d614, "fasync_helper" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0x21db6f7e, "pci_device_is_present" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xfe4d78c8, "sas_port_add" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xfab61308, "raid_class_attach" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0x5cd7197, "attribute_container_find_class_device" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0xd4dc592e, "sas_phy_free" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc38973ed, "pci_disable_link_state" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xaa1236f, "starget_for_each_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x3048d52f, "device_reprobe" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0x6a8ae03, "scsi_device_set_state" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x128f7f40, "sas_phy_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeedb56d3, "sas_remove_host" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xc314bbe4, "scsi_internal_device_unblock_nowait" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc3acfd9b, "sas_port_alloc_num" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xc12f0948, "scsi_get_vpd_page" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x2bd183b2, "bsg_job_done" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xfe31ba97, "pci_release_selected_regions" },
	{ 0xd8a909f7, "pci_request_selected_regions" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x53bc6cc4, "sas_enable_tlr" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd0065fca, "pcie_capability_read_word" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x1f95edd, "param_ops_ullong" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_sas,raid_class");

MODULE_ALIAS("pci:v00001000d00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000074sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000076sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000077sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000082sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000084sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000006Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000002B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000096sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000097sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000094sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000095sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000B2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "35C9E56DD4EFC3F6A5B928F");
