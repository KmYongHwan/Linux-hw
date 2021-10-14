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
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x74801e4, "param_ops_ulong" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5ab7d81c, "sm501_modify_reg" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xf773f52, "fb_set_cmap" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x5792f848, "strlcpy" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc548da3e, "sm501_misc_control" },
	{ 0x13fc738b, "sm501_set_clock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x37a0cba, "kfree" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x204d0569, "sm501_unit_power" },
	{ 0x999e8297, "vfree" },
	{ 0xc631580a, "console_unlock" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sm501");


MODULE_INFO(srcversion, "7C00ADF709C5C92B3FB6FD1");
