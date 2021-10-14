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
	{ 0x266a1ac9, "sas_change_queue_depth" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xca175299, "sas_release_transport" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x542eecc5, "sas_drain_work" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xfc5c5a45, "sas_ssp_task_response" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xce52237b, "sas_phy_reset" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x848c50b5, "sas_eh_target_reset_handler" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6f40c304, "sas_get_local_phy" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7e806c57, "sas_target_alloc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd07203bc, "sas_ioctl" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x182e4e12, "sas_unregister_ha" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xd88c6bb3, "sas_register_ha" },
	{ 0xa5860cdc, "sas_alloc_slow_task" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7ea19302, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x672a2fa2, "sas_target_destroy" },
	{ 0xa231c2bc, "sas_eh_device_reset_handler" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x3676662e, "sas_queuecommand" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeedb56d3, "sas_remove_host" },
	{ 0x7dcd6615, "sas_bios_param" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x3f9e0869, "sas_free_task" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6fd954e, "sas_slave_configure" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x9777dc32, "sas_domain_attach_transport" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "libsas,scsi_transport_sas");

MODULE_ALIAS("pci:v000011ABd00006320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006440sv*sd00006480bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006485sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00009480sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00009180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D3d00001320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000450sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002721sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002744sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002760sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009480sv*sd00009480bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009445sv*sd00009480bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00009485sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001083sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B85d00001084sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D7957F6B69CBFAC6CEC0622");
