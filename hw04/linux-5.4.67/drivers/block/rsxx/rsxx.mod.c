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
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x70691c99, "single_open" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x597c0e82, "generic_end_io_acct" },
	{ 0xa071f2c6, "single_release" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbfdf08f5, "blk_queue_split" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0x41b0e1e4, "_dev_emerg" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9dd6fd4, "blk_alloc_queue" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2decb527, "blk_queue_max_discard_sectors" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc50793a, "generic_start_io_acct" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x2d715234, "bio_endio" },
	{ 0x772fee70, "_dev_alert" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x4d1be72f, "blk_queue_flag_clear" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x9b64a05d, "blk_queue_make_request" },
	{ 0x9f0191bf, "blk_queue_physical_block_size" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x16933923, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x81caf73f, "blk_queue_dma_alignment" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x12ff81a7, "blk_queue_logical_block_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe484e35f, "ioread32" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001014d000004A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000004AAsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D92A3B44D4B8E0AD7A688F6");
