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
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb07ae4b0, "fb_firmware_edid" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xf93fd09c, "fb_find_mode_cvt" },
	{ 0xc631580a, "console_unlock" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xab781570, "fb_get_options" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x686de290, "restore_vga" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x8ae17e67, "fb_get_mode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xce4cdb8e, "fb_find_best_mode" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf773f52, "fb_set_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x307e35c1, "fb_ddc_read" },
	{ 0xb9d55e67, "fb_validate_mode" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "vgastate,i2c-algo-bit,fb_ddc");

MODULE_ALIAS("pci:v00005333d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00009102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008C13sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00005333d00008D04sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "01F278CAAFBA88D026DD705");
