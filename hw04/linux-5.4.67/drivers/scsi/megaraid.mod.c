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
	{ 0x442639ef, "param_ops_uint" },
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x752832c, "noop_llseek" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x8737962, "seq_write" },
	{ 0x6168380e, "seq_putc" },
	{ 0x2581e3be, "remove_proc_subtree" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0xb2cdf064, "proc_mkdir_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xedc03953, "iounmap" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x77358855, "iomem_resource" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0xba312d7b, "current_task" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xf9a482f9, "msleep" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8f812573, "pci_alloc_dev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xc4142837, "seq_printf" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{ 0x8ac3fb71, "scsi_bios_ptable" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf03164b5, "_dev_crit" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x29361773, "complete" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000101Ed00009010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00009060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001960sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2715928ABA25212C0CE4E31");
