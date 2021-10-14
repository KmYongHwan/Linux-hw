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
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5534d64, "ioread16" },
	{ 0xc5e74216, "release_resource" },
	{ 0x4ed34c9d, "pci_bus_alloc_resource" },
	{ 0x3da171f9, "pci_mem_start" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb042253c, "vme_register_bridge" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x28daca86, "vme_init_bridge" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x6d00d14b, "vme_irq_handler" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf791e87b, "vme_unregister_bridge" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xe484e35f, "ioread32" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010E3d00000000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "041590C2A705E7BE55AFF55");
