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
	{ 0x266a1ac9, "sas_change_queue_depth" },
	{ 0x1fd1d2a5, "kmem_cache_destroy" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca175299, "sas_release_transport" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x542eecc5, "sas_drain_work" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xfc5c5a45, "sas_ssp_task_response" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x89e400d6, "sas_request_addr" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa5e08bb8, "sas_task_abort" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xce52237b, "sas_phy_reset" },
	{ 0x848c50b5, "sas_eh_target_reset_handler" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6f40c304, "sas_get_local_phy" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x7e806c57, "sas_target_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xd07203bc, "sas_ioctl" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xa07c2c57, "kmem_cache_free" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x182e4e12, "sas_unregister_ha" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x861d3e50, "kmem_cache_alloc" },
	{ 0xd88c6bb3, "sas_register_ha" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfa52aa89, "driver_create_file" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x672a2fa2, "sas_target_destroy" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xa231c2bc, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x3676662e, "sas_queuecommand" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf12f47be, "kmem_cache_create" },
	{ 0xeedb56d3, "sas_remove_host" },
	{ 0x7dcd6615, "sas_bios_param" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xc35a23d5, "driver_remove_file" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6fd954e, "sas_slave_configure" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0xede283d, "release_firmware" },
	{ 0x9777dc32, "sas_domain_attach_transport" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v00009005d00000410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000412sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000416sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000041Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000041Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000043Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d0000043Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "950A3AE9DF5E819CC931274");
