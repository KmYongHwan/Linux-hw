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
	{ 0x1d3a7ea7, "param_ops_invbool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xf773f52, "fb_set_cmap" },
	{ 0x67ce0b7a, "fb_pan_display" },
	{ 0xc631580a, "console_unlock" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x9b55ed4a, "pci_unmap_rom" },
	{ 0x8c1ea5ee, "pci_map_rom" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6e4ce7a4, "fb_bl_default_curve" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x2620a062, "unregister_framebuffer" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001002d00004C45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004D46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004D4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005043sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005045sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005047sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005048sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005049sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000504Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005245sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005246sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005247sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000524Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000524Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005345sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005346sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005347sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005348sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000534Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000544Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005452sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005453sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005454sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005455sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "41B0503320C5933C01582D3");
