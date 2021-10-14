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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xfb578fc5, "memset" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x29361773, "complete" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3140c6f6, "nand_status_op" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8c4215b, "nand_read_oob_op" },
	{ 0xf559a7e9, "device_create_file" },
	{ 0x8de442fc, "sm_register_device" },
	{ 0xc5850110, "printk" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x4dfd06b0, "nand_release" },
	{ 0x9f8e5a9e, "device_remove_file" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6c6f4e9d, "nand_deselect_target" },
	{ 0xec156460, "nand_reset_op" },
	{ 0x79ad9d4c, "nand_select_target" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xf9a482f9, "msleep" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nand,sm_common");

MODULE_ALIAS("pci:v00001180d00000852sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8A129D9BECCC0FB08369DD2");
