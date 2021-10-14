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
	{ 0xe990fee, "cfb_imageblit" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xe484e35f, "ioread32" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Copencores,ocfb");
MODULE_ALIAS("of:N*T*Copencores,ocfbC*");

MODULE_INFO(srcversion, "49F9DB175CF401A2321E9B4");
