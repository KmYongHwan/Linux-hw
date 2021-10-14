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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x6ec70757, "iio_enum_write" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x588f0134, "iio_enum_available_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x51c6dcb2, "iio_enum_read" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "4C732B4B473A92C3ABCC4D5");
