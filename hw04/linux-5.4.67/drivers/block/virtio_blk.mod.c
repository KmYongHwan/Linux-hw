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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x3fadea45, "unregister_virtio_driver" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xd66cd0b1, "register_virtio_driver" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9f0191bf, "blk_queue_physical_block_size" },
	{ 0x99e15a1b, "blk_queue_alignment_offset" },
	{ 0x78dbd450, "blk_queue_io_min" },
	{ 0x46607eb3, "blk_queue_io_opt" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x1882a4a4, "blk_queue_max_discard_segments" },
	{ 0x2decb527, "blk_queue_max_discard_sectors" },
	{ 0x7ae09bcd, "blk_queue_max_write_zeroes_sectors" },
	{ 0x62581558, "set_disk_ro" },
	{ 0x12ff81a7, "blk_queue_logical_block_size" },
	{ 0xb0e602eb, "memmove" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0xa6be9946, "blk_queue_max_segment_size" },
	{ 0x9dffebc8, "virtio_max_dma_size" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0xafdc8cfe, "blk_queue_max_segments" },
	{ 0xf491e366, "blk_mq_init_queue" },
	{ 0xde50127, "blk_mq_alloc_tag_set" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x852adbac, "blk_mq_unquiesce_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x37480d59, "kobject_uevent_env" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x48a91171, "string_get_size" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x27406562, "blk_mq_stop_hw_queue" },
	{ 0x747ba3cd, "virtqueue_kick" },
	{ 0x1f26612e, "virtqueue_add_sgs" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x1c28c47f, "blk_rq_map_sg" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0x6265c91a, "revalidate_disk" },
	{ 0xd2c9e2e1, "blk_queue_write_cache" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1a015d7a, "virtio_check_driver_offered_feature" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0xf966faba, "blk_execute_rq" },
	{ 0x754d539c, "strlen" },
	{ 0x8a9df9e0, "blk_put_request" },
	{ 0x4450a861, "blk_rq_map_kern" },
	{ 0x61d58859, "blk_get_request" },
	{ 0x16933923, "put_disk" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0xffb7c514, "ida_free" },
	{ 0xcbd1c59, "virtqueue_notify" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x406b5921, "virtqueue_kick_prepare" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xe8db7f67, "blk_mq_end_request" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf06aa84a, "blk_mq_virtio_map_queues" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x5f65b33b, "blk_mq_quiesce_queue" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa65d3bb5, "blk_mq_start_stopped_hw_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x99c91e4d, "virtqueue_enable_cb" },
	{ 0x294d217a, "virtqueue_is_broken" },
	{ 0xe9f14282, "virtqueue_get_buf" },
	{ 0xf10797f3, "blk_mq_complete_request" },
	{ 0x5af926e0, "virtqueue_disable_cb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000002v*");

MODULE_INFO(srcversion, "4229F02E0C62A8CEB0618C3");
