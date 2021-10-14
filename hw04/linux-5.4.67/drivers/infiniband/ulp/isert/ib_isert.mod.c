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
	{ 0xcb802bdb, "iscsit_unregister_transport" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x102a4dd8, "iscsit_register_transport" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x47235a24, "rdma_reject_msg" },
	{ 0x907df803, "rdma_event_msg" },
	{ 0x1ec75b33, "__ib_alloc_pd" },
	{ 0x48a371f7, "__ib_alloc_cq_user" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0xbb78f355, "__rdma_accept" },
	{ 0xcf2a6966, "up" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb8dccbbe, "rdma_reject" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xec93659d, "rdma_listen" },
	{ 0xe3c8e6b3, "rdma_bind_addr" },
	{ 0x88780b1a, "__rdma_create_id" },
	{ 0x3785c132, "init_net" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4cb40288, "iscsit_build_text_rsp" },
	{ 0xf7c7a735, "iscsit_build_logout_rsp" },
	{ 0x7562de78, "iscsit_build_task_mgt_rsp" },
	{ 0xe7a0fb1e, "iscsit_build_reject" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xbec398dd, "iscsit_build_nopin_rsp" },
	{ 0x9ae7eeed, "iscsit_build_rsp_pdu" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xef30deac, "target_execute_cmd" },
	{ 0xecfdc954, "transport_generic_request_failure" },
	{ 0xf56f5c3c, "iscsit_logout_post_handler" },
	{ 0x678871d1, "iscsit_tmr_post_handler" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xba312d7b, "current_task" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6748542a, "ib_destroy_qp_user" },
	{ 0x77aef3a0, "rdma_destroy_id" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc69e1c11, "iscsit_cause_connection_reinstatement" },
	{ 0x389676ba, "iscsit_process_text_cmd" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb349dbab, "iscsit_setup_text_cmd" },
	{ 0xd4e2676c, "iscsit_find_cmd_from_itt" },
	{ 0xbce2237e, "iscsit_set_unsolicited_dataout" },
	{ 0x226d7ede, "iscsit_sequence_cmd" },
	{ 0xf567c63f, "iscsit_process_scsi_cmd" },
	{ 0x3eba25e4, "iscsit_setup_scsi_cmd" },
	{ 0x85bed3d2, "iscsit_process_nop_out" },
	{ 0x48e377c4, "iscsit_setup_nop_out" },
	{ 0x3ac7ee07, "iscsit_handle_logout_cmd" },
	{ 0xb84e7d50, "iscsit_check_dataout_payload" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x84d8e43e, "iscsit_check_dataout_hdr" },
	{ 0xde4e09f4, "iscsit_handle_task_mgt_cmd" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x205aac5f, "target_wait_for_sess_cmds" },
	{ 0x6b9b70c0, "target_sess_cmd_list_set_waiting" },
	{ 0x1fb64c72, "ib_drain_qp" },
	{ 0xec3f8302, "target_put_sess_cmd" },
	{ 0x7b2a86f9, "iscsit_release_cmd" },
	{ 0x311906ab, "transport_generic_free_cmd" },
	{ 0xfcf15b0f, "iscsit_stop_dataout_timer" },
	{ 0xddf14f4, "rdma_rw_ctx_destroy_signature" },
	{ 0xffa2de92, "rdma_rw_ctx_destroy" },
	{ 0xe712da65, "iscsit_allocate_cmd" },
	{ 0xe48cb91d, "rdma_disconnect" },
	{ 0xe5840ec6, "ib_wc_status_msg" },
	{ 0x831123f4, "rdma_create_qp" },
	{ 0x184fa7fd, "ib_dealloc_pd_user" },
	{ 0x37a0cba, "kfree" },
	{ 0xadba320, "ib_free_cq_user" },
	{ 0xe0d1ebce, "rdma_rw_ctx_signature_init" },
	{ 0x20ad6e3f, "rdma_rw_ctx_post" },
	{ 0x2075d699, "rdma_rw_ctx_init" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5447dc64, "ib_check_mr_status" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x29361773, "complete" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe60e41a9, "rdma_notify" },
	{ 0xf6ed3334, "ib_event_msg" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "iscsi_target_mod,rdma_cm,ib_core,target_core_mod");


MODULE_INFO(srcversion, "D4FFEFBC1AF84712C1CBE33");
