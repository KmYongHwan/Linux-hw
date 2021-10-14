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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0x79987346, "nd_btt_version" },
	{ 0xef0ca8ab, "badblocks_check" },
	{ 0x597c0e82, "generic_end_io_acct" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa5d294f6, "nd_integrity_init" },
	{ 0x6b2a500e, "nvdimm_namespace_capacity" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c49fb86, "debugfs_create_x32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6265c91a, "revalidate_disk" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x61817954, "nvdimm_namespace_disk_name" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x37a377b4, "nd_region_acquire_lane" },
	{ 0x9dd6fd4, "blk_alloc_queue" },
	{ 0xba312d7b, "current_task" },
	{ 0x27c51a3f, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc50793a, "generic_start_io_acct" },
	{ 0x86688ad0, "nd_region_release_lane" },
	{ 0x2d715234, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4951c42e, "nd_dev_to_uuid" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x9b64a05d, "blk_queue_make_request" },
	{ 0x7fe0c1d7, "debugfs_create_x64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x16933923, "put_disk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xabe40e41, "nd_btt_arena_is_valid" },
	{ 0x499f0ecf, "nd_sb_checksum" },
	{ 0x37a0cba, "kfree" },
	{ 0xa0bd96af, "to_nd_region" },
	{ 0x5c344b83, "debugfs_create_u16" },
	{ 0xc681227b, "nvdimm_revalidate_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x12ff81a7, "blk_queue_logical_block_size" },
	{ 0xfaad5364, "page_endio" },
	{ 0xc453ff58, "bio_integrity_prep" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F2605550209986A9CB35631");
