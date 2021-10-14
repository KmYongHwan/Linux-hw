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
	{ 0x2d1d4ed3, "st_lsm6dsx_pm_ops" },
	{ 0x4170a8fb, "i3c_driver_unregister" },
	{ 0xfcc78961, "i3c_driver_register_with_owner" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x686e2a5f, "st_lsm6dsx_probe" },
	{ 0xea18658a, "__devm_regmap_init_i3c" },
	{ 0x2d21aab2, "i3c_device_match_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_lsm6dsx,i3c,regmap-i3c");


MODULE_INFO(srcversion, "7FF00C302290D133BC0C377");
