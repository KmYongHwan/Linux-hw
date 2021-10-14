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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xa1829e1d, "srp_timed_out" },
	{ 0xa292830b, "ib_unregister_client" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x3c0f9181, "srp_release_transport" },
	{ 0x548bc933, "class_unregister" },
	{ 0x5efa6669, "ib_sa_unregister_client" },
	{ 0xad950225, "ib_register_client" },
	{ 0xb9f96d3, "ib_sa_register_client" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0xc0bbceb6, "srp_attach_transport" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xc36e1bea, "ib_send_cm_drep" },
	{ 0xe09c699d, "ib_send_cm_rtu" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xafa02219, "ib_cm_init_qp_attr" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x3a5f56f, "scsi_scan_target" },
	{ 0xf3b3a756, "srp_rport_add" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x618911fc, "numa_node" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x48b15fea, "rdma_query_gid" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xa3130988, "scsi_host_get" },
	{ 0x2d2dd36f, "kobj_ns_grab_current" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xb4f2e4c, "rdma_destroy_qp" },
	{ 0xc7be1eb1, "ib_create_fmr_pool" },
	{ 0x1332cfa8, "ib_alloc_mr_user" },
	{ 0xc9c5d524, "ib_modify_qp" },
	{ 0x54be4748, "ib_find_cached_pkey" },
	{ 0x91fa1e7e, "ib_create_qp_user" },
	{ 0x831123f4, "rdma_create_qp" },
	{ 0x48a371f7, "__ib_alloc_cq_user" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x126485b7, "srp_rport_put" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc7fa4aa9, "kobj_ns_drop" },
	{ 0xcbf1b49e, "srp_stop_rport_timers" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xe6b46684, "srp_remove_host" },
	{ 0x38afd499, "srp_rport_get" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xc32b59ff, "ib_destroy_fmr_pool" },
	{ 0xadba320, "ib_free_cq_user" },
	{ 0x6748542a, "ib_destroy_qp_user" },
	{ 0x1fb64c72, "ib_drain_qp" },
	{ 0x184fa7fd, "ib_dealloc_pd_user" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc6bcbebb, "ib_set_client_data" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x785dd9f2, "device_register" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x1ec75b33, "__ib_alloc_pd" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x2bade2b8, "blk_mq_unique_tag" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x944c43f, "node_states" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x41a73bdb, "ib_fmr_pool_unmap" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x3e5896e, "ib_query_port" },
	{ 0x78526a8f, "ib_send_cm_req" },
	{ 0x658c5bc5, "rdma_connect" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x7a19fa2f, "ib_fmr_pool_map_phys" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x131db64a, "system_long_wq" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x4554bbd0, "ib_sa_path_rec_get" },
	{ 0xbe7f3a71, "rdma_resolve_route" },
	{ 0x2c0bc8d5, "ib_destroy_cm_id" },
	{ 0x6d53a11c, "ib_create_cm_id" },
	{ 0x77aef3a0, "rdma_destroy_id" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xebbe8fdf, "rdma_resolve_addr" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x88780b1a, "__rdma_create_id" },
	{ 0xbc9ee5d9, "ib_send_cm_dreq" },
	{ 0xe48cb91d, "rdma_disconnect" },
	{ 0x7239bad5, "ib_dereg_mr_user" },
	{ 0x29361773, "complete" },
	{ 0xc5850110, "printk" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xad0413d4, "match_hex" },
	{ 0x4e3567f7, "match_int" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x37a0cba, "kfree" },
	{ 0x754d539c, "strlen" },
	{ 0x22fa6958, "inet_pton_with_scope" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xee33b22c, "ib_map_mr_sg" },
	{ 0xe3c24bdf, "ib_process_cq_direct" },
	{ 0x79e91aee, "srp_reconnect_rport" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xee6537d9, "blk_queue_rq_timeout" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x10a067d2, "srp_start_tl_fail_timers" },
	{ 0xd305f2c3, "device_rename" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1902178a, "srp_tmo_valid" },
	{ 0x405b6e05, "srp_parse_tmo" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "scsi_transport_srp,ib_core,ib_cm,rdma_cm");


MODULE_INFO(srcversion, "97E13CC45567F625A6A0E35");
