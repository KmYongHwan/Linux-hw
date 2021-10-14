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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x8fa8a174, "__uio_register_device" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x9113120c, "devm_kasprintf" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0x37a0cba, "kfree" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0xf0e16e2d, "uio_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uio");


MODULE_INFO(srcversion, "9FBD4582A6C26FD39CB18DA");
