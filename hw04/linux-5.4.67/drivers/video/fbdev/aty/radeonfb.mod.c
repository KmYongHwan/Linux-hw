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
	{ 0xf9a482f9, "msleep" },
	{ 0x562cd49a, "sysfs_remove_bin_file" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb03729ed, "framebuffer_release" },
	{ 0x9b55ed4a, "pci_unmap_rom" },
	{ 0x6e4ce7a4, "fb_bl_default_curve" },
	{ 0x67ce0b7a, "fb_pan_display" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x5b641283, "arch_phys_wc_add" },
	{ 0xee58e970, "fb_add_videomode" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x4351577a, "fb_parse_edid" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68195e7e, "cfb_fillrect" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa16db1df, "fb_set_suspend" },
	{ 0xc631580a, "console_unlock" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb9056bb6, "remove_conflicting_framebuffers" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe990fee, "cfb_imageblit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x7a890c8, "fb_alloc_cmap" },
	{ 0x8c1ea5ee, "pci_map_rom" },
	{ 0x12cbb16d, "register_framebuffer" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x65e0d6d7, "memory_read_from_buffer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x96c17136, "fb_var_to_videomode" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdffc80fc, "vesa_modes" },
	{ 0x98b71c6, "fb_dealloc_cmap" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0xb1c3a01a, "oops_in_progress" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3877899, "fb_find_mode" },
	{ 0x12a38747, "usleep_range" },
	{ 0x40d04664, "console_trylock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x50a4698c, "fb_videomode_to_modelist" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb36e6427, "__pci_complete_power_transition" },
	{ 0x397edd5, "fb_edid_to_monspecs" },
	{ 0xc07b0863, "fb_destroy_modedb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x75571bf5, "framebuffer_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xf773f52, "fb_set_cmap" },
	{ 0xedc03953, "iounmap" },
	{ 0xe3c6d9e8, "sysfs_create_bin_file" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96b48f1b, "cfb_copyarea" },
	{ 0x1faadfbe, "i2c_bit_add_bus" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x50d68377, "arch_phys_wc_del" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0x307e35c1, "fb_ddc_read" },
	{ 0xb9d55e67, "fb_validate_mode" },
	{ 0x896845d2, "pci_save_state" },
	{ 0x2620a062, "unregister_framebuffer" },
};

MODULE_INFO(depends, "i2c-algo-bit,fb_ddc");

MODULE_ALIAS("pci:v00001002d00005955sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005975sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005159sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000515Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000515Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004336sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004137sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004437sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004237sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005148sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000514Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000514Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005158sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C66sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004C67sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004966sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004967sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005A62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007835sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007834sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005C61sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005C63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005960sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005961sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005962sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005964sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004144sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004145sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004146sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004147sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E46sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E47sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004151sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004152sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004153sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004154sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004156sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004148sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000414Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000414Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004E4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003E50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003E54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00003154sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B62sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B63sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005B65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005460sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005464sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A49sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A4Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004A50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005548sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005549sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000554Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000554Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005551sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005552sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005554sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005D57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005144sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005145sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005146sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00005147sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EEF22CED24E0FAAE7A64A9A");
