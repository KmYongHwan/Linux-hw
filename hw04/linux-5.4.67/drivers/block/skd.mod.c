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
	{ 0x2d3385d3, "system_wq" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xee6537d9, "blk_queue_rq_timeout" },
	{ 0xf786f333, "blk_mq_start_hw_queues" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x670f864e, "blk_mq_requeue_request" },
	{ 0x481712b, "blk_cleanup_queue" },
	{ 0x46607eb3, "blk_queue_io_opt" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb714b5c, "blk_queue_max_hw_sectors" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x3cb845cc, "blk_mq_tagset_busy_iter" },
	{ 0x2b79cdc1, "blk_mq_start_request" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3d943849, "blk_mq_tag_to_rq" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xf10797f3, "blk_mq_complete_request" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5495a1b7, "__alloc_disk_node" },
	{ 0x2bade2b8, "blk_mq_unique_tag" },
	{ 0xf491e366, "blk_mq_init_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xafdc8cfe, "blk_queue_max_segments" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0xfb578fc5, "memset" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xb29b06fc, "del_gendisk" },
	{ 0x8b378436, "blk_mq_free_tag_set" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x74fcdbd8, "blk_mq_stop_hw_queues" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6fbec09b, "kmem_cache_size" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4d1be72f, "blk_queue_flag_clear" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x29869d14, "blk_queue_flag_set" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x16933923, "put_disk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x1c28c47f, "blk_rq_map_sg" },
	{ 0xde50127, "blk_mq_alloc_tag_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe8db7f67, "blk_mq_end_request" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9ad03563, "pci_disable_pcie_error_reporting" },
	{ 0xd2c9e2e1, "blk_queue_write_cache" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3e0bc3d7, "device_add_disk" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xa637b975, "dma_ops" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001B39d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E5D7C468372EF04152A71C1");
