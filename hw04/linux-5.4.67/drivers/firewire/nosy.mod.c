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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x343f1816, "misc_deregister" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xe4f5a219, "stream_open" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x47fda759, "misc_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000104Cd00008000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "77AA7083FC91C1DB83DD891");
