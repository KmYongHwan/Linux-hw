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
	{ 0xa071f2c6, "single_release" },
	{ 0xcec6343e, "seq_read" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xf5cb9fdc, "nonseekable_open" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x73ca4d6, "bioset_exit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x47fda759, "misc_register" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x3b49011f, "bioset_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xe541dad7, "freezing_slow_path" },
	{ 0x2080cb5, "bio_list_copy_data" },
	{ 0x54297caa, "clear_wb_congested" },
	{ 0xece784c2, "rb_first" },
	{ 0x9c2786dc, "generic_make_request" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xad9bfdb5, "set_user_nice" },
	{ 0xba312d7b, "current_task" },
	{ 0xf75a745e, "bio_add_page" },
	{ 0xeb3af455, "bio_reset" },
	{ 0xc4142837, "seq_printf" },
	{ 0xbdcbb617, "bio_devname" },
	{ 0x68609863, "bio_associate_blkg" },
	{ 0x79525988, "bio_clone_fast" },
	{ 0x64999478, "congestion_wait" },
	{ 0x24c1539f, "set_wb_congested" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x2817931, "bio_chain" },
	{ 0xdf43f569, "bio_split" },
	{ 0xbfdf08f5, "blk_queue_split" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x76c4c529, "bio_alloc_bioset" },
	{ 0xf2a4d839, "bd_set_size" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x88e96942, "device_create" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0x12ff81a7, "blk_queue_logical_block_size" },
	{ 0x9b64a05d, "blk_queue_make_request" },
	{ 0x161b3ca4, "set_blocksize" },
	{ 0x9415ca79, "__module_get" },
	{ 0x4ba20fb3, "bdevname" },
	{ 0x437f7854, "blkdev_get" },
	{ 0x43797d8a, "bdget" },
	{ 0x9dd6fd4, "blk_alloc_queue" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15c85de3, "mempool_init" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0xf49cf06e, "__blkdev_driver_ioctl" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xf720a60b, "module_put" },
	{ 0x38e46431, "mempool_exit" },
	{ 0x16933923, "put_disk" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x1bd3c261, "blkdev_put" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x2d715234, "bio_endio" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xca9360b5, "rb_next" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x739758b1, "bio_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbb24f607, "init_cdrom_command" },
	{ 0x4450a861, "blk_rq_map_kern" },
	{ 0x8a9df9e0, "blk_put_request" },
	{ 0xf966faba, "blk_execute_rq" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x61d58859, "blk_get_request" },
	{ 0x70691c99, "single_open" },
	{ 0xe7750f8, "kobject_put" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F7ED0C59BE5A77176529C3F");
