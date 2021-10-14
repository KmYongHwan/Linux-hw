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
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x307e35c1, "fb_ddc_read" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_ddc,i2c-algo-bit");

MODULE_ALIAS("pci:v00001023d00009880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008620sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009440sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009320sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009388sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009520sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009525sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009397sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d0000939Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00008820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009910sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001023d00009930sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "361F1D1C9125FC02B98B8EA");
