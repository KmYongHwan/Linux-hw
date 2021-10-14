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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb4c10c85, "memstick_unregister_driver" },
	{ 0x800efd53, "memstick_register_driver" },
	{ 0x62581558, "set_disk_ro" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x12ff81a7, "blk_queue_logical_block_size" },
	{ 0xa6be9946, "blk_queue_max_segment_size" },
	{ 0xafdc8cfe, "blk_queue_max_segments" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0xd39f24b1, "blk_mq_init_sq_queue" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0xcbb3a9c, "__blk_mq_end_request" },
	{ 0x42d53c6a, "blk_update_request" },
	{ 0xe8db7f67, "blk_mq_end_request" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x1c28c47f, "blk_rq_map_sg" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4a4e5778, "memstick_init_req_sg" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xfb578fc5, "memset" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xde006432, "sg_miter_next" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x87b8798d, "sg_next" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97461d6a, "memstick_new_req" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x29361773, "complete" },
	{ 0xae50437c, "memstick_init_req" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0xf786f333, "blk_mq_start_hw_queues" },
	{ 0x16933923, "put_disk" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x37a0cba, "kfree" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x670f864e, "blk_mq_requeue_request" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x74fcdbd8, "blk_mq_stop_hw_queues" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "memstick");


MODULE_INFO(srcversion, "46167309D1FB39F7707913B");
