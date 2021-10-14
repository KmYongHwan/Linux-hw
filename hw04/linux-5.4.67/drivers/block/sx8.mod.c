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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xa7dea7af, "blk_queue_segment_boundary" },
	{ 0xafdc8cfe, "blk_queue_max_segments" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf491e366, "blk_mq_init_queue" },
	{ 0xde50127, "blk_mq_alloc_tag_set" },
	{ 0xfb578fc5, "memset" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x29361773, "complete" },
	{ 0x74fcdbd8, "blk_mq_stop_hw_queues" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x1c28c47f, "blk_rq_map_sg" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x754d539c, "strlen" },
	{ 0x9166fada, "strncpy" },
	{ 0xf786f333, "blk_mq_start_hw_queues" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe8db7f67, "blk_mq_end_request" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x549e9adc, "blk_execute_rq_nowait" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x8a24fa71, "blk_mq_alloc_request" },
	{ 0xc5850110, "printk" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0x16933923, "put_disk" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000105Ad00008000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Ad00008002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "366D86C744E5B7C86A9FA24");
