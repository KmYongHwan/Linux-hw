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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x37a0cba, "kfree" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x307e35c1, "fb_ddc_read" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x1cf1bc24, "pci_ioremap_wc_bar" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0xb9d55e67, "fb_validate_mode" },
	{ 0xc5850110, "printk" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xc631580a, "console_unlock" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fb_ddc,i2c-algo-bit");

MODULE_ALIAS("pci:v00008086d000000D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E25436C87BB7F415C9DC481");
