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
	{ 0x89688e79, "unregister_md_personality" },
	{ 0xc3d39829, "register_md_personality" },
	{ 0x4d1be72f, "blk_queue_flag_clear" },
	{ 0x68c44801, "md_unregister_thread" },
	{ 0x7ae09bcd, "blk_queue_max_write_zeroes_sectors" },
	{ 0xa0a88ba5, "blk_queue_max_write_same_sectors" },
	{ 0xa1d0726c, "mddev_init_writes_pending" },
	{ 0xe6a028ca, "md_register_thread" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3b49011f, "bioset_init" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x97bb19e4, "md_allow_write" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0xe193ad0d, "sysfs_remove_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb7f9e5f6, "md_bitmap_close_sync" },
	{ 0x3073e65c, "md_bitmap_cond_end_sync" },
	{ 0xd8b2d376, "md_bitmap_start_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe7e88b18, "md_flush_request" },
	{ 0x6ad37d9c, "md_write_start" },
	{ 0xb09e262d, "md_wait_for_blocked_rdev" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x7f1ce1ff, "bio_alloc_mddev" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0xbc375198, "md_bitmap_startwrite" },
	{ 0xbdcbb617, "bio_devname" },
	{ 0xc9661a27, "submit_bio_wait" },
	{ 0x5f99f2fe, "bio_trim" },
	{ 0xd52e041f, "rdev_clear_badblocks" },
	{ 0x60c84984, "md_check_recovery" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x50e4a684, "bio_copy_data" },
	{ 0xf75a745e, "bio_add_page" },
	{ 0xeb3af455, "bio_reset" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x2817931, "bio_chain" },
	{ 0xdf43f569, "bio_split" },
	{ 0xfb578fc5, "memset" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x79525988, "bio_clone_fast" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x73f98e97, "md_cluster_ops" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9b8fc947, "md_integrity_register" },
	{ 0xa40f3de1, "__trace_note_message" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xba312d7b, "current_task" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x73ca4d6, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0xef0ca8ab, "badblocks_check" },
	{ 0xc3f7249f, "md_done_sync" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x326533fb, "md_bitmap_end_sync" },
	{ 0x97d1d7e6, "md_error" },
	{ 0x63303178, "rdev_set_badblocks" },
	{ 0xa78aec49, "sync_page_io" },
	{ 0xc4142837, "seq_printf" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0xc7bca1d6, "disk_stack_limits" },
	{ 0x5333f3ee, "md_integrity_add_rdev" },
	{ 0x71c2cc64, "kernfs_notify" },
	{ 0xd13d5b86, "md_set_array_sectors" },
	{ 0xb5381c7e, "md_bitmap_resize" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ba20fb3, "bdevname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9266d7ef, "md_wakeup_thread" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0x68609863, "bio_associate_blkg" },
	{ 0x9add5553, "md_bitmap_unplug" },
	{ 0x2d715234, "bio_endio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x739758b1, "bio_put" },
	{ 0xc42f4c07, "bio_free_pages" },
	{ 0xe7484a88, "md_write_end" },
	{ 0xcb6c841e, "md_bitmap_endwrite" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BD787859DBA566432062EEC");
