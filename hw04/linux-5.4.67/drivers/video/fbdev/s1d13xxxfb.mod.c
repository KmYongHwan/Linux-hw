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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x85bd1608, "__request_region" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0xc5850110, "printk" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0F7615637A9ED983B04DE1");
