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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe98a304a, "scsi_change_queue_depth" },
	{ 0x2877d775, "pci_free_irq_vectors" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x754d539c, "strlen" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x296a43df, "scsi_block_requests" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xb28a5591, "scsi_unblock_requests" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x995483f2, "scsi_is_fc_rport" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa9263e2b, "pcie_capability_clear_and_set_word" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9118b456, "pci_alloc_irq_vectors_affinity" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xdefbea52, "default_llseek" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x22a40084, "debugfs_create_file_size" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa39adc65, "fc_vport_terminate" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xdc25b27c, "blk_mq_rq_cpu" },
	{ 0x9ecba507, "fc_remote_port_rolechg" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xeee90dc9, "init_uts_ns" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x6d22963d, "pci_find_capability" },
	{ 0xf2f9d256, "fc_release_transport" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xafaf0e45, "pci_select_bars" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xa916b694, "strnlen" },
	{ 0xf0d67d0d, "pcie_relaxed_ordering_enabled" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfd88423f, "fc_remote_port_delete" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1953c958, "mempool_create" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb1e043f8, "fc_block_scsi_eh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x20716107, "pci_try_set_mwi" },
	{ 0xc78cbbeb, "pci_irq_vector" },
	{ 0x7096e223, "fc_eh_timed_out" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x19911d6f, "fc_remove_host" },
	{ 0x71deb539, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x3cd6bd1c, "fc_remote_port_add" },
	{ 0xef53f3b5, "pci_enable_device_mem" },
	{ 0x77bc13a0, "strim" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xfe31ba97, "pci_release_selected_regions" },
	{ 0xd8a909f7, "pci_request_selected_regions" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xd49808d6, "fc_attach_transport" },
	{ 0xede283d, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xd0065fca, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xf2413189, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_fc");

MODULE_ALIAS("pci:v00001425d00004600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000460Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000560Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005610sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005612sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005613sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005615sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005616sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005617sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005618sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005619sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000561Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000561Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005690sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005691sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005692sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005693sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005694sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005695sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005696sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005697sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005698sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005699sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000569Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000056B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006604sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006605sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006606sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006607sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006609sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000660Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006611sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006614sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006615sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006683sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006684sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006685sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006686sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006687sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006688sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006689sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000668Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000668Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2E7FCFA86940B3AC3B35926");
