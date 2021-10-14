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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x85df9b6c, "strsep" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x5a921311, "strncmp" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x5792f848, "strlcpy" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x61651be, "strcat" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000126Fd00000750sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1687C6525D945BF4E6C12A6");
