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
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9f8432b6, "pwm_request" },
	{ 0x30e70d02, "gpiod_direction_output" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x690e053c, "devm_gpio_request_one" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x63d98d0f, "regulator_is_enabled" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
	{ 0xc973710c, "backlight_device_register" },
	{ 0x299a31fd, "devm_pwm_get" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0x95e572f, "gpiod_get_direction" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xf675d208, "pwm_free" },
	{ 0xe7ccd3bc, "backlight_device_unregister" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x5654e6bf, "pwm_apply_state" },
	{ 0xf858aaf8, "gpiod_set_value_cansleep" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8A8B8FD0DD9FE5538AC058D");
