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
	{ 0xcc445ceb, "__sg_page_iter_dma_next" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0xf90504f0, "ib_set_device_ops" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x494b3385, "pcix_set_mmrbc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xce13e75f, "ib_register_mad_agent" },
	{ 0x47178151, "pcie_set_readrq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfda9a24f, "ib_free_send_mad" },
	{ 0x1c1bb695, "ib_dealloc_device" },
	{ 0x82a0eab2, "rdma_destroy_ah_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xae956dce, "ib_rate_to_mult" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x9084b044, "clear_page_erms" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3e5896e, "ib_query_port" },
	{ 0x925493f, "clear_page_orig" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x99d92899, "pcix_get_max_mmrbc" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xd62ebcf7, "ib_umem_get" },
	{ 0x6626afca, "down" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xec187947, "ib_get_cached_pkey" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb7852a05, "ib_ud_header_init" },
	{ 0xac75c4f, "ib_dispatch_event" },
	{ 0xca1c07c5, "ib_create_send_mad" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xd1295c75, "ib_post_send_mad" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0xe9f2b767, "ib_unregister_mad_agent" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x23b4e0d7, "clear_page_rep" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25d78014, "ib_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb945d768, "ib_unregister_device" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x7dba6c73, "rdma_create_ah" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x36728730, "_ib_alloc_device" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xd34c971d, "pci_get_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe9e799fc, "ib_ud_header_pack" },
	{ 0xe7b52e5f, "mult_to_ib_rate" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x4ad8a919, "pcie_capability_write_word" },
	{ 0x20ba1a75, "ib_umem_release" },
	{ 0xa637b975, "dma_ops" },
	{ 0x3fa55769, "__put_page" },
	{ 0x856befeb, "get_user_pages_fast" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "ib_core,ib_uverbs");

MODULE_ALIAS("pci:v000015B3d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006278sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006282sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00006274sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00005E8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001867d00005E8Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "11AB707D403BAC64AA17546");
