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
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x23f4843, "cxgbi_ppm_ppods_reserve" },
	{ 0xc4e393ee, "iscsit_immediate_queue" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf567c63f, "iscsit_process_scsi_cmd" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5b620b53, "cxgb4_clip_release" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x256511d6, "__kfree_skb" },
	{ 0xbce2237e, "iscsit_set_unsolicited_dataout" },
	{ 0xc2a5d34d, "skb_seq_read" },
	{ 0xed4800fc, "cxgb4_l2t_release" },
	{ 0xcb802bdb, "iscsit_unregister_transport" },
	{ 0xb5110c7e, "iscsit_aborted_task" },
	{ 0x26c6ed2e, "iscsi_target_check_login_request" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xec3f8302, "target_put_sess_cmd" },
	{ 0x6aa56670, "ipv6_chk_addr" },
	{ 0xab7d3088, "cxgb4_create_server6" },
	{ 0xa002d821, "iscsi_change_param_sprintf" },
	{ 0x47d30afa, "cxgbi_ppm_ppod_release" },
	{ 0xa08d7c08, "__iscsit_check_dataout_hdr" },
	{ 0xb6f83cc3, "iscsit_reject_cmd" },
	{ 0xa8b80792, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3ac7ee07, "iscsit_handle_logout_cmd" },
	{ 0x80377be8, "iscsit_handle_snack" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x87b8798d, "sg_next" },
	{ 0x2e6d0bb6, "cxgb4_free_stid" },
	{ 0xd0fe8d51, "sg_pcopy_from_buffer" },
	{ 0x84d8e43e, "iscsit_check_dataout_hdr" },
	{ 0x676a11a9, "cxgb4_unregister_uld" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x4dac16ef, "cxgb4_port_chan" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb349dbab, "iscsit_setup_text_cmd" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3eba25e4, "iscsit_setup_scsi_cmd" },
	{ 0xe852946d, "alloc_skb_with_frags" },
	{ 0xa48ac55f, "__neigh_event_send" },
	{ 0x9b33e0d7, "unregister_dcbevent_notifier" },
	{ 0xf34332f0, "iscsi_find_param_from_key" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x87a9988, "cxgb4_remove_tid" },
	{ 0xc74e1b04, "cxgb4_ofld_send" },
	{ 0xe712da65, "iscsit_allocate_cmd" },
	{ 0x81b247c3, "iscsit_response_queue" },
	{ 0x51bd520f, "dcb_getapp" },
	{ 0x3e0f1413, "skb_abort_seq_read" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xba312d7b, "current_task" },
	{ 0xe6525d16, "cxgbi_ppm_init" },
	{ 0x389676ba, "iscsit_process_text_cmd" },
	{ 0x48e377c4, "iscsit_setup_nop_out" },
	{ 0xc5850110, "printk" },
	{ 0x226d7ede, "iscsit_sequence_cmd" },
	{ 0x3874c6e3, "skb_prepare_seq_read" },
	{ 0x478cea15, "cxgb4_alloc_stid" },
	{ 0x255ab30f, "cxgb_get_4tuple" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xeb0ace1f, "iscsit_queue_rsp" },
	{ 0xd428be63, "cxgb4_l2t_send" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2cda0614, "set_cpus_allowed_ptr" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe53c1d55, "skb_store_bits" },
	{ 0xf6523542, "dev_get_by_index" },
	{ 0x24b4cb56, "cxgb_find_route6" },
	{ 0x7a4bc666, "iscsit_free_cmd" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x281f689f, "dcb_ieee_getapp_mask" },
	{ 0x3785c132, "init_net" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x224b5164, "vlan_dev_real_dev" },
	{ 0x93b3fc74, "register_dcbevent_notifier" },
	{ 0x60a2ccb6, "cxgb_find_route" },
	{ 0x2230f4, "cxgb4_clip_get" },
	{ 0xb84e7d50, "iscsit_check_dataout_payload" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xd4e2676c, "iscsit_find_cmd_from_itt" },
	{ 0x5aba4bc2, "iscsit_increment_maxcmdsn" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x367b1938, "cxgb4_remove_server" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd7c0409a, "cxgbi_ppm_release" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfc391705, "cxgb4_register_uld" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x85bed3d2, "iscsit_process_nop_out" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x50ee5c07, "cxgb4_best_aligned_mtu" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x102a4dd8, "iscsit_register_transport" },
	{ 0x91b7b91d, "iscsit_build_datain_pdu" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xc4207a09, "iscsit_find_cmd_from_itt_or_dump" },
	{ 0xe0d14781, "__ip_dev_find" },
	{ 0x690eb540, "cxgb4_port_idx" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xfba3d6df, "iscsit_build_r2ts_for_cmd" },
	{ 0xd432a7ff, "iscsit_add_cmd_to_immediate_queue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xcc7740b1, "cxgb4_pktgl_to_skb" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xde4e09f4, "iscsit_handle_task_mgt_cmd" },
	{ 0x83cc11c2, "iscsit_add_reject" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0xa637b975, "dma_ops" },
	{ 0x374d1ad8, "cxgb4_l2t_get" },
	{ 0x3fa55769, "__put_page" },
	{ 0x2ab113c6, "cxgb4_create_server" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0xd5923e36, "cxgbi_ppm_make_ppod_hdr" },
};

MODULE_INFO(depends, "libcxgb,iscsi_target_mod,cxgb4,target_core_mod");


MODULE_INFO(srcversion, "A66C5761E3ABAB910B20073");
