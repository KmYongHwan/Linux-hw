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
	{ 0x6e626fc8, "device_get_next_child_node" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa77e039e, "gpiochip_remove" },
	{ 0xd567ba2c, "iio_device_unregister" },
	{ 0x68a82987, "gpiochip_add_data_with_key" },
	{ 0xaab10de4, "devm_iio_device_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf490d28c, "__iio_device_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4a95d625, "gpiochip_get_data" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x984d22a0, "regulator_get_voltage" },
	{ 0x4fc91a1f, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x2477c80f, "gpiod_set_value" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x1fa8ea04, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "0F7A88D9872F1A6D4770BF4");
