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
	{ 0x10347159, "devlink_port_register" },
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb26a1add, "elfcorehdr_addr" },
	{ 0x710fd4e8, "devlink_reload_enable" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0xaf770f2c, "pci_enable_sriov" },
	{ 0x8a954914, "devlink_reload_disable" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x754d539c, "strlen" },
	{ 0xbb3eea6e, "devlink_param_driverinit_value_get" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x87f5f48a, "pci_disable_msix" },
	{ 0x5c8f0a1a, "pci_disable_sriov" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x68c544c7, "dma_direct_sync_single_for_cpu" },
	{ 0x4fe64b7f, "pcie_print_link_status" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd8415bdc, "devlink_alloc" },
	{ 0x35eb7109, "devlink_params_register" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x40c7247c, "si_meminfo" },
	{ 0x11e18213, "__alloc_pages_nodemask" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x668b19a1, "down_read" },
	{ 0x67852db7, "devlink_param_value_changed" },
	{ 0xece784c2, "rb_first" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5c160d82, "devlink_params_publish" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6626afca, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xd22d728, "devlink_region_snapshot_create" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xce807a25, "up_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0x85a04ea2, "devlink_port_unregister" },
	{ 0x6f791233, "alloc_cpu_rmap" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xe302eb4e, "devlink_param_driverinit_value_set" },
	{ 0xa5ae863e, "devlink_region_create" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x810be09, "free_irq_cpu_rmap" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0x618911fc, "numa_node" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xcc8afd53, "pci_enable_msix_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x84972054, "param_ops_byte" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x8b5b25c8, "irq_cpu_rmap_add" },
	{ 0xd40c4eda, "devlink_free" },
	{ 0x2075ed1, "devlink_register" },
	{ 0x5ffc63db, "pci_sriov_get_totalvfs" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x519cc65b, "devlink_region_shapshot_id_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xc7bc4c0c, "pci_num_vf" },
	{ 0xedc03953, "iounmap" },
	{ 0xcf2a6966, "up" },
	{ 0x11e41db2, "devlink_params_unregister" },
	{ 0x135f9e2b, "dma_direct_sync_single_for_device" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xca9360b5, "rb_next" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xa410a295, "devlink_region_destroy" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x33a1ba14, "devlink_unregister" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x4ad8a919, "pcie_capability_write_word" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015B3d00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000634Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006354sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000673Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006368sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000675Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006764sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00006746sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000676Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000100Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "25D4BE18689C49081028B96");
