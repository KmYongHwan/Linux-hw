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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xc5850110, "printk" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xb9d55e67, "fb_validate_mode" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x77358855, "iomem_resource" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000121Ad00000003sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v0000121Ad00000005sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v0000121Ad00000009sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "04028F41E72B1363F22FBCD");
