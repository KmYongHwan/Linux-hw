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
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0xbb77e50, "input_ff_create_memless" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x5654e6bf, "pwm_apply_state" },
	{ 0x299a31fd, "devm_pwm_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("platform:max77693-haptic");
MODULE_ALIAS("platform:max77843-haptic");

MODULE_INFO(srcversion, "45A31F51C0788A4641692C9");
