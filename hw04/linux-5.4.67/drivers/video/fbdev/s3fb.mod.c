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
	{ 0x9c8f3cec, "svga_settile" },
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
	{ 0x1be6dc30, "svga_set_textmode_vga_regs" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x83a41489, "svga_set_timings" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4ab38ef2, "svga_set_default_crt_regs" },
	{ 0x17f3f471, "svga_set_default_seq_regs" },
	{ 0xd22ca511, "svga_set_default_atc_regs" },
	{ 0xe28d2a49, "svga_set_default_gfx_regs" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x37a0cba, "kfree" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0x307e35c1, "fb_ddc_read" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x25d0e5ef, "pcibios_bus_to_resource" },
	{ 0xc1b5ae32, "pci_iomap_wc" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd6ec2c44, "svga_compute_pll" },
	{ 0xb0ab2b2e, "svga_check_timings" },
	{ 0x84c97d2a, "svga_match_format" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x686de290, "restore_vga" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xedc03953, "iounmap" },
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
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "svgalib,fb_ddc,i2c-algo-bit,vgastate");

MODULE_ALIAS("pci:v00005333d00008810sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008812sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008814sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008901sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00005631sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d0000883Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A13sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008904sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C01sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "971A9F5947B813B115AC5AA");
