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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xab781570, "fb_get_options" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc631580a, "console_unlock" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000126Fd00000710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00000712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00000720sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D9160E2912AE2B16725BCD9");
