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
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x3580f6ff, "__platform_driver_probe" },
	{ 0xc5850110, "printk" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0x6d253dca, "dmi_match" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E95FA12AFE6189D1ABD8F21");
