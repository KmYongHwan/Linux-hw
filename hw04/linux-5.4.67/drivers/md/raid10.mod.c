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
	{ 0x46607eb3, "blk_queue_io_opt" },
	{ 0x78dbd450, "blk_queue_io_min" },
	{ 0x7ae09bcd, "blk_queue_max_write_zeroes_sectors" },
	{ 0xa0a88ba5, "blk_queue_max_write_same_sectors" },
	{ 0x2decb527, "blk_queue_max_discard_sectors" },
	{ 0xa1d0726c, "mddev_init_writes_pending" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3b49011f, "bioset_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x50e4a684, "bio_copy_data" },
	{ 0x5f99f2fe, "bio_trim" },
	{ 0xc9661a27, "submit_bio_wait" },
	{ 0xd52e041f, "rdev_clear_badblocks" },
	{ 0x60c84984, "md_check_recovery" },
	{ 0x18ae0818, "md_finish_reshape" },
	{ 0x326533fb, "md_bitmap_end_sync" },
	{ 0x7f1ce1ff, "bio_alloc_mddev" },
	{ 0xf75a745e, "bio_add_page" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0xb7f9e5f6, "md_bitmap_close_sync" },
	{ 0x15c85de3, "mempool_init" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xd8b2d376, "md_bitmap_start_sync" },
	{ 0x3073e65c, "md_bitmap_cond_end_sync" },
	{ 0xe01dfded, "sysfs_create_link" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7dad01d0, "md_new_event" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe6a028ca, "md_register_thread" },
	{ 0xfef9a247, "md_do_sync" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe7e88b18, "md_flush_request" },
	{ 0xfb578fc5, "memset" },
	{ 0x6ad37d9c, "md_write_start" },
	{ 0xb09e262d, "md_wait_for_blocked_rdev" },
	{ 0xbc375198, "md_bitmap_startwrite" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x9add5553, "md_bitmap_unplug" },
	{ 0x2817931, "bio_chain" },
	{ 0xdf43f569, "bio_split" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xa40f3de1, "__trace_note_message" },
	{ 0xba312d7b, "current_task" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x73ca4d6, "bioset_exit" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x97d1d7e6, "md_error" },
	{ 0x63303178, "rdev_set_badblocks" },
	{ 0xa78aec49, "sync_page_io" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xd27b25dd, "blk_check_plugged" },
	{ 0x2246b4dd, "__tracepoint_block_bio_remap" },
	{ 0x68609863, "bio_associate_blkg" },
	{ 0x79525988, "bio_clone_fast" },
	{ 0xef0ca8ab, "badblocks_check" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x3fa55769, "__put_page" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x739758b1, "bio_put" },
	{ 0x2d715234, "bio_endio" },
	{ 0x73f98e97, "md_cluster_ops" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9b8fc947, "md_integrity_register" },
	{ 0xc5850110, "printk" },
	{ 0xc4142837, "seq_printf" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0xc7bca1d6, "disk_stack_limits" },
	{ 0x5333f3ee, "md_integrity_add_rdev" },
	{ 0x71c2cc64, "kernfs_notify" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ba20fb3, "bdevname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xeb3af455, "bio_reset" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xd13d5b86, "md_set_array_sectors" },
	{ 0xb5381c7e, "md_bitmap_resize" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc3f7249f, "md_done_sync" },
	{ 0x9266d7ef, "md_wakeup_thread" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7484a88, "md_write_end" },
	{ 0xcb6c841e, "md_bitmap_endwrite" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7726A112B4E62CDFD47A1F7");
