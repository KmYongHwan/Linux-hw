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
	{ 0x44e1b7dc, "alloc_pages_current" },
	{ 0x2bdb9d00, "cdev_alloc" },
	{ 0x780aca48, "rvt_add_rnr_timer" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0xf90504f0, "ib_set_device_ops" },
	{ 0xc5399abe, "cdev_del" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xcd265da4, "rvt_compute_aeth" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0xdcda97fb, "__put_devmap_managed_page" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x349cba85, "strchr" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x49b0e8c2, "rvt_alloc_device" },
	{ 0x754d539c, "strlen" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x7545c1c3, "get_tree_single" },
	{ 0x2135e40f, "rvt_comm_est" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x79ff3bbe, "seq_open" },
	{ 0x82900c52, "rvt_restart_sge" },
	{ 0xfcb38a9d, "rvt_copy_sge" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x47178151, "pcie_set_readrq" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0xa9785b49, "cpu_core_map" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x2b7928f0, "rvt_init_port" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xba1696fb, "rvt_register_device" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x41b0b9cc, "dput" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe7d72b83, "kobject_set_name" },
	{ 0x1316eed6, "rvt_rc_error" },
	{ 0x55b81fae, "inc_nlink" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xd54709d9, "driver_for_each_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x999e8297, "vfree" },
	{ 0xa9a66bd3, "pcie_get_readrq" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x877cbd7b, "rvt_get_rwqe" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0x668b19a1, "down_read" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xfda9a24f, "ib_free_send_mad" },
	{ 0x82a0eab2, "rdma_destroy_ah_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1709b155, "pcie_get_mps" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xdc008e89, "rvt_mcast_find" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x30aca90c, "dca3_get_tag" },
	{ 0x50d1f870, "pgprot_writecombine" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x80766b41, "rvt_dealloc_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x55bf9b92, "rvt_cq_enter" },
	{ 0xc21e426e, "pci_enable_pcie_error_reporting" },
	{ 0xac34ecec, "dca_register_notify" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xb3715ef1, "kill_litter_super" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x1a33ab9, "dca_unregister_notify" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x321373f4, "rvt_qp_iter_init" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x7211e597, "rvt_qp_iter_next" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x9166fada, "strncpy" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x752832c, "noop_llseek" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x88e96942, "device_create" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeee90dc9, "init_uts_ns" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0xea415960, "dca_add_requester" },
	{ 0xce807a25, "up_write" },
	{ 0x3d6886ae, "pci_request_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xed7adcd, "rdma_destroy_ah_attr" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x24e4f228, "__task_pid_nr_ns" },
	{ 0xac75c4f, "ib_dispatch_event" },
	{ 0x1ce0ce2e, "rvt_add_retry_timer_ext" },
	{ 0xca1c07c5, "ib_create_send_mad" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xd1295c75, "ib_post_send_mad" },
	{ 0x19d1aa1e, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xc6cbbc89, "capable" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0x43a8e2b7, "__free_pages" },
	{ 0xc60854c8, "kmem_cache_alloc_node_trace" },
	{ 0x6ffd7a6c, "pcie_set_mps" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0xcdf61d99, "simple_unlink" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xfb30a222, "rvt_rkey_ok" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0x64042456, "simple_dir_operations" },
	{ 0x996504f0, "rvt_get_credit" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x4ddc03f7, "pci_free_irq" },
	{ 0x9982939d, "rvt_send_complete" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcede1db4, "get_user_pages" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x65cb7806, "put_user_pages_dirty_lock" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x664b3b7a, "d_drop" },
	{ 0x8735ed3d, "irq_set_affinity_notifier" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x7dba6c73, "rdma_create_ah" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xc20cbcf4, "rvt_unregister_device" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x28c1a4eb, "rvt_stop_rc_timers" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0x8b4894bf, "register_filesystem" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xd9198f88, "rvt_error_qp" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x5d597b48, "remap_pfn_range" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x638c7869, "current_time" },
	{ 0xedc03953, "iounmap" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0x18c1f5d1, "simple_fill_super" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe02c9c92, "__xa_erase" },
	{ 0x96848186, "scnprintf" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x71deb539, "request_firmware" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0xbbfbcb0d, "unregister_filesystem" },
	{ 0xe7b52e5f, "mult_to_ib_rate" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4167f609, "seq_release" },
	{ 0xe563476f, "param_get_string" },
	{ 0x2947182d, "new_inode" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0x76201a4, "lookup_one_len" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0xac92d3e3, "dca_remove_requester" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x48b84203, "simple_dir_inode_operations" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0xdbd019c4, "ib_wq" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x66414bc7, "__class_create" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x19973b71, "d_instantiate" },
	{ 0xede283d, "release_firmware" },
	{ 0xa637b975, "dma_ops" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x3fa55769, "__put_page" },
	{ 0x85e8fce2, "rvt_ruc_loopback" },
	{ 0x856befeb, "get_user_pages_fast" },
	{ 0x44ece099, "simple_rmdir" },
	{ 0xd0065fca, "pcie_capability_read_word" },
	{ 0xe385842, "ib_rvt_state_ops" },
	{ 0x39291b63, "__d_drop" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "rdmavt,ib_core,dca");

MODULE_ALIAS("pci:v00001FC1d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00007220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001077d00007322sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5C474A8B50EB288C775383A");
