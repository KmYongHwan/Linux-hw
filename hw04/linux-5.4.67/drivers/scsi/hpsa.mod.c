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
	{ 0xca175299, "sas_release_transport" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xbe55f10, "sas_attach_transport" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xba312d7b, "current_task" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xbffde8ec, "compat_alloc_user_space" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x90576ec4, "vmemdup_user" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xc5850110, "printk" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0xa3130988, "scsi_host_get" },
	{ 0x4e9168fc, "sas_port_add_phy" },
	{ 0x63da0a4c, "sas_phy_add" },
	{ 0x128f7f40, "sas_phy_alloc" },
	{ 0x27756bc8, "scsi_sanitize_inquiry_string" },
	{ 0xd1034c9c, "scsi_device_put" },
	{ 0x84b88922, "scsi_remove_device" },
	{ 0x3dc3ac59, "scsi_device_lookup" },
	{ 0xd1f3d9fc, "scsi_add_device" },
	{ 0x653efc76, "sas_rphy_add" },
	{ 0x786f22cb, "sas_end_device_alloc" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xca9b96b9, "scsi_print_command" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x29361773, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x2a303d4d, "check_signature" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x36490ac8, "pci_irq_get_affinity" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc38973ed, "pci_disable_link_state" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x9166fada, "strncpy" },
	{ 0xc6cbbc89, "capable" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0xedc03953, "iounmap" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0xfbad3cf0, "scsi_normalize_sense" },
	{ 0x35465e15, "wait_for_completion_io" },
	{ 0x139cee21, "wait_for_completion_io_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0xee6537d9, "blk_queue_rq_timeout" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x96848186, "scnprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfb578fc5, "memset" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1d39f423, "sas_port_free" },
	{ 0xfe4d78c8, "sas_port_add" },
	{ 0xc3acfd9b, "sas_port_alloc_num" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x86cc32d8, "sas_port_delete" },
	{ 0x37a0cba, "kfree" },
	{ 0xa935edb5, "sas_phy_delete" },
	{ 0x67ff2b22, "sas_port_delete_phy" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "scsi_transport_sas");

MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003241bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003243bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003245bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003247bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003249bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Abc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Bbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003233bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003350bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003351bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003352bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003353bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003354bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003355bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003356bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001920bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001921bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001922bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001923bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001924bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001925bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001926bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001928bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001929bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BEbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BFbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C0bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C1bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C2bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C3bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C4bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C5bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C6bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C7bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C8bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C9bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CAbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CBbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CCbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CEbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000581bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000582bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000583bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000584bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000585bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000076bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000087bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd0000007Dbc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000088bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000333Fsv0000103Csd0000333Fbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd*sv*sd*bc01sc04i*");
MODULE_ALIAS("pci:v00000E11d*sv*sd*bc01sc04i*");

MODULE_INFO(srcversion, "0D40A3F6EA8DA56AF512A9D");
