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
	{ 0x3fadea45, "unregister_virtio_driver" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0xd66cd0b1, "register_virtio_driver" },
	{ 0x1953c958, "mempool_create" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xdf154fe, "virtqueue_get_vring_size" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2bade2b8, "blk_mq_unique_tag" },
	{ 0xc5850110, "printk" },
	{ 0x596660b2, "scsi_rescan_device" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x571da921, "__scsi_execute" },
	{ 0x63ff75a3, "__scsi_iterate_devices" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x1a1bb9bc, "sdev_prefix_printk" },
	{ 0x6f2613d1, "scmd_printk" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x1a015d7a, "virtio_check_driver_offered_feature" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd4034828, "system_freezable_wq" },
	{ 0x1f26612e, "virtqueue_add_sgs" },
	{ 0xcbd1c59, "virtqueue_notify" },
	{ 0x406b5921, "virtqueue_kick_prepare" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0xf06aa84a, "blk_mq_virtio_map_queues" },
	{ 0x747ba3cd, "virtqueue_kick" },
	{ 0x3f567be1, "virtqueue_add_inbuf" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x29361773, "complete" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x99c91e4d, "virtqueue_enable_cb" },
	{ 0x294d217a, "virtqueue_is_broken" },
	{ 0xe9f14282, "virtqueue_get_buf" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x5af926e0, "virtqueue_disable_cb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("virtio:d00000008v*");

MODULE_INFO(srcversion, "D1D8AE3E01EC734EE4288F5");
