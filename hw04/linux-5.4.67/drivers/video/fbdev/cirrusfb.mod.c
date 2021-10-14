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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001013d000000ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00000038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000D6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B7A0B070F4CF6AE55309E00");
