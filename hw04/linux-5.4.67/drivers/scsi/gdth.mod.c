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
	{ 0xaad49c42, "param_array_ops" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x752832c, "noop_llseek" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x3b1b6cc2, "__register_chrdev" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a921311, "strncmp" },
	{ 0x349cba85, "strchr" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9166fada, "strncpy" },
	{ 0xc4142837, "seq_printf" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xbf16bbc3, "scsi_free_host_dev" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x37a0cba, "kfree" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x29361773, "complete" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbefc8276, "scsi_get_host_dev" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5850110, "printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xba312d7b, "current_task" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001119d*sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000601sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AA04EDE766AF50381354851");
