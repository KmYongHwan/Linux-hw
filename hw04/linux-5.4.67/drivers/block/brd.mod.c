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
	{ 0x74801e4, "param_ops_ulong" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xb93223d5, "blk_register_region" },
	{ 0xc5850110, "printk" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2d715234, "bio_endio" },
	{ 0xfaad5364, "page_endio" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xba312d7b, "current_task" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x16933923, "put_disk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x217c8b13, "get_disk_and_module" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x4d1be72f, "blk_queue_flag_clear" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x9f0191bf, "blk_queue_physical_block_size" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0x9b64a05d, "blk_queue_make_request" },
	{ 0x9dd6fd4, "blk_alloc_queue" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C62A31351CEC557C8F228C");
