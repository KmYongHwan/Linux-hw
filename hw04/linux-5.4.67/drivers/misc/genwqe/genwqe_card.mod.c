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
	{ 0xc5399abe, "cdev_del" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40748904, "cdev_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x117adf18, "put_pid" },
	{ 0xaf770f2c, "pci_enable_sriov" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa071f2c6, "single_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x5618b4c0, "set_page_dirty_lock" },
	{ 0x5c8f0a1a, "pci_disable_sriov" },
	{ 0xc4142837, "seq_printf" },
	{ 0x8aeb7a6b, "device_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x911efef1, "device_create_with_groups" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0x8db07afd, "kthread_create_on_node" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x6eb6656b, "pci_reset_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x1f1fe509, "kthread_stop" },
	{ 0xf1e046cc, "panic" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2864d614, "fasync_helper" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xcc9a2428, "kill_pid" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0xc6cbbc89, "capable" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x87d0e036, "pci_set_pcie_reset_state" },
	{ 0x7fe0c1d7, "debugfs_create_x64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc0af0f07, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc923b7a1, "pci_cfg_access_lock" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x5ffc63db, "pci_sriov_get_totalvfs" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0xfe31ba97, "pci_release_selected_regions" },
	{ 0xd8a909f7, "pci_request_selected_regions" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x66414bc7, "__class_create" },
	{ 0x5b219159, "pci_cfg_access_unlock" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3fa55769, "__put_page" },
	{ 0x856befeb, "get_user_pages_fast" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "crc-itu-t");

MODULE_ALIAS("pci:v00001014d0000044Bsv00001014sd0000035Fbc12sc00i00*");
MODULE_ALIAS("pci:v00001014d0000044Bsv00000000sd00000000bc12sc00i00*");
MODULE_ALIAS("pci:v00001014d00000000sv00000000sd00000000bc12sc00i00*");
MODULE_ALIAS("pci:v00001014d0000044Bsv00000000sd0000035Fbc12sc00i00*");
MODULE_ALIAS("pci:v00001014d00000000sv00000000sd0000035Fbc12sc00i00*");
MODULE_ALIAS("pci:v00001014d0000044Bsv00001014sd0000044Bbc12sc00i00*");

MODULE_INFO(srcversion, "170A733E5498B9E40468C1E");
