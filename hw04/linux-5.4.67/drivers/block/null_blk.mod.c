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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb56f876f, "param_get_int" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xa1fbe67d, "badblocks_clear" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0xef0ca8ab, "badblocks_check" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xd2237016, "radix_tree_delete_item" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0xda49bfd, "config_item_put" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xbf67afe6, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc49c9728, "blk_queue_chunk_sectors" },
	{ 0xf10797f3, "blk_mq_complete_request" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x88120424, "blk_alloc_queue_node" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0xf491e366, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xfb578fc5, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xba312d7b, "current_task" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2decb527, "blk_queue_max_discard_sectors" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0xffb7c514, "ida_free" },
	{ 0x74fcdbd8, "blk_mq_stop_hw_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xe82f3544, "configfs_register_subsystem" },
	{ 0x1bb76d2d, "blk_revalidate_disk_zones" },
	{ 0xa65d3bb5, "blk_mq_start_stopped_hw_queues" },
	{ 0x2d715234, "bio_endio" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4d1be72f, "blk_queue_flag_clear" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x6cb15c1, "badblocks_show" },
	{ 0x9b64a05d, "blk_queue_make_request" },
	{ 0x9f0191bf, "blk_queue_physical_block_size" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40b8db55, "badblocks_init" },
	{ 0x16933923, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xde50127, "blk_mq_alloc_tag_set" },
	{ 0xfffbd279, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7c5ea305, "blk_queue_required_elevator_features" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xe8db7f67, "blk_mq_end_request" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd2c9e2e1, "blk_queue_write_cache" },
	{ 0x1a0ed472, "badblocks_exit" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x82c87ad5, "nr_online_nodes" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x53b1c3f, "badblocks_set" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x77bc13a0, "strim" },
	{ 0x12ff81a7, "blk_queue_logical_block_size" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x2e562d35, "config_group_init" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "892E44F4C0D4EECB9C6607E");
