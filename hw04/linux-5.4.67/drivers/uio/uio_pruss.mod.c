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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x8fa8a174, "__uio_register_device" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x486075c8, "gen_pool_dma_alloc" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe4413db4, "clk_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0e16e2d, "uio_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "uio");


MODULE_INFO(srcversion, "DEEF50DB8528B63041AD767");
