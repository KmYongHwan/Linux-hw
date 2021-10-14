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
	{ 0xe7750f8, "kobject_put" },
	{ 0x182a6841, "vnic_dev_unregister" },
	{ 0xf90504f0, "ib_set_device_ops" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2491a84f, "kobject_get" },
	{ 0xd13be7fe, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5243d80e, "iommu_attach_device" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xc851a750, "sockfd_lookup" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xc1588af8, "ib_device_put" },
	{ 0xfa11a732, "ib_get_eth_speed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x7ba8b89, "iommu_map" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xfa690589, "netdev_cmd_to_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd715f8ab, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0x1c1bb695, "ib_dealloc_device" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xba312d7b, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x32db97c9, "vnic_dev_get_res" },
	{ 0x32d4fe0b, "iommu_set_fault_handler" },
	{ 0x1904b5, "vnic_dev_register" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x3e5896e, "ib_query_port" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x925e131c, "ib_device_set_netdev" },
	{ 0x9cb6a08f, "iommu_unmap" },
	{ 0xb921838, "iommu_domain_alloc" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x7cdb5812, "vnic_dev_get_pdev" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xfc09c6c7, "iommu_domain_free" },
	{ 0xa0fd0123, "fput" },
	{ 0x25c69d79, "iommu_capable" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0x8a0e99f5, "iommu_detach_device" },
	{ 0xac75c4f, "ib_dispatch_event" },
	{ 0x19d2cb7, "ib_device_get_by_netdev" },
	{ 0xc6cbbc89, "capable" },
	{ 0x531fdf70, "iommu_present" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcede1db4, "get_user_pages" },
	{ 0x25d78014, "ib_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x65cb7806, "put_user_pages_dirty_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb945d768, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x36728730, "_ib_alloc_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2072c172, "vnic_dev_get_res_count" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x4f10c5a1, "enic_api_devcmd_proxy_by_index" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "enic,ib_core");

MODULE_ALIAS("pci:v00001137d000000CFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "298F4B5F896A9A05FA8538C");
