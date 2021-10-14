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
	{ 0xcbb3a9c, "__blk_mq_end_request" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0xe62c1ea0, "mtd_table_mutex" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0x92d5d64d, "blk_mq_unfreeze_queue" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x501561ed, "__put_mtd_device" },
	{ 0xbd059126, "blk_mq_freeze_queue" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x79f0ecea, "__get_mtd_device" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x2decb527, "blk_queue_max_discard_sectors" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0x24d472ee, "register_mtd_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf472cc90, "__mtd_next_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xa1957f18, "unregister_mtd_user" },
	{ 0x42d53c6a, "blk_update_request" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4d1be72f, "blk_queue_flag_clear" },
	{ 0xf720a60b, "module_put" },
	{ 0xd39f24b1, "blk_mq_init_sq_queue" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x16933923, "put_disk" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9415ca79, "__module_get" },
	{ 0xd2c9e2e1, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f65b33b, "blk_mq_quiesce_queue" },
	{ 0x852adbac, "blk_mq_unquiesce_queue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x12ff81a7, "blk_queue_logical_block_size" },
	{ 0x62581558, "set_disk_ro" },
};

MODULE_INFO(depends, "mtd");


MODULE_INFO(srcversion, "3561D640AA8701323854A99");
