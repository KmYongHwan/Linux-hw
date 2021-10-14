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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x6e4ce7a4, "fb_bl_default_curve" },
	{ 0xfdcc8a0e, "fb_find_best_display" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x4351577a, "fb_parse_edid" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6513a3fa, "fb_get_color_depth" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xb07ae4b0, "fb_firmware_edid" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe75e7429, "pci_get_domain_bus_and_slot" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0x686de290, "restore_vga" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe7a2620e, "save_vga" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x8ae17e67, "fb_get_mode" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xce4cdb8e, "fb_find_best_mode" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x61ea189b, "fb_pad_aligned_buffer" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x307e35c1, "fb_ddc_read" },
	{ 0xb9d55e67, "fb_validate_mode" },
	{ 0x12f6f69c, "fb_videomode_to_var" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "vgastate,i2c-algo-bit,fb_ddc");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "EAD57A29745A433ECAA8391");
