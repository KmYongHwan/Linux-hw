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
	{ 0x909fc014, "svga_get_tilemax" },
	{ 0xe1b3bbf9, "svga_tileblit" },
	{ 0x3fe4faec, "svga_tilefill" },
	{ 0x2e777811, "svga_tilecopy" },
	{ 0xe9896c91, "svga_get_caps" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x83a41489, "svga_set_timings" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x1be6dc30, "svga_set_textmode_vga_regs" },
	{ 0x4ab38ef2, "svga_set_default_crt_regs" },
	{ 0x17f3f471, "svga_set_default_seq_regs" },
	{ 0xd22ca511, "svga_set_default_atc_regs" },
	{ 0xe28d2a49, "svga_set_default_gfx_regs" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x25d0e5ef, "pcibios_bus_to_resource" },
	{ 0xc1b5ae32, "pci_iomap_wc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xd6ec2c44, "svga_compute_pll" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x686de290, "restore_vga" },
	{ 0xc5850110, "printk" },
	{ 0xb0ab2b2e, "svga_check_timings" },
	{ 0x84c97d2a, "svga_match_format" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xc631580a, "console_unlock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb8fba34, "svga_tilecursor" },
	{ 0x84c337c2, "svga_wcrt_multi" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "svgalib,vgastate");

MODULE_ALIAS("pci:v0000EDD8d0000A099sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1932C1FBFBF76E0DD18636");
